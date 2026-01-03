module;
#include <Windows.h>
#include <shobjidl.h> 
#include <wrl.h>
#include <ffi.h>
export module util;

import std;

using namespace Microsoft::WRL;

export namespace Utils
{
	std::wstring ToUtf16(const std::string& str, UINT page = CP_UTF8)
	{
		if (str.empty()) return L"";
		auto size = MultiByteToWideChar(page, 0, str.c_str(), (int)str.length(), nullptr, 0);
		if (size == 0) return L"";
		std::wstring result(size, 0);
		MultiByteToWideChar(page, 0, str.c_str(), (int)str.length(), result.data(), size);
		return result;
	}

	std::tuple<BYTE*, size_t> GetResource(int id, const wchar_t* type, HMODULE module = nullptr)
	{
		auto res = FindResourceW(module, MAKEINTRESOURCEW(id), type);
		return { (BYTE*)LoadResource(module, res),SizeofResource(module, res) };
	}

	class FileDialogHelper
	{
	public:
		static std::wstring OpenFile(HWND hwnd, const std::vector<std::pair<std::wstring, std::wstring>>& filters)
		{
			std::wstring result;
			ComPtr<IFileOpenDialog> dialog;
			if (SUCCEEDED(CoCreateInstance(CLSID_FileOpenDialog, nullptr, CLSCTX_ALL, IID_PPV_ARGS(&dialog))))
			{
				auto ops = FOS_FORCEFILESYSTEM | FOS_FILEMUSTEXIST;
				if (filters.empty()) ops |= FOS_PICKFOLDERS;
				dialog->SetOptions(ops);
				if (!filters.empty())
				{
					std::vector<COMDLG_FILTERSPEC> filter_specs;
					for (auto& [fst, snd] : filters) filter_specs.push_back({ fst.data(),snd.data() });
					dialog->SetFileTypes(filter_specs.size(), filter_specs.data());
				}
				if (SUCCEEDED(dialog->Show(hwnd)))
				{
					ComPtr<IShellItem> item;
					if (SUCCEEDED(dialog->GetResult(&item)))
					{
						PWSTR path;
						if (SUCCEEDED(item->GetDisplayName(SIGDN_FILESYSPATH, &path)))
						{
							result = path;
							CoTaskMemFree(path);
						}
					}
				}
			}
			return result;
		}

		static std::wstring SaveFile(HWND hwnd, const std::wstring& default_ext = L"", const std::vector<std::pair<std::wstring, std::wstring>>& filters = {})
		{
			std::wstring result;
			ComPtr<IFileSaveDialog> dialog;
			if (CoCreateInstance(CLSID_FileSaveDialog, nullptr, CLSCTX_ALL, IID_PPV_ARGS(&dialog)))
			{
				dialog->SetOptions(FOS_FORCEFILESYSTEM | FOS_OVERWRITEPROMPT);
				if (!default_ext.empty()) dialog->SetDefaultExtension(default_ext.c_str());
				if (!filters.empty())
				{
					std::vector<COMDLG_FILTERSPEC> filter_specs;
					for (auto& [fst, snd] : filters) filter_specs.push_back({ fst.data(),snd.data() });
					dialog->SetFileTypes(filter_specs.size(), filter_specs.data());
				}
				if (SUCCEEDED(dialog->Show(hwnd)))
				{
					ComPtr<IShellItem> item;
					if (SUCCEEDED(dialog->GetResult(&item)))
					{
						PWSTR path;
						if (SUCCEEDED(item->GetDisplayName(SIGDN_FILESYSPATH, &path)))
						{
							result = path;
							CoTaskMemFree(path);
						}
					}
				}
			}
			return result;
		}
	};

	template<typename T>
	struct Future
	{
		std::future<T> fut;

		static bool await_ready() { return false; }

		void await_suspend(std::coroutine_handle<> handle)
		{
			std::thread([this, handle]
				{
					fut.wait();
					handle.resume();
				}).detach();
		}

		T await_resume() { return fut.get(); }
	};

