#include "MainForm.h"
#include "addNewDoing.h"
#include <Windows.h>
using namespace leaderplan;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles(); //визуальные стили, не позволяет отображать консоль
	Application::SetCompatibleTextRenderingDefault(false); //устанавливает единообразное отображение шрифтов текста, если false
	Application::Run(gcnew MainForm);
	return 0;
}