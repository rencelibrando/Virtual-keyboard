#include "MyForm.h"
#include <string>
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] 
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Mema::MyForm form;
    Application::Run(% form);
}