#pragma once
#include "string"
namespace CppCLR_WinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Hiring
    /// </summary>
    public ref class Hiring : public System::Windows::Forms::Form
    {
    public:
        Hiring(void)
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
        ~Hiring()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::ComboBox^ location_combo1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ button1;

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
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->location_combo1 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(35, 48);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(146, 42);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Job title";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(440, 54);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(230, 42);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Organization";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(35, 364);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(353, 42);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Number of Positions";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(450, 364);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(253, 42);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Bids Required";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(40, 208);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(141, 42);
            this->label6->TabIndex = 5;
            this->label6->Text = L"District ";
            // 
            // location_combo1
            // 
            this->location_combo1->AccessibleDescription = L"";
            this->location_combo1->AccessibleName = L"location_combo1";
            this->location_combo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->location_combo1->FormattingEnabled = true;
            this->location_combo1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Abottabad", L"Karachi", L"Lahore" });
            this->location_combo1->Location = System::Drawing::Point(447, 265);
            this->location_combo1->Name = L"location_combo1";
            this->location_combo1->Size = System::Drawing::Size(223, 50);
            this->location_combo1->TabIndex = 26;
            this->location_combo1->Tag = L"";
            this->location_combo1->Text = L"LOCATION";
            this->location_combo1->SelectedIndexChanged += gcnew System::EventHandler(this, &Hiring::location_combo1_SelectedIndexChanged);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(38, 109);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(228, 49);
            this->textBox1->TabIndex = 27;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(38, 282);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(228, 49);
            this->textBox2->TabIndex = 28;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(38, 441);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(228, 49);
            this->textBox3->TabIndex = 29;
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(442, 109);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(228, 49);
            this->textBox4->TabIndex = 30;
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(457, 429);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(228, 49);
            this->textBox5->TabIndex = 31;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->label5->Location = System::Drawing::Point(295, 34);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(121, 16);
            this->label5->TabIndex = 32;
            this->label5->Text = L"Add a new Position";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::CadetBlue;
            this->button1->Location = System::Drawing::Point(610, 499);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(216, 34);
            this->button1->TabIndex = 33;
            this->button1->Text = L"Add Position";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Hiring::button1_Click);
            // 
            // Hiring
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(838, 545);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->location_combo1);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"Hiring";
            this->Text = L"Hiring";
            this->Load += gcnew System::EventHandler(this, &Hiring::Hiring_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void location_combo1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Hiring_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Position Successfully Added");
    }
};
}
