#pragma once
#include "Form2.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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



	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labeltitle;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;










	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

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
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labeltitle = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Podpowiedz";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Odpowiedz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Jak nazywa sie stolica Polski \?";
			// 
			// labeltitle
			// 
			this->labeltitle->AutoSize = true;
			this->labeltitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labeltitle->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->labeltitle->Location = System::Drawing::Point(218, 18);
			this->labeltitle->Name = L"labeltitle";
			this->labeltitle->Size = System::Drawing::Size(28, 13);
			this->labeltitle->TabIndex = 3;
			this->labeltitle->Text = L"Quiz";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"W którym roku Mieszko I przyj¹³ chrzest \?";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 60);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Odpowiedz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(257, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Jaka jest najd³u¿sza rzeka w Polsce\?";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(254, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 20);
			this->textBox2->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(254, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(197, 53);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Odpowiedz";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(381, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 78);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Odpowiedz";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(251, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Wybierz prawidlow¹ odpowiedŸ: 8/2(3+1)=";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(37, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"16";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(31, 17);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"1";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(31, 17);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"4";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(254, 168);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(121, 86);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Odpowiedzi";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(211, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"label5";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 20);
			this->textBox3->TabIndex = 18;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 334);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labeltitle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text->IsNullOrWhiteSpace(textBox1->Text)){
				 label5->Text = "Nic nie wpisales";
			 }
			 else{
				 try{
					 if (textBox1->Text == "Warszawa" || textBox1->Text == "warszawa"){
						 System::String^ pom2 = textBox1->Text + ". Jest to dobra odpowiedz";
						 Form2^ frm;
						 frm = gcnew Form2(pom2);
						 frm->ShowDialog();
					 }
					 else{
						 System::String^ pom2 = textBox1->Text + ". Jest to zla odpowiedz";
						 Form2^ frm;
						 frm = gcnew Form2(pom2);
						 frm->ShowDialog();
					 }
				 }
				 catch (Exception^ a){
					 label5->Text = "Wpisa³eœ z³¹ wartoœæ ";
				 }
			 }
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox3->Text->IsNullOrWhiteSpace(textBox3->Text)){
				 label5->Text = "Nie podales zadnej cyfry";
			 }
			 else{
				 try{
					 System::Int16 numer = System::Int16::Parse(textBox3->Text);
					 if (numer == 966){
						 System::String^ pom2 = textBox3->Text + ". Jest to dobra odpowiedz";
						 Form2^ frm;
						 frm = gcnew Form2(pom2);
						 frm->ShowDialog();
					 }
					 else{
						 System::String^ pom2 = textBox3->Text + ". Jest to zla odpowiedz";
						 Form2^ frm;
						 frm = gcnew Form2(pom2);
						 frm->ShowDialog();
					 }
				 }
				 catch (Exception^ a){
					 label5->Text = "Wpisa³eœ z³¹ wartoœæ";
				 }
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox2->Text->IsNullOrWhiteSpace(textBox2->Text)){
				 label5->Text = "Nic nie wpisales";
			 }
			 else{
				 try{
					 if (textBox1->Text == "Wis³a" || textBox1->Text == "wis³a"){
						 System::String^ pom2 = textBox2->Text + ". Jest to dobra odpowiedz";
						 Form2^ frm;
						 frm = gcnew Form2(pom2);
						 frm->ShowDialog();
					 }
					 else{
						 System::String^ pom2 = textBox2->Text + ". Jest to zla odpowiedz";
						 Form2^ frm;
						 frm = gcnew Form2(pom2);
						 frm->ShowDialog();
					 }
				 }
				 catch (Exception^ a){
					 label5->Text = "Wpisa³eœ z³¹ wartoœæ";
				 }
			 }
}


private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (!radioButton1&&!radioButton2&&!radioButton3){
				 label5->Text = "Nic nie zaznaczy³eœ";
			 }
			 if (radioButton1->Checked){
				 System::String^ pom2 = "dobra odpowiedz";
				 Form2^ frm;
				 frm = gcnew Form2(pom2);
				 frm->ShowDialog();
			 }
			 else{
				 System::String^ pom2 = "zla odpowiedz";
				 Form2^ frm;
				 frm = gcnew Form2(pom2);
				 frm->ShowDialog();
			 }
}
};
}

