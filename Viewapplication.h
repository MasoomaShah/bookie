#pragma once
#include "Person.h"
#include "string"



namespace CppCLR_WinFormsProject {
      Person pal;


    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for ViewApplication
    /// </summary>
    public ref class ViewApplication : public System::Windows::Forms::Form
    {
    public:
        ViewApplication(void)
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
        ~ViewApplication()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(254, 116);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(225, 16);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Click Here To View Applicant Details";
            this->label1->Click += gcnew System::EventHandler(this, &ViewApplication::label1_Click_1);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(84, 116);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(129, 16);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Applicant Username";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(84, 190);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(41, 16);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Email";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(265, 190);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 16);
            this->label4->TabIndex = 5;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(268, 190);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(19, 16);
            this->label5->TabIndex = 6;
            this->label5->Text = L"    ";
            this->label5->Click += gcnew System::EventHandler(this, &ViewApplication::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(84, 281);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(97, 16);
            this->label6->TabIndex = 7;
            this->label6->Text = L"Phone Number";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(268, 281);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(19, 16);
            this->label7->TabIndex = 8;
            this->label7->Text = L"    ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(84, 357);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(52, 16);
            this->label8->TabIndex = 9;
            this->label8->Text = L"Country";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(268, 357);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(19, 16);
            this->label9->TabIndex = 10;
            this->label9->Text = L"    ";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(87, 413);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(82, 16);
            this->label10->TabIndex = 11;
            this->label10->Text = L"Cover Letter:";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(294, 413);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(163, 16);
            this->label11->TabIndex = 12;
            this->label11->Text = L"                                                    ";
            this->label11->Click += gcnew System::EventHandler(this, &ViewApplication::label11_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
            this->button1->Location = System::Drawing::Point(78, 469);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(178, 40);
            this->button1->TabIndex = 13;
            this->button1->Text = L"Accept";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &ViewApplication::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Crimson;
            this->button2->Location = System::Drawing::Point(547, 469);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(183, 40);
            this->button2->TabIndex = 14;
            this->button2->Text = L"Reject";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &ViewApplication::button2_Click);
            // 
            // ViewApplication
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(796, 534);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"ViewApplication";
            this->Text = L"ViewApplication";
            this->Load += gcnew System::EventHandler(this, &ViewApplication::ViewApplication_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
         label1->Text = gcnew String(pal.username.c_str());
        label5->Text = gcnew String(pal.email.c_str());
        label7->Text = gcnew String(pal.phone_no.c_str());
        label9->Text = gcnew String(pal.country.c_str());



    }
    private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void ViewApplication_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
         MessageBox::Show("you have accepted this application");
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
         MessageBox::Show("You have rejected this application");
    }


    };
}

