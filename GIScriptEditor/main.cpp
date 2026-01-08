#include <Windows.h>

import app.window;

using namespace Editor::App;

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
	return MainWindow().Run();
}
