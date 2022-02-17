#pragma once
#include <msclr\marshal_cppstd.h>
namespace CarRental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	
	/// <summary>
	/// Summary for RentCar
	/// </summary>
	public ref class RentCar : public System::Windows::Forms::Form
	{
	public:
		Form^ rc;
		RentCar(void)
		{

			InitializeComponent();
			FillList();
			//
			//TODO: Add the constructor code here
			//
		}
		RentCar(Form ^rc1)
		{
			rc = rc1;
			InitializeComponent();
			FillList();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RentCar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::TextBox^ name_txt;

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ licence_txt;
	private: System::Windows::Forms::TextBox^ phone_txt;
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::TextBox^ days_txt;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ id_txt;
	private: System::Windows::Forms::TextBox^ carname_txt;
	private: System::Windows::Forms::TextBox^ power_txt;
	private: System::Windows::Forms::TextBox^ battery_txt;
	private: System::Windows::Forms::TextBox^ range_txt;
	private: System::Windows::Forms::TextBox^ charging_txt;
	private: System::Windows::Forms::TextBox^ seats_txt;
	private: System::Windows::Forms::TextBox^ rate_txt;








	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ stock_txt;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;


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
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->licence_txt = (gcnew System::Windows::Forms::TextBox());
			this->phone_txt = (gcnew System::Windows::Forms::TextBox());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->days_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->carname_txt = (gcnew System::Windows::Forms::TextBox());
			this->power_txt = (gcnew System::Windows::Forms::TextBox());
			this->battery_txt = (gcnew System::Windows::Forms::TextBox());
			this->range_txt = (gcnew System::Windows::Forms::TextBox());
			this->charging_txt = (gcnew System::Windows::Forms::TextBox());
			this->seats_txt = (gcnew System::Windows::Forms::TextBox());
			this->rate_txt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->stock_txt = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_lbl->Location = System::Drawing::Point(48, 272);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(56, 24);
			this->name_lbl->TabIndex = 0;
			this->name_lbl->Text = L"Name";
			// 
			// name_txt
			// 
			this->name_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt->Location = System::Drawing::Point(205, 269);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(241, 27);
			this->name_txt->TabIndex = 1;
			this->name_txt->TextChanged += gcnew System::EventHandler(this, &RentCar::name_txt_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(549, 671);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Rent";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RentCar::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(548, 157);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(375, 464);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RentCar::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 344);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Licence No.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 427);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Phone No.";
			// 
			// licence_txt
			// 
			this->licence_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->licence_txt->Location = System::Drawing::Point(205, 341);
			this->licence_txt->Name = L"licence_txt";
			this->licence_txt->Size = System::Drawing::Size(241, 27);
			this->licence_txt->TabIndex = 6;
			// 
			// phone_txt
			// 
			this->phone_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_txt->Location = System::Drawing::Point(205, 424);
			this->phone_txt->Name = L"phone_txt";
			this->phone_txt->Size = System::Drawing::Size(241, 27);
			this->phone_txt->TabIndex = 7;
			// 
			// back_btn
			// 
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(820, 674);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(103, 48);
			this->back_btn->TabIndex = 8;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &RentCar::back_btn_Click);
			// 
			// days_txt
			// 
			this->days_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->days_txt->Location = System::Drawing::Point(205, 509);
			this->days_txt->Name = L"days_txt";
			this->days_txt->Size = System::Drawing::Size(241, 27);
			this->days_txt->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 509);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Rental Days";
			// 
			// id_txt
			// 
			this->id_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_txt->Location = System::Drawing::Point(1149, 98);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(185, 27);
			this->id_txt->TabIndex = 11;
			// 
			// carname_txt
			// 
			this->carname_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carname_txt->Location = System::Drawing::Point(1149, 168);
			this->carname_txt->Name = L"carname_txt";
			this->carname_txt->Size = System::Drawing::Size(185, 27);
			this->carname_txt->TabIndex = 12;
			// 
			// power_txt
			// 
			this->power_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power_txt->Location = System::Drawing::Point(1149, 239);
			this->power_txt->Name = L"power_txt";
			this->power_txt->Size = System::Drawing::Size(185, 27);
			this->power_txt->TabIndex = 13;
			// 
			// battery_txt
			// 
			this->battery_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->battery_txt->Location = System::Drawing::Point(1149, 318);
			this->battery_txt->Name = L"battery_txt";
			this->battery_txt->Size = System::Drawing::Size(185, 27);
			this->battery_txt->TabIndex = 14;
			// 
			// range_txt
			// 
			this->range_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->range_txt->Location = System::Drawing::Point(1149, 392);
			this->range_txt->Name = L"range_txt";
			this->range_txt->Size = System::Drawing::Size(185, 27);
			this->range_txt->TabIndex = 15;
			// 
			// charging_txt
			// 
			this->charging_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charging_txt->Location = System::Drawing::Point(1149, 461);
			this->charging_txt->Name = L"charging_txt";
			this->charging_txt->Size = System::Drawing::Size(185, 27);
			this->charging_txt->TabIndex = 16;
			// 
			// seats_txt
			// 
			this->seats_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seats_txt->Location = System::Drawing::Point(1149, 528);
			this->seats_txt->Name = L"seats_txt";
			this->seats_txt->Size = System::Drawing::Size(185, 27);
			this->seats_txt->TabIndex = 17;
			// 
			// rate_txt
			// 
			this->rate_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rate_txt->Location = System::Drawing::Point(1149, 594);
			this->rate_txt->Name = L"rate_txt";
			this->rate_txt->Size = System::Drawing::Size(185, 27);
			this->rate_txt->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1045, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1045, 168);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 24);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Car Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1047, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 24);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Power";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1047, 318);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 24);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Battery";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1047, 395);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 24);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Range";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1045, 464);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 24);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Charging ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1045, 531);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 24);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Seats";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1045, 597);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 24);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Rate";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1045, 674);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 24);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Stock";
			// 
			// stock_txt
			// 
			this->stock_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stock_txt->Location = System::Drawing::Point(1149, 671);
			this->stock_txt->Name = L"stock_txt";
			this->stock_txt->Size = System::Drawing::Size(185, 27);
			this->stock_txt->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(46, 135);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(397, 36);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Customer Details";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(542, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(133, 40);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Cars";
			// 
			// RentCar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1455, 787);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->stock_txt);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->rate_txt);
			this->Controls->Add(this->seats_txt);
			this->Controls->Add(this->charging_txt);
			this->Controls->Add(this->range_txt);
			this->Controls->Add(this->battery_txt);
			this->Controls->Add(this->power_txt);
			this->Controls->Add(this->carname_txt);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->days_txt);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->phone_txt);
			this->Controls->Add(this->licence_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->name_lbl);
			this->Name = L"RentCar";
			this->Text = L"RentCar";
			this->Load += gcnew System::EventHandler(this, &RentCar::RentCar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:void FillList(void) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.car_details;", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {
				String^ carnameval;
				carnameval = myReader->GetString("car_name");
				listBox1->Items->Add(carnameval);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}

