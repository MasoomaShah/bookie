#pragma once
//#include "Person.h"
#include "Employer.h"

#include <string>

namespace CppCLR_WinFormsProject {
    Employer Emp;
   


   

    using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
  
  

	/// <summary>
    /// 
	/// Summary for APPLYNOW
	/// </summary>
	public ref class APPLYNOW : public System::Windows::Forms::Form
	{
	public:
		APPLYNOW(void)
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
		~APPLYNOW()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    private: System::Windows::Forms::ProgressBar^ progressBar1;
    private: System::Windows::Forms::Timer^ timer1;
    private: System::ComponentModel::IContainer^ components;

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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->button1->Location = System::Drawing::Point(578, 332);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(134, 57);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Apply ";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &APPLYNOW::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::SystemColors::GrayText;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(12, 325);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(203, 49);
            this->button2->TabIndex = 2;
            this->button2->Text = L"UPLOAD RESUME.......";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &APPLYNOW::button2_Click);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(35, 32);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(633, 75);
            this->textBox1->TabIndex = 3;
            this->textBox1->Text = L"your cover letter here ..";
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &APPLYNOW::textBox1_TextChanged);
            // 
            // richTextBox1
            // 
            this->richTextBox1->Location = System::Drawing::Point(35, 119);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(633, 200);
            this->richTextBox1->TabIndex = 4;
            this->richTextBox1->Text = L"";
            // 
            // progressBar1
            // 
            this->progressBar1->Location = System::Drawing::Point(12, 382);
            this->progressBar1->Name = L"progressBar1";
            this->progressBar1->Size = System::Drawing::Size(184, 23);
            this->progressBar1->TabIndex = 5;
            // 
            // timer1
            // 
            this->timer1->Interval = 10;
            this->timer1->Tick += gcnew System::EventHandler(this, &APPLYNOW::timer1_Tick);
            // 
            // APPLYNOW
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(724, 417);
            this->Controls->Add(this->progressBar1);
            this->Controls->Add(this->richTextBox1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Name = L"APPLYNOW";
            this->Text = L"APPLYNOW";
            this->Load += gcnew System::EventHandler(this, &APPLYNOW::APPLYNOW_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
    //private: System::Void APPLYNOW_Load(System::Object^ sender, System::EventArgs^ e) {
    // }
        string MarshalString(String ^ s) {
            using namespace Runtime::InteropServices;
            string os;
            const char* chars =
                (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
            os = chars;
            Marshal::FreeHGlobal(IntPtr((void*)chars));
            return os;
          
    }
  
    private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
   
    //.setid(9);
    //int l = f.getid();
    

  Emp.setcl1(MarshalString(richTextBox1->Text));

  // Remember for string (small s string) we must add #include <string> at top of our file
 
  String^ capital_S = gcnew String(Emp.getcl1().c_str());
  //gcnew is almost equvelant to new keyword in c++, c_str() means character string

  MessageBox::Show(capital_S," Cover Letter Submitted As");
   //Emp.setcl1("hello");
    //f.setid(Convert::ToInt32(richTextBox1->Text));
    //button1 -> Text = gcnew String(to_string(l).c_str());
    //MessageBox::Show(gcnew String(to_string(l).c_str()));
    //String^ capital_String = "Any Text or String";
    //string small_string = MarshalString(capital_String);
}
       // Function to convert the String (captial S String) into string (small s string) 
    // Function to convert the String (captial S String) into string (small s string)
    // Function call will be as following:

    
   

private: System::Void APPLYNOW_Load(System::Object^ sender, System::EventArgs^ e) {
   
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->timer1->Start();
    
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
    this->progressBar1->Increment(1);
    
  

}
};
}
