#pragma once
#include"APPLYNOW.h"
#include "Trackappstatus.h"

namespace CppCLR_WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
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



    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::ComboBox^ location_combo1;

    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;






    protected:


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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->location_combo1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(96, 54);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(112, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"AVAILABlE JOBS";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(8, 8);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(0, 16);
            this->label2->TabIndex = 1;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(38, 134);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(100, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Filter Jobs By....";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(26, 189);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(591, 127);
            this->button1->TabIndex = 9;
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(38, 200);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(84, 16);
            this->label4->TabIndex = 10;
            this->label4->Text = L"HEAD CHEF";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(38, 231);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(143, 16);
            this->label5->TabIndex = 11;
            this->label5->Text = L"SZMM RESTAURANT";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(39, 262);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(115, 16);
            this->label6->TabIndex = 12;
            this->label6->Text = L"JHANGI SYEDAN";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(166, 287);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(168, 16);
            this->label7->TabIndex = 13;
            this->label7->Text = L"ABBOTTABAD,PAKISTAN";
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(467, 278);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(117, 16);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Required BIDS: 18";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(467, 451);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(117, 16);
            this->label9->TabIndex = 20;
            this->label9->Text = L"Required BIDS: 22";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(166, 451);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(73, 16);
            this->label10->TabIndex = 19;
            this->label10->Text = L"PAKISTAN";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(39, 426);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(38, 16);
            this->label11->TabIndex = 18;
            this->label11->Text = L"TOPI";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(38, 395);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(108, 16);
            this->label12->TabIndex = 17;
            this->label12->Text = L"NATIONAL  ZOO";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(38, 364);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(92, 16);
            this->label13->TabIndex = 16;
            this->label13->Text = L"ZOO KEEPER";
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(26, 353);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(591, 127);
            this->button2->TabIndex = 15;
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::SystemColors::HotTrack;
            this->label14->Location = System::Drawing::Point(489, 218);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(95, 16);
            this->label14->TabIndex = 21;
            this->label14->Text = L"APPLY NOW";
            this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::SystemColors::HotTrack;
            this->label15->Location = System::Drawing::Point(489, 386);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(95, 16);
            this->label15->TabIndex = 22;
            this->label15->Text = L"APPLY NOW";
            this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->ForeColor = System::Drawing::SystemColors::WindowFrame;
            this->label16->Location = System::Drawing::Point(489, 253);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(89, 16);
            this->label16->TabIndex = 23;
            this->label16->Text = L"2 POSITIONS";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->ForeColor = System::Drawing::SystemColors::WindowFrame;
            this->label17->Location = System::Drawing::Point(489, 426);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(89, 16);
            this->label17->TabIndex = 24;
            this->label17->Text = L"2 POSITIONS";
            // 
            // location_combo1
            // 
            this->location_combo1->AccessibleDescription = L"";
            this->location_combo1->AccessibleName = L"location_combo1";
            this->location_combo1->FormattingEnabled = true;
            this->location_combo1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Abottabad", L"Karachi", L"Lahore" });
            this->location_combo1->Location = System::Drawing::Point(169, 126);
            this->location_combo1->Name = L"location_combo1";
            this->location_combo1->Size = System::Drawing::Size(172, 24);
            this->location_combo1->TabIndex = 25;
            this->location_combo1->Tag = L"";
            this->location_combo1->Text = L"LOCATION";
            this->location_combo1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(407, 126);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(177, 24);
            this->comboBox2->TabIndex = 26;
            this->comboBox2->Text = L"JOB TYPE";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::SystemColors::Control;
            this->label18->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->label18->Location = System::Drawing::Point(236, 231);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(149, 16);
            this->label18->TabIndex = 27;
            this->label18->Text = L"Track application status";
            this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->label19->Location = System::Drawing::Point(236, 408);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(149, 16);
            this->label19->TabIndex = 28;
            this->label19->Text = L"Track application status";
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(651, 526);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->location_combo1);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
     

    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
    
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
         if (location_combo1->SelectedItem == "Karachi") {
             this->label4->Text = L"Animator";
             this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
             this->label5->Text = L"STUDIO.H";
             this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
             this->label6->Text = L"Shahrah e Faisal";
             this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
             this->label7->Text = L"KARACHI,PAKISTAN";
             this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
             this->label8->Text = L"Required BIDS: 25";
             this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
             this->label16->Text = L"4 POSITIONS";
             this->label10->Text = L"KARACHI, PAKISTAN";
             this->label13->Text = L"Teacher";
             this->label12->Text = L"Merit n Merit";
             this->label11->Text = L"Abul Hasan Isphahani Road";
             this->label17->Text = L"6 POSITIONS";
         }
    }
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
    APPLYNOW^ applynow = gcnew APPLYNOW();
    applynow->Show();
    

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void process1_Exited(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
    Trackappstatus^ t = gcnew Trackappstatus();
    t->Show();
    
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {

    Trackappstatus^ t = gcnew Trackappstatus();
    t->Show();
  
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
    APPLYNOW^ applynow = gcnew APPLYNOW();
    applynow->Show();
}
};
}
