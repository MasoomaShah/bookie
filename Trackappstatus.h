#pragma once
#include "Person.h"
namespace CppCLR_WinFormsProject {
    Person pp;

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Trackappstatus
    /// </summary>
    public ref class Trackappstatus : public System::Windows::Forms::Form
    {
    public:
        Trackappstatus(void)
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
        ~Trackappstatus()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ProgressBar^ progressBar1;
    private: System::Windows::Forms::Timer^ timer1;
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
            this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->SuspendLayout();
            // 
            // progressBar1
            // 
            this->progressBar1->Location = System::Drawing::Point(69, 153);
            this->progressBar1->Name = L"progressBar1";
            this->progressBar1->Size = System::Drawing::Size(526, 23);
            this->progressBar1->TabIndex = 0;
            this->progressBar1->Click += gcnew System::EventHandler(this, &Trackappstatus::progressBar1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(69, 66);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(114, 16);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Application Status";
            this->label1->Click += gcnew System::EventHandler(this, &Trackappstatus::label1_Click);
            // 
            // timer1
            // 
            this->timer1->Tick += gcnew System::EventHandler(this, &Trackappstatus::timer1_Tick);
            // 
            // Trackappstatus
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(702, 423);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->progressBar1);
            this->Name = L"Trackappstatus";
            this->Text = L"Trackappstatus";
            this->Load += gcnew System::EventHandler(this, &Trackappstatus::Trackappstatus_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (pp.status == "accepted")
        {
            this->timer1->Start();
            this->progressBar1->Increment(1);
        }
    };
    private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void Trackappstatus_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