private:void HandleCarStock()
{
	String^ caridval = id_txt->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	//"UPDATE `car_rental`.`car_details` SET `stock` =stock-1  WHERE (sr.no. = '" + caridval + "');
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `car_rental`.`car_details` SET `stock` = stock - 1 WHERE(`sr.no.` = '"+caridval+"'); ", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Stock minus 1");

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ listval = listBox1->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.car_details where car_name='" + listval + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {

			String^ carnameval = myReader->GetString("car_name");
			carname_txt->Text = carnameval;

			String^ idval = myReader->GetInt32("sr.no.").ToString();
			id_txt->Text = idval;
			String^ powerval = myReader->GetString("power");
			power_txt->Text = powerval;
			String^ batteryval = myReader->GetString("battery");
			battery_txt->Text = batteryval;
			String^ rangeval = myReader->GetString("range");
			range_txt->Text = rangeval;
			String^ chargingval = myReader->GetString("charging");
			charging_txt->Text = chargingval;
			String^ seatsval = myReader->GetString("seats");
			seats_txt->Text = seatsval;
			String^ rateval = myReader->GetFloat("rate").ToString();
			rate_txt->Text = rateval;
			String^ stockval = myReader->GetInt32("stock").ToString();
			stock_txt->Text = stockval;


		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);

	}

}


private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	rc->Show();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	HandleCarStock();
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `car_rental`.`customer_details` (`name`, `licence`, `phone`, `rental_days`, `rental_date`, `car_id`) VALUES('" + this->name_txt->Text + "','" + this->licence_txt->Text + "','" + this->phone_txt->Text + "','" + this->days_txt->Text +"', curdate(), '" + this->id_txt->Text + "'); ",conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Car Rented Successfully");
		while (myReader->Read()) {

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	

}

private: System::Void name_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RentCar_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
