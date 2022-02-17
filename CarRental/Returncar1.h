#pragma once
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>

namespace CarRental {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Returncar
	/// </summary>
	public ref class Returncar : public System::Windows::Forms::Form
	{
	public:
		Form^ rc2;
		Returncar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}Returncar(Form ^rc3)
		{
			rc2 = rc3;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Returncar()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ panaltydays_txt;
	protected:

	private: System::Windows::Forms::TextBox^ actualrd_txt;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ distance_txt;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ back_btn;

	private: System::Windows::Forms::Button^ bill_btn;

	private: System::Windows::Forms::TextBox^ carname_txt;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ carid_txt;
	private: System::Windows::Forms::TextBox^ rentdate_txt;
	private: System::Windows::Forms::TextBox^ rentaldays_txt;
	private: System::Windows::Forms::TextBox^ phoneno_txt;
	private: System::Windows::Forms::TextBox^ licenceno_txt;
	private: System::Windows::Forms::TextBox^ name_txt;
	private: System::Windows::Forms::TextBox^ customerid_txt;
	private: System::Windows::Forms::Button^ search_btn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ custid_txt;
	private: System::Windows::Forms::RichTextBox^ invoice_richtextbox;

	private: System::Windows::Forms::Button^ returncar_txt;
	private: System::Windows::Forms::Label^ label1;





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
			this->panaltydays_txt = (gcnew System::Windows::Forms::TextBox());
			this->actualrd_txt = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->distance_txt = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->bill_btn = (gcnew System::Windows::Forms::Button());
			this->carname_txt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->carid_txt = (gcnew System::Windows::Forms::TextBox());
			this->rentdate_txt = (gcnew System::Windows::Forms::TextBox());
			this->rentaldays_txt = (gcnew System::Windows::Forms::TextBox());
			this->phoneno_txt = (gcnew System::Windows::Forms::TextBox());
			this->licenceno_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->customerid_txt = (gcnew System::Windows::Forms::TextBox());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->custid_txt = (gcnew System::Windows::Forms::TextBox());
			this->invoice_richtextbox = (gcnew System::Windows::Forms::RichTextBox());
			this->returncar_txt = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// panaltydays_txt
			// 
			this->panaltydays_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panaltydays_txt->Location = System::Drawing::Point(578, 530);
			this->panaltydays_txt->Name = L"panaltydays_txt";
			this->panaltydays_txt->Size = System::Drawing::Size(124, 27);
			this->panaltydays_txt->TabIndex = 64;
			this->panaltydays_txt->TextChanged += gcnew System::EventHandler(this, &Returncar::panaltydays_txt_TextChanged);
			// 
			// actualrd_txt
			// 
			this->actualrd_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualrd_txt->Location = System::Drawing::Point(578, 603);
			this->actualrd_txt->Name = L"actualrd_txt";
			this->actualrd_txt->Size = System::Drawing::Size(124, 27);
			this->actualrd_txt->TabIndex = 63;
			this->actualrd_txt->TextChanged += gcnew System::EventHandler(this, &Returncar::actualrd_txt_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(915, 61);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(161, 24);
			this->label16->TabIndex = 62;
			this->label16->Text = L"Distance Travelled";
			// 
			// distance_txt
			// 
			this->distance_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->distance_txt->Location = System::Drawing::Point(1114, 61);
			this->distance_txt->Name = L"distance_txt";
			this->distance_txt->Size = System::Drawing::Size(118, 27);
			this->distance_txt->TabIndex = 61;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(431, 530);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(111, 24);
			this->label13->TabIndex = 58;
			this->label13->Text = L"Panalty Days";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(373, 606);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(162, 24);
			this->label12->TabIndex = 57;
			this->label12->Text = L"Actual Rental Days";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(394, 455);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 56;
			// 
			// back_btn
			// 
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(1263, 653);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(110, 58);
			this->back_btn->TabIndex = 55;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &Returncar::back_btn_Click);
			// 
			// bill_btn
			// 
			this->bill_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bill_btn->Location = System::Drawing::Point(1253, 56);
			this->bill_btn->Name = L"bill_btn";
			this->bill_btn->Size = System::Drawing::Size(131, 35);
			this->bill_btn->TabIndex = 54;
			this->bill_btn->Text = L"Generate Bill";
			this->bill_btn->UseVisualStyleBackColor = true;
			this->bill_btn->Click += gcnew System::EventHandler(this, &Returncar::bill_btn_Click);
			// 
			// carname_txt
			// 
			this->carname_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carname_txt->Location = System::Drawing::Point(148, 527);
			this->carname_txt->Name = L"carname_txt";
			this->carname_txt->Size = System::Drawing::Size(203, 27);
			this->carname_txt->TabIndex = 53;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(21, 530);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 24);
			this->label10->TabIndex = 52;
			this->label10->Text = L"Car Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(431, 465);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 24);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Car ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 606);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 24);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Rent Date";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(431, 382);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 24);
			this->label7->TabIndex = 49;
			this->label7->Text = L"Rental Days";
			this->label7->Click += gcnew System::EventHandler(this, &Returncar::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 465);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 24);
			this->label6->TabIndex = 48;
			this->label6->Text = L"Phone No.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 24);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Licence No.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 24);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(431, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 24);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Customer ID";
			// 
			// carid_txt
			// 
			this->carid_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carid_txt->Location = System::Drawing::Point(578, 459);
			this->carid_txt->Name = L"carid_txt";
			this->carid_txt->Size = System::Drawing::Size(124, 27);
			this->carid_txt->TabIndex = 44;
			this->carid_txt->TextChanged += gcnew System::EventHandler(this, &Returncar::carid_txt_TextChanged);
			// 
			// rentdate_txt
			// 
			this->rentdate_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rentdate_txt->Location = System::Drawing::Point(148, 603);
			this->rentdate_txt->Name = L"rentdate_txt";
			this->rentdate_txt->Size = System::Drawing::Size(203, 27);
			this->rentdate_txt->TabIndex = 43;
			// 
			// rentaldays_txt
			// 
			this->rentaldays_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rentaldays_txt->Location = System::Drawing::Point(578, 382);
			this->rentaldays_txt->Name = L"rentaldays_txt";
			this->rentaldays_txt->Size = System::Drawing::Size(124, 27);
			this->rentaldays_txt->TabIndex = 42;
			this->rentaldays_txt->TextChanged += gcnew System::EventHandler(this, &Returncar::rentaldays_txt_TextChanged);
			// 
			// phoneno_txt
			// 
			this->phoneno_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneno_txt->Location = System::Drawing::Point(148, 459);
			this->phoneno_txt->Name = L"phoneno_txt";
			this->phoneno_txt->Size = System::Drawing::Size(203, 27);
			this->phoneno_txt->TabIndex = 41;
			// 
			// licenceno_txt
			// 
			this->licenceno_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->licenceno_txt->Location = System::Drawing::Point(148, 385);
			this->licenceno_txt->Name = L"licenceno_txt";
			this->licenceno_txt->Size = System::Drawing::Size(203, 27);
			this->licenceno_txt->TabIndex = 40;
			// 
			// name_txt
			// 
			this->name_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt->Location = System::Drawing::Point(148, 309);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(203, 27);
			this->name_txt->TabIndex = 39;
			// 
			// customerid_txt
			// 
			this->customerid_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerid_txt->Location = System::Drawing::Point(578, 312);
			this->customerid_txt->Name = L"customerid_txt";
			this->customerid_txt->Size = System::Drawing::Size(124, 27);
			this->customerid_txt->TabIndex = 38;
			this->customerid_txt->TextChanged += gcnew System::EventHandler(this, &Returncar::customerid_txt_TextChanged);
			// 
			// search_btn
			// 
			this->search_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_btn->Location = System::Drawing::Point(472, 216);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(95, 30);
			this->search_btn->TabIndex = 37;
			this->search_btn->Text = L"Search";
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Returncar::search_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(147, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 24);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Customer ID";
			// 
			// custid_txt
			// 
			this->custid_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->custid_txt->Location = System::Drawing::Point(274, 217);
			this->custid_txt->Name = L"custid_txt";
			this->custid_txt->Size = System::Drawing::Size(182, 27);
			this->custid_txt->TabIndex = 35;
			// 
			// invoice_richtextbox
			// 
			this->invoice_richtextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->invoice_richtextbox->Location = System::Drawing::Point(939, 126);
			this->invoice_richtextbox->Name = L"invoice_richtextbox";
			this->invoice_richtextbox->Size = System::Drawing::Size(434, 521);
			this->invoice_richtextbox->TabIndex = 66;
			this->invoice_richtextbox->Text = L"";
			this->invoice_richtextbox->TextChanged += gcnew System::EventHandler(this, &Returncar::invoice_richtextbox_TextChanged);
			// 
			// returncar_txt
			// 
			this->returncar_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returncar_txt->Location = System::Drawing::Point(984, 653);
			this->returncar_txt->Name = L"returncar_txt";
			this->returncar_txt->Size = System::Drawing::Size(134, 58);
			this->returncar_txt->TabIndex = 67;
			this->returncar_txt->Text = L"Return Car";
			this->returncar_txt->UseVisualStyleBackColor = true;
			this->returncar_txt->Click += gcnew System::EventHandler(this, &Returncar::returncar_txt_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(205, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 44);
			this->label1->TabIndex = 68;
			this->label1->Text = L"Return Car";
			// 
			// Returncar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1468, 744);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->returncar_txt);
			this->Controls->Add(this->invoice_richtextbox);
			this->Controls->Add(this->panaltydays_txt);
			this->Controls->Add(this->actualrd_txt);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->distance_txt);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->bill_btn);
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
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->custid_txt);
			this->Name = L"Returncar";
			this->Text = L"Returncar";
			this->Load += gcnew System::EventHandler(this, &Returncar::Returncar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:void ActualRD(void) {
		String^ val = custid_txt->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `car_rental`.`customer_details` SET `actual_rd` =DATEDIFF(curdate(), rental_date) WHERE (`id` = '" + val + "');", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

     private:void CarName(void)
	{
		String^ val2 = carid_txt->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT `car_name` FROM car_rental.car_details WHERE (`sr.no.` = '" + val2 +"');", conDataBase);
		MySqlDataReader^ myReader;
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if (myReader->Read()) {
			String^ carnameval = myReader->GetString("car_name");
			carname_txt->Text = carnameval;
		}
		conDataBase->Close();
		
	}
	
	private:void HandleCarStock()
	{
		String^ caridval = carid_txt->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `car_rental`.`car_details` SET `stock` = stock + 1 WHERE(`sr.no.` = '" + caridval + "'); ", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Stock plus 1");

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

	private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		ActualRD();
		
		String^ val1 = custid_txt->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.customer_details WHERE id='" + val1+ "' ;", conDataBase);
		MySqlDataReader^ myReader;
	
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			if (myReader->Read()) {

				String^ nameval = myReader->GetString("name");
				name_txt->Text = nameval;
                String^ idval = myReader->GetInt32("id").ToString();
				customerid_txt->Text = idval;
				String^ licenceval = myReader->GetString("licence");
				licenceno_txt->Text = licenceval;
				String^ phoneval = myReader->GetString("phone");
				phoneno_txt->Text = phoneval;
				String^ rentaldaysval = myReader->GetInt32("rental_days").ToString();
				rentaldays_txt->Text = rentaldaysval;
				String^ rentaldateval = myReader->GetString("rental_date");
				rentdate_txt->Text = rentaldateval;
				String^ caridval = myReader->GetString("car_id");
				carid_txt->Text = caridval;
				String^ actualrdval = myReader->GetInt32("actual_rd").ToString();
				actualrd_txt->Text = actualrdval;
				int rentalDays = myReader->GetInt32("rental_days");
				int actualRentalDays = myReader->GetInt32("actual_rd");
				int panaltyDays = actualRentalDays - rentalDays;
				if (panaltyDays < 0)
				{
					panaltyDays = 0;
				}
				String^ temp = panaltyDays.ToString();
				panaltydays_txt->Text = temp;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
		CarName();
	}
	
private: System::Void bill_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ val3 = carid_txt->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT `rate` FROM car_rental.car_details WHERE (`sr.no.` = '" + val3 + "');" , conDataBase);
	MySqlDataReader^ myReader;
	conDataBase->Open();
	myReader = cmdDataBase->ExecuteReader();
	double PerKM, PerDay, Panalty, Total;
	if (myReader->Read()) {
		/*Double^ carrateval = myReader->GetDouble("rate");*/
		String^ carrateval1 = myReader->GetDouble("rate").ToString();
		String^ distance = distance_txt->Text;

		msclr::interop::marshal_context context;
		std::string distance1 = context.marshal_as<std::string>(distance);
		double temp5 = stod(distance1);

		std::string carrateval2 = context.marshal_as<std::string>(carrateval1);
		double carrateval3 = stod(carrateval2);

		std::string actualrd1 = context.marshal_as<std::string>(actualrd_txt->Text);
		double actualrd2 = stod(actualrd1);

		std::string panaltydays1 = context.marshal_as<std::string>(panaltydays_txt->Text);
		double panaltydays2 = stod(panaltydays1);

		PerKM = carrateval3 * temp5;
		PerDay = actualrd2 * 800;
	    Panalty = panaltydays2 * 200;
		Total = PerKM + PerDay + Panalty;

	}
	
	invoice_richtextbox->Clear();
	invoice_richtextbox->Text += "******************************\n";
	invoice_richtextbox->Text += "***        RECEIPT         ***\n";
	invoice_richtextbox->Text += "******************************\n";

	invoice_richtextbox->Text += "Customer ID       : " + customerid_txt->Text + "\n";
	invoice_richtextbox->Text += "Customer Name     : " + name_txt->Text + "\n";
	invoice_richtextbox->Text += "Distance Travelled: " + distance_txt->Text + "\n";
	invoice_richtextbox->Text += "------      CHARGES        -------" + "\n";
	invoice_richtextbox->Text += "Per day:          : " + PerDay + "\n";
	invoice_richtextbox->Text += "Per km:           : " + PerKM + "\n";
	invoice_richtextbox->Text += "Panalty           : " + Panalty + "\n";
	invoice_richtextbox->Text += "*******************************\n";
	invoice_richtextbox->Text += "Total             : " + Total + "\n";

}
private: System::Void invoice_richtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void returncar_txt_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ idval = custid_txt->Text;
	String^ yes = "YES";
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `car_rental`.`customer_details` SET `return_status` = '"+yes+"' WHERE (id = '"+idval+"');", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Car Returned Successfully");
	}
	
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	HandleCarStock(); 
}

private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	rc2->Show();
}
private: System::Void Returncar_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rentaldays_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void customerid_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void carid_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panaltydays_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void actualrd_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
