#pragma once
#include "AES.h"

namespace EncryptionSoftware2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Encryption
	/// </summary>
	public ref class Encryption : public System::Windows::Forms::Form
	{
	public:
		Encryption(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Encryption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ encryptButton;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ decryptButton;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->encryptButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->decryptButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// encryptButton
			// 
			this->encryptButton->BackColor = System::Drawing::Color::Azure;
			this->encryptButton->Location = System::Drawing::Point(537, 364);
			this->encryptButton->Name = L"encryptButton";
			this->encryptButton->Size = System::Drawing::Size(100, 64);
			this->encryptButton->TabIndex = 0;
			this->encryptButton->Text = L"Encrypt";
			this->encryptButton->UseVisualStyleBackColor = false;
			this->encryptButton->Click += gcnew System::EventHandler(this, &Encryption::encryptButton_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox1->Location = System::Drawing::Point(184, 192);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(259, 264);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(236, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enter Plaintext";
			this->label1->Click += gcnew System::EventHandler(this, &Encryption::label1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox2->Location = System::Drawing::Point(750, 192);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(259, 264);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(806, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Encrypted Text";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox3->Location = System::Drawing::Point(184, 711);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(259, 264);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(207, 637);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Enter Encrypted Text";
			// 
			// decryptButton
			// 
			this->decryptButton->BackColor = System::Drawing::Color::Azure;
			this->decryptButton->Location = System::Drawing::Point(537, 886);
			this->decryptButton->Name = L"decryptButton";
			this->decryptButton->Size = System::Drawing::Size(100, 64);
			this->decryptButton->TabIndex = 8;
			this->decryptButton->Text = L"Decrypt";
			this->decryptButton->UseVisualStyleBackColor = false;
			this->decryptButton->Click += gcnew System::EventHandler(this, &Encryption::decryptButton_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox4->Location = System::Drawing::Point(750, 711);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(259, 264);
			this->richTextBox4->TabIndex = 9;
			this->richTextBox4->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(805, 647);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Decrypted Text";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox5->Location = System::Drawing::Point(537, 229);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(109, 92);
			this->richTextBox5->TabIndex = 11;
			this->richTextBox5->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(562, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Key";
			this->label5->Click += gcnew System::EventHandler(this, &Encryption::label5_Click);
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox6->Location = System::Drawing::Point(528, 759);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(109, 92);
			this->richTextBox6->TabIndex = 13;
			this->richTextBox6->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(562, 690);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Key";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(478, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(234, 40);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Encrypt Text";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(478, 554);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(238, 40);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Decrypt Text";
			// 
			// Encryption
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1248, 1052);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->decryptButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->encryptButton);
			this->Name = L"Encryption";
			this->Text = L"Encryption";
			this->Load += gcnew System::EventHandler(this, &Encryption::Encryption_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

AES^ aesInstance = gcnew AES();

private: System::Void encryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (richTextBox1->Text == "" || richTextBox5->Text == "") {
			MessageBox::Show("You need to enter plaintext or the key or both.");
		}
		else {

			if (richTextBox5->Text->Length != 16) {
				MessageBox::Show("You need to enter a key of length 16.");
			}
			else {
				String^ plainText = richTextBox1->Text;
				String^ key = richTextBox5->Text;
				String^ encrypt = aesInstance->encrypt(plainText, key);
				richTextBox2->Text = encrypt;
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->ToString());
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Encryption_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void decryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (richTextBox3->Text == "" || richTextBox6->Text == "") {
			MessageBox::Show("You need to enter encrypted text or the key or both.");
		}
		else {
			if (richTextBox6->Text->Length != 16) {
				MessageBox::Show("You need to enter a key of length 16.");
			}
			else {
				String^ encryptedText = richTextBox3->Text;
				String^ key = richTextBox6->Text;
				String^ decrypt = aesInstance->decrypt(encryptedText, key);
				richTextBox4->Text = decrypt;
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->ToString());
	}
}
};
}
