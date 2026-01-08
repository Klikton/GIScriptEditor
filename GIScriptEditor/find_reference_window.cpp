module;
#include <Windows.h>
#include <GINodeGraph.h>
module app.window;

import util;

using namespace Editor;
using namespace UI;
using namespace App;

FindReferenceWindow::FindReferenceWindow() : Window(L"查找引用")
{
	{
		auto& b = AddWidget(std::make_unique<Button>(Renderer(), L"打开存档", 160));
		b.anchor = Anchor::Center;
		b.y = 200;
		b.SetOriginCenter();
		b.SetTextSize(26);
		b.SetClickEvent([&](auto&)->Utils::Task { co_await Dialog(L"开发中", L"请等待后续更新", MB_ICONINFORMATION); });
	}
}