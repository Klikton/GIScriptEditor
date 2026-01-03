module;
#include <d2d1_3.h>
#include <wrl.h>
export module image;

import std;

using namespace Microsoft::WRL;

export namespace Editor::Tool::Image
{
	ComPtr<ID2D1Bitmap> LoadBitmapFromFile(ID2D1DeviceContext* ctx, const std::filesystem::path& path, int width, int height);
	ComPtr<ID2D1Bitmap> LoadBitmapFromMemory(ID2D1DeviceContext* ctx, BYTE* data, size_t size, int width, int height);
}
