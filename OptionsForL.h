#pragma once
#include "MyForm.h"
#include "EmployerScreen.h"
namespace CppCLR_WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OptionsForL
	/// </summary>
	public ref class OptionsForL : public System::Windows::Forms::Form
	{
	public:
		OptionsForL(void)
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
		~OptionsForL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(42, 125);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(275, 154);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Are You Looking For Work";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &OptionsForL::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(416, 125);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(270, 154);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Are You Hiring";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &OptionsForL::button2_Click);
            // 
            // OptionsForL
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(759, 416);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Name = L"OptionsForL";
            this->Text = L"OptionsForL";
            this->Load += gcnew System::EventHandler(this, &OptionsForL::OptionsForL_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        MyForm^ frm1 = gcnew MyForm();
        frm1->Show();
       
      
	}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        EmployerScreen^ frm1 = gcnew EmployerScreen();
        frm1->Show();
        
    }
    private: System::Void OptionsForL_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
