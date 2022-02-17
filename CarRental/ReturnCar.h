#pragma once

namespace CarRental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReturnCar
	/// </summary>
	public ref class ReturnCar : public System::Windows::Forms::Form
	{
	public:
		ReturnCar(void)
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
		~ReturnCar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ custid_txt;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ customerid_txt;
	private: System::Windows::Forms::TextBox^ name_txt;
	private: System::Windows::Forms::TextBox^ licenceno_txt;
	private: System::Windows::Forms::TextBox^ phoneno_txt;
	private: System::Windows::Forms::TextBox^ rentaldays_txt;
	private: System::Windows::Forms::TextBox^ rentdate_txt;
	private: System::Windows::Forms::TextBox^ carid_txt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ carname_txt;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ distance_txt;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			this->custid_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->customerid_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->licenceno_txt = (gcnew System::Windows::Forms::TextBox());
			this->phoneno_txt = (gcnew System::Windows::Forms::TextBox());
			this->rentaldays_txt = (gcnew System::Windows::Forms::TextBox());
			this->rentdate_txt = (gcnew System::Windows::Forms::TextBox());
			this->carid_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->carname_txt = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->distance_txt = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// custid_txt
			// 
			this->custid_txt->Location = System::Drawing::Point(158, 49);
			this->custid_txt->Name = L"custid_txt";
			this->custid_txt->Size = System::Drawing::Size(124, 22);
			this->custid_txt->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Customer ID";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(319, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ReturnCar::button2_Click);
			// 
			// customerid_txt
			// 
			this->customerid_txt->Location = System::Drawing::Point(662, 88);
			this->customerid_txt->Name = L"customerid_txt";
			this->customerid_txt->Size = System::Drawing::Size(124, 22);
			this->customerid_txt->TabIndex = 6;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(659, 148);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(124, 22);
			this->name_txt->TabIndex = 7;
			// 
			// licenceno_txt
			// 
			this->licenceno_txt->Location = System::Drawing::Point(659, 212);
			this->licenceno_txt->Name = L"licenceno_txt";
			this->licenceno_txt->Size = System::Drawing::Size(124, 22);
			this->licenceno_txt->TabIndex = 8;
			// 
			// phoneno_txt
			// 
			this->phoneno_txt->Location = System::Drawing::Point(659, 263);
			this->phoneno_txt->Name = L"phoneno_txt";
			this->phoneno_txt->Size = System::Drawing::Size(124, 22);
			this->phoneno_txt->TabIndex = 9;
			// 
			// rentaldays_txt
			// 
			this->rentaldays_txt->Location = System::Drawing::Point(662, 317);
			this->rentaldays_txt->Name = L"rentaldays_txt";
			this->rentaldays_txt->Size = System::Drawing::Size(124, 22);
			this->rentaldays_txt->TabIndex = 10;
			// 
			// rentdate_txt
			// 
			this->rentdate_txt->Location = System::Drawing::Point(659, 367);
			this->rentdate_txt->Name = L"rentdate_txt";
			this->rentdate_txt->Size = System::Drawing::Size(124, 22);
			this->rentdate_txt->TabIndex = 11;
			// 
			// carid_txt
			// 
			this->carid_txt->Location = System::Drawing::Point(659, 417);
			this->carid_txt->Name = L"carid_txt";
			this->carid_txt->Size = System::Drawing::Size(124, 22);
			this->carid_txt->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(568, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Customer ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(568, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(568, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Licence No.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(568, 268);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Phone No.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(568, 322);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Rental Days";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(568, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Rent Date";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(568, 422);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Car ID";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(568, 478);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 17);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Car Name";
			// 
			// carname_txt
			// 
			this->carname_txt->Location = System::Drawing::Point(659, 475);
			this->carname_txt->Name = L"carname_txt";
			this->carname_txt->Size = System::Drawing::Size(124, 22);
			this->carname_txt->TabIndex = 21;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(319, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 29);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Generate Bill";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(319, 268);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(54, 367);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(54, 367);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 17);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Actual Rental Days";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(54, 415);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 17);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Panalty Days";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(70, 460);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 17);
			this->label14->TabIndex = 28;
			this->label14->Text = L"sss";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(54, 508);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 17);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Panalty Days";
			// 
			// distance_txt
			// 
			this->distance_txt->Location = System::Drawing::Point(158, 215);
			this->distance_txt->Name = L"distance_txt";
			this->distance_txt->Size = System::Drawing::Size(124, 22);
			this->distance_txt->TabIndex = 30;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 220);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(126, 17);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Distance Travelled";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(236, 362);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(124, 22);
			this->textBox1->TabIndex = 32;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(236, 410);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(124, 22);
			this->textBox2->TabIndex = 33;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(236, 455);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(124, 22);
			this->textBox3->TabIndex = 34;
			// 
			// ReturnCar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1424, 571);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->distance_txt);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->carname_txt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->carid_txt);
			this->Controls->Add(this->rentdate_txt);
			this->Controls->Add(this->rentaldays_txt);
			this->Controls->Add(this->phoneno_txt);
			this->Controls->Add(this->licenceno_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->customerid_txt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->custid_txt);
			this->Name = L"ReturnCar";
			this->Text = L"ReturnCar";
			this->Load += gcnew System::EventHandler(this, &ReturnCar::ReturnCar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	

};
}
