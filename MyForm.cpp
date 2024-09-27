#include "MyForm.h"
#include <string>
#include <windows.h>
// MyForm.cpp

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // Required for Windows Forms applications
void Main(array<String^>^args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of your form (MyForm)
    Mema::MyForm form;
    Application::Run(% form); // Replace "MyForm" with your actual form class name
}
