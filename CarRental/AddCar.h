#pragma once

namespace CarRental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddCar
	/// </summary>
	public ref class AddCar : public System::Windows::Forms::Form
	{
	public:
		Form ^hp;
		AddCar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddCar(Form ^hp1)
		{
			hp = hp1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ carname_txt;
	private: System::Windows::Forms::TextBox^ power_txt;
	private: System::Windows::Forms::TextBox^ battery_txt;
	private: System::Windows::Forms::TextBox^ range_txt;
	private: System::Windows::Forms::TextBox^ charging_txt;
	private: System::Windows::Forms::TextBox^ seats_txt;
	private: System::Windows::Forms::TextBox^ rate_txt;
	private: System::Windows::Forms::TextBox^ stocks_txt;

	protected:

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::Label^ label9;




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
			this->carname_txt = (gcnew System::Windows::Forms::TextBox());
			this->power_txt = (gcnew System::Windows::Forms::TextBox());
			this->battery_txt = (gcnew System::Windows::Forms::TextBox());
			this->range_txt = (gcnew System::Windows::Forms::TextBox());
			this->charging_txt = (gcnew System::Windows::Forms::TextBox());
			this->seats_txt = (gcnew System::Windows::Forms::TextBox());
			this->rate_txt = (gcnew System::Windows::Forms::TextBox());
			this->stocks_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// carname_txt
			// 
			this->carname_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carname_txt->Location = System::Drawing::Point(368, 198);
			this->carname_txt->Name = L"carname_txt";
			this->carname_txt->Size = System::Drawing::Size(227, 27);
			this->carname_txt->TabIndex = 0;
			// 
			// power_txt
			// 
			this->power_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power_txt->Location = System::Drawing::Point(732, 198);
			this->power_txt->Name = L"power_txt";
			this->power_txt->Size = System::Drawing::Size(184, 27);
			this->power_txt->TabIndex = 1;
			// 
			// battery_txt
			// 
			this->battery_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->battery_txt->Location = System::Drawing::Point(368, 273);
			this->battery_txt->Name = L"battery_txt";
			this->battery_txt->Size = System::Drawing::Size(227, 27);
			this->battery_txt->TabIndex = 2;
			// 
			// range_txt
			// 
			this->range_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->range_txt->Location = System::Drawing::Point(732, 273);
			this->range_txt->Name = L"range_txt";
			this->range_txt->Size = System::Drawing::Size(184, 27);
			this->range_txt->TabIndex = 3;
			// 
			// charging_txt
			// 
			this->charging_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charging_txt->Location = System::Drawing::Point(368, 361);
			this->charging_txt->Name = L"charging_txt";
			this->charging_txt->Size = System::Drawing::Size(227, 27);
			this->charging_txt->TabIndex = 4;
			// 
			// seats_txt
			// 
			this->seats_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seats_txt->Location = System::Drawing::Point(732, 361);
			this->seats_txt->Name = L"seats_txt";
			this->seats_txt->Size = System::Drawing::Size(184, 27);
			this->seats_txt->TabIndex = 5;
			// 
			// rate_txt
			// 
			this->rate_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rate_txt->Location = System::Drawing::Point(368, 438);
			this->rate_txt->Name = L"rate_txt";
			this->rate_txt->Size = System::Drawing::Size(227, 27);
			this->rate_txt->TabIndex = 6;
			// 
			// stocks_txt
			// 
			this->stocks_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stocks_txt->Location = System::Drawing::Point(732, 438);
			this->stocks_txt->Name = L"stocks_txt";
			this->stocks_txt->Size = System::Drawing::Size(184, 27);
			this->stocks_txt->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(224, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Car Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(645, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Power";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(224, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Battery";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(655, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 24);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Range";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(224, 358);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Charging";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(655, 364);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Seats";
			this->label6->Click += gcnew System::EventHandler(this, &AddCar::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(207, 435);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 24);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Rate(₹ per km)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(665, 438);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 24);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Stock";
			// 
			// add_btn
			// 
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(492, 556);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(95, 55);
			this->add_btn->TabIndex = 16;
			this->add_btn->Text = L"Add";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &AddCar::add_txt_Click);
			// 
			// back_btn
			// 
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(669, 556);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(98, 55);
			this->back_btn->TabIndex = 17;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &AddCar::back_btn_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(483, 52);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(259, 52);
			this->label9->TabIndex = 18;
			this->label9->Text = L"ADD CAR";
			// 
			// AddCar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1301, 703);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stocks_txt);
			this->Controls->Add(this->rate_txt);
			this->Controls->Add(this->seats_txt);
			this->Controls->Add(this->charging_txt);
			this->Controls->Add(this->range_txt);
			this->Controls->Add(this->battery_txt);
			this->Controls->Add(this->power_txt);
			this->Controls->Add(this->carname_txt);
			this->Name = L"AddCar";
			this->Text = L"AddCar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void add_txt_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `car_rental`.`car_details` (`car_name`, `power`, `battery`, `range`, `charging`, `seats`, `rate`, `stock`) VALUES ('" + this->carname_txt->Text + "','" + this->power_txt->Text + "', '" + this->battery_txt->Text + "', '" + this->range_txt->Text + "', '" + this->charging_txt->Text + "', '" + this->seats_txt->Text + "', '" + this->rate_txt->Text + "', '" + this->stocks_txt->Text + "');", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
        MessageBox::Show("Car Added Successfully");
		while (myReader->Read()) {

		}
		}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	hp->Show();
}
};
}
