#include "Encryption.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace EncryptionSoftware2;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Encryption());
}

//issue is managed nullptr type cannot be used
//not sure what it's referencing
//figure out next class