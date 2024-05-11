

#include "Person.h"
#include "User.h"
#include "Employer.h"
#include "MyForm.h"
#include "Signup.h"
#include <string>



namespace CppCLR_WinFormsProject {
  

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
   
    
    Person p1;
    void setp1(Person p)
    {
        p1.suemail = p.suemail;
        p1.supassword1 = p.supassword1;
        p1.suemail = p.suemail;
        p1.supasswor2 = p.supasswor2;


    }
	/// <summary>
	/// Summary for Form1
	/// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
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
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ lusername;
    protected:
    private: System::Windows::Forms::TextBox^ tb1;
    private: System::Windows::Forms::Label^ l2;
    private: System::Windows::Forms::TextBox^ tb2;
    private: System::Windows::Forms::Button^ b1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->lusername = (gcnew System::Windows::Forms::Label());
            this->tb1 = (gcnew System::Windows::Forms::TextBox());
            this->l2 = (gcnew System::Windows::Forms::Label());
            this->tb2 = (gcnew System::Windows::Forms::TextBox());
            this->b1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // lusername
            // 
            this->lusername->AutoSize = true;
            this->lusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lusername->Location = System::Drawing::Point(54, 78);
            this->lusername->Name = L"lusername";
            this->lusername->Size = System::Drawing::Size(190, 42);
            this->lusername->TabIndex = 0;
            this->lusername->Text = L"Username";
            this->lusername->Click += gcnew System::EventHandler(this, &Form1::lusername_Click);
            // 
            // tb1
            // 
            this->tb1->BackColor = System::Drawing::SystemColors::Menu;
            this->tb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb1->Location = System::Drawing::Point(61, 170);
            this->tb1->Name = L"tb1";
            this->tb1->Size = System::Drawing::Size(541, 49);
            this->tb1->TabIndex = 1;
            this->tb1->TextChanged += gcnew System::EventHandler(this, &Form1::tb1_TextChanged);
            // 
            // l2
            // 
            this->l2->AutoSize = true;
            this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->l2->Location = System::Drawing::Point(65, 289);
            this->l2->Name = L"l2";
            this->l2->Size = System::Drawing::Size(183, 42);
            this->l2->TabIndex = 2;
            this->l2->Text = L"Password";
            // 
            // tb2
            // 
            this->tb2->BackColor = System::Drawing::SystemColors::Menu;
            this->tb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb2->Location = System::Drawing::Point(72, 393);
            this->tb2->Name = L"tb2";
            this->tb2->Size = System::Drawing::Size(541, 49);
            this->tb2->TabIndex = 3;
            // 
            // b1
            // 
            this->b1->BackColor = System::Drawing::SystemColors::ControlDark;
            this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->b1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->b1->Location = System::Drawing::Point(751, 377);
            this->b1->Name = L"b1";
            this->b1->Size = System::Drawing::Size(229, 80);
            this->b1->TabIndex = 4;
            this->b1->Text = L"login";
            this->b1->UseVisualStyleBackColor = false;
            this->b1->Click += gcnew System::EventHandler(this, &Form1::b1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(207, 569);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(336, 36);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Don\'t Have an Account\?";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label2->Location = System::Drawing::Point(644, 568);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(123, 36);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Sign Up";
            this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1043, 654);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->b1);
            this->Controls->Add(this->tb2);
            this->Controls->Add(this->l2);
            this->Controls->Add(this->tb1);
            this->Controls->Add(this->lusername);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load_1);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
    {

    }
           string MarshalString(String^ s)
           {
               using namespace  Runtime::InteropServices;
               string os;
               const char* chars =
                   (const char*)(Marshal::StringToHGlobalAnsi(s).ToPointer());
               os = chars;
               Marshal::FreeHGlobal(IntPtr((void*)chars));
               return os;
           }
    private: System::Void lusername_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void tb1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {

        if (gcnew String(p1.getusername().c_str()) != tb1->Text || gcnew String(p1.getpassword().c_str()) != tb2->Text)

        {
            MessageBox::Show("Incorrect password or email address, please try again");

        }
        else if (gcnew String(p1.getusername().c_str()) == tb1->Text && gcnew String(p1.getpassword().c_str()) == tb2->Text)
        {
            MessageBox::Show("Successfully logged in");
            if (p1.statuss == "user")
            {
                MyForm^ frm1 = gcnew MyForm();
                frm1->Show();
                

            }

        }
    }
    private: System::Void Form1_Load_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
        Signup^ frm1 = gcnew Signup();
        frm1->Show();
       
    }
};
}
