#include "MainForm.h"
#include "addNewDoing.h"
#include <Windows.h>
using namespace leaderplan;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles(); //���������� �����, �� ��������� ���������� �������
	Application::SetCompatibleTextRenderingDefault(false); //������������� ������������� ����������� ������� ������, ���� false
	Application::Run(gcnew MainForm);
	return 0;
}