#pragma once

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::TextBox^ afisaj;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ stergere;
	private: System::Windows::Forms::Button^ egal;
	private: System::Windows::Forms::Button^ impartire;
	private: System::Windows::Forms::Button^ prod;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ sum;

	private:
		String^ operand1;
		String^ operand2;
		String^ operation;

	protected:

	protected:

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
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->stergere = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->prod = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->Location = System::Drawing::Point(16, 15);
			this->afisaj->Margin = System::Windows::Forms::Padding(4);
			this->afisaj->Multiline = true;
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(335, 67);
			this->afisaj->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 118);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(104, 118);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(192, 118);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(16, 188);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 43);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(104, 188);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 43);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(192, 188);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 43);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(16, 263);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 43);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(104, 263);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 43);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(192, 263);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(61, 43);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(16, 333);
			this->button0->Margin = System::Windows::Forms::Padding(4);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(61, 43);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// stergere
			// 
			this->stergere->BackColor = System::Drawing::Color::Red;
			this->stergere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stergere->Location = System::Drawing::Point(104, 333);
			this->stergere->Margin = System::Windows::Forms::Padding(4);
			this->stergere->Name = L"stergere";
			this->stergere->Size = System::Drawing::Size(61, 43);
			this->stergere->TabIndex = 11;
			this->stergere->Text = L"C";
			this->stergere->UseVisualStyleBackColor = false;
			this->stergere->Click += gcnew System::EventHandler(this, &Form1::stergere_Click);
			// 
			// egal
			// 
			this->egal->BackColor = System::Drawing::Color::OliveDrab;
			this->egal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->egal->Location = System::Drawing::Point(192, 333);
			this->egal->Margin = System::Windows::Forms::Padding(4);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(61, 43);
			this->egal->TabIndex = 12;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = false;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// impartire
			// 
			this->impartire->BackColor = System::Drawing::SystemColors::ControlDark;
			this->impartire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->impartire->Location = System::Drawing::Point(291, 118);
			this->impartire->Margin = System::Windows::Forms::Padding(4);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(61, 43);
			this->impartire->TabIndex = 13;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = false;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// prod
			// 
			this->prod->BackColor = System::Drawing::SystemColors::ControlDark;
			this->prod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prod->Location = System::Drawing::Point(291, 188);
			this->prod->Margin = System::Windows::Forms::Padding(4);
			this->prod->Name = L"prod";
			this->prod->Size = System::Drawing::Size(61, 43);
			this->prod->TabIndex = 14;
			this->prod->Text = L"x";
			this->prod->UseVisualStyleBackColor = false;
			this->prod->Click += gcnew System::EventHandler(this, &Form1::prod_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::ControlDark;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->Location = System::Drawing::Point(291, 263);
			this->minus->Margin = System::Windows::Forms::Padding(4);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(61, 43);
			this->minus->TabIndex = 15;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::ControlDark;
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sum->Location = System::Drawing::Point(291, 333);
			this->sum->Margin = System::Windows::Forms::Padding(4);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(61, 43);
			this->sum->TabIndex = 16;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = false;
			this->sum->Click += gcnew System::EventHandler(this, &Form1::sum_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 431);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->prod);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->stergere);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->afisaj);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "0";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "9";
	}

	private: System::Void stergere_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Clear();
		operand1 = "";
		operand2 = "";
		operation = "|";
	}

	private: System::Void sum_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			operand1 = afisaj->Text;
			if (IsInteger(operand1)) {
				operation = "+";
				afisaj->Text = "";
			}
			else {
				MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			operand1 = afisaj->Text;
			if (IsInteger(operand1)) {
				operation = "-";
				afisaj->Text = "";
			}
			else {
				MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void prod_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			operand1 = afisaj->Text;
			if (IsInteger(operand1)) {
				operation = "x";
				afisaj->Text = "";
			}
			else {
				MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			operand1 = afisaj->Text;
			if (IsInteger(operand1)) {
				operation = "/";
				afisaj->Text = "";
			}
			else {
				MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: bool IsInteger(String^ s) {
		int n;
		return Int32::TryParse(s, n);
	}

	private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			operand2 = afisaj->Text;
			double op1, op2;
			if (Double::TryParse(operand1, op1) && Double::TryParse(operand2, op2)) {
				double result;
				if (operation == "+")
					result = op1 + op2;
				else if (operation == "-")
					result = op1 - op2;
				else if (operation == "x")
					result = op1 * op2;
				else if (operation == "/")
					result = op1 / op2;

				afisaj->Text = result.ToString();
			}
			else {
				MessageBox::Show("Please enter valid numbers.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	};
}
