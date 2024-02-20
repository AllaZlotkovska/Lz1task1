#include "MyForm.h"
#include <Windows.h>
#include <math.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lz1task1::MyForm form;// ім'я вашого проекту, наприклад, myproekt або ін.
	Application::Run(% form);
}