	struct Task
	{
		struct promise_type
		{
			static Task get_return_object() { return {}; }
			static std::suspend_never initial_suspend() { return {}; }
			static std::suspend_never final_suspend() noexcept { return {}; }
			static void return_void() {}
			static void unhandled_exception() {}
		};
	};

	template<typename F>
	class Delegate;

	template<typename R, typename... Args>
	class Delegate<R(Args...)>
	{
		struct Context
		{
			std::function<R(Args...)> original;
			std::unique_ptr<ffi_cif> cif;
			ffi_type* ret_type;
			ffi_type** args_type;
			ffi_closure* closure;
			R(*ptr)(Args...);

			explicit Context(std::function<R(Args...)> func) : original(std::move(func)), cif(std::make_unique<ffi_cif>()), ret_type(nullptr), args_type(nullptr), closure(nullptr), ptr(nullptr)
			{
				if (ffi_prep_cif(cif.get(), FFI_DEFAULT_ABI, sizeof...(Args), ret_type = GetType<R>(), args_type = new ffi_type * [] { GetType<Args>()... }) != FFI_OK) throw std::runtime_error("Create failed");
				closure = (ffi_closure*)ffi_closure_alloc(sizeof(ffi_closure), (void**)&ptr);
				if (!closure) throw std::runtime_error("Create failed");
				if (ffi_prep_closure_loc(closure, cif.get(), Trampoline, this, ptr) != FFI_OK)
				{
					ffi_closure_free(closure);
					throw std::runtime_error("Create failed");
				}
			}

			template<size_t... Is>
			void Call(void* ret, void** args, std::index_sequence<Is...>)
			{
				if constexpr (std::is_void_v<R>) original(Extract<Args>(args[Is])...);
				else *static_cast<R*>(ret) = original(Extract<Args>(args[Is])...);
			}

			~Context()
			{
				if (closure) ffi_closure_free(closure);
				if (args_type) delete[] args_type;
				args_type = nullptr;
				closure = nullptr;
				ptr = nullptr;
			}
		};

		std::unique_ptr<Context> context;

		template<typename T>
		static consteval ffi_type* GetType()
		{
			if constexpr (std::is_same_v<T, INT32>) return &ffi_type_sint32;
			else if constexpr (std::is_same_v<T, INT64>) return &ffi_type_sint64;
			else if constexpr (std::is_same_v<T, float>) return &ffi_type_float;
			else if constexpr (std::is_same_v<T, double>) return &ffi_type_double;
			else if constexpr (std::is_same_v<T, UINT32>) return &ffi_type_uint32;
			else if constexpr (std::is_same_v<T, UINT64>) return &ffi_type_uint64;
			else if constexpr (std::is_same_v<T, UINT8>) return &ffi_type_uint8;
			else if constexpr (std::is_same_v<T, INT8>) return &ffi_type_sint8;
			else if constexpr (std::is_same_v<T, UINT16>) return &ffi_type_uint16;
			else if constexpr (std::is_same_v<T, INT16>) return &ffi_type_sint16;
			else if constexpr (std::is_void_v<T>) return &ffi_type_void;
			else if constexpr (std::is_pointer_v<T>) return &ffi_type_pointer;
			else static_assert(false, "Unsupported type");
			return nullptr;
		}

		static void Trampoline(ffi_cif*, void* ret, void** args, void* user_data)
		{
			auto& instance = *(Context*)user_data;
			instance.Call(ret, args, std::index_sequence_for<Args...>{});
		}

		template<typename T>
		static T Extract(void* arg) { return *(T*)arg; }
	public:
		Delegate(std::function<R(Args...)> func) : context(std::make_unique<Context>(std::move(func))) {}

		template<typename Callable> requires std::is_invocable_r_v<R, Callable, Args...>
		Delegate(Callable&& func) : Delegate(std::function(std::move(func))) {}

		Delegate(Delegate&& other) noexcept = default;
		Delegate& operator=(Delegate&& other) noexcept = default;

		decltype(Context::ptr) Get() const { return context->ptr; }
	};
}
