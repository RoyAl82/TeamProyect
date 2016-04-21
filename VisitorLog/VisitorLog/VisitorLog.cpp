#include "VisitorLog.h"


//using namespace VisitorLog;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VisitorLog::VisitorLog form;
	Application::Run(%form);
}