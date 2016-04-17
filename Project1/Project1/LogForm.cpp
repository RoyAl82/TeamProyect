#include "LogForm.h"
#include "Visitor.h"
#include "Display.h"



using namespace System;
using namespace System::Windows::Forms;


[STAThread]

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::LogForm form;
	Application::Run(%form);
}
