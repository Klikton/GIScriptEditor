export module app.window;

import std;
import window;
import util;
import compiler;
import widgets;
import image;

export namespace Editor::App
{
	class MainWindow : public Base::Window
	{
		UI::TextBox* project_path;
		UI::TextBox* script_dir;
		std::wstring pp, sd;
		std::atomic<bool> lock;
	public:
		MainWindow();
	};
}
