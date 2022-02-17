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
	/// Summary for DaleteCar
	/// </summary>
	public ref class DaleteCar : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		DaleteCar(void)
		{
			
			InitializeComponent();
			FillList();
			
			//
			//TODO: Add the constructor code here
			//
		}
		
		DaleteCar(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
	
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DaleteCar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ id_txt;
	protected:

	private: System::Windows::Forms::TextBox^ carname_txt;
	private: System::Windows::Forms::TextBox^ charging_txt;

	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ Cars_List;
	private: System::Windows::Forms::Button^ delete_btn;

	private: System::Windows::Forms::TextBox^ power_txt;
	private: System::Windows::Forms::TextBox^ battery_txt;
	private: System::Windows::Forms::TextBox^ range_txt;
	private: System::Windows::Forms::TextBox^ seats_txt;
	private: System::Windows::Forms::TextBox^ stock_txt;




	private: System::Windows::Forms::TextBox^ rate_txt;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::Button^ back1_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;





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
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->carname_txt = (gcnew System::Windows::Forms::TextBox());
			this->charging_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Cars_List = (gcnew System::Windows::Forms::ListBox());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->power_txt = (gcnew System::Windows::Forms::TextBox());
			this->battery_txt = (gcnew System::Windows::Forms::TextBox());
			this->range_txt = (gcnew System::Windows::Forms::TextBox());
			this->seats_txt = (gcnew System::Windows::Forms::TextBox());
			this->stock_txt = (gcnew System::Windows::Forms::TextBox());
			this->rate_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->back1_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// id_txt
			// 
			this->id_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_txt->Location = System::Drawing::Point(863, 172);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(191, 27);
			this->id_txt->TabIndex = 0;
			this->id_txt->TextChanged += gcnew System::EventHandler(this, &DaleteCar::srno_txt_TextChanged);
			// 
			// carname_txt
			// 
			this->carname_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carname_txt->Location = System::Drawing::Point(863, 227);
			this->carname_txt->Name = L"carname_txt";
			this->carname_txt->Size = System::Drawing::Size(191, 27);
			this->carname_txt->TabIndex = 1;
			// 
			// charging_txt
			// 
			this->charging_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charging_txt->Location = System::Drawing::Point(863, 465);
			this->charging_txt->Name = L"charging_txt";
			this->charging_txt->Size = System::Drawing::Size(191, 27);
			this->charging_txt->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(748, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(749, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(744, 643);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(748, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Car Name";
			this->label4->Click += gcnew System::EventHandler(this, &DaleteCar::label4_Click);
			// 
			// Cars_List
			// 
			this->Cars_List->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cars_List->FormattingEnabled = true;
			this->Cars_List->ItemHeight = 24;
			this->Cars_List->Location = System::Drawing::Point(72, 177);
			this->Cars_List->Name = L"Cars_List";
			this->Cars_List->Size = System::Drawing::Size(477, 388);
			this->Cars_List->TabIndex = 7;
			this->Cars_List->SelectedIndexChanged += gcnew System::EventHandler(this, &DaleteCar::listBox1_SelectedIndexChanged);
			// 
			// delete_btn
			// 
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_btn->Location = System::Drawing::Point(325, 626);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(104, 37);
			this->delete_btn->TabIndex = 8;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->UseVisualStyleBackColor = true;
			this->delete_btn->Click += gcnew System::EventHandler(this, &DaleteCar::delete_btn_Click);
			// 
			// power_txt
			// 
			this->power_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power_txt->Location = System::Drawing::Point(863, 291);
			this->power_txt->Name = L"power_txt";
			this->power_txt->Size = System::Drawing::Size(191, 27);
			this->power_txt->TabIndex = 9;
			this->power_txt->TextChanged += gcnew System::EventHandler(this, &DaleteCar::textBox1_TextChanged);
			// 
			// battery_txt
			// 
			this->battery_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->battery_txt->Location = System::Drawing::Point(863, 348);
			this->battery_txt->Name = L"battery_txt";
			this->battery_txt->Size = System::Drawing::Size(191, 27);
			this->battery_txt->TabIndex = 10;
			// 
			// range_txt
			// 
			this->range_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->range_txt->Location = System::Drawing::Point(863, 406);
			this->range_txt->Name = L"range_txt";
			this->range_txt->Size = System::Drawing::Size(191, 27);
			this->range_txt->TabIndex = 11;
			// 
			// seats_txt
			// 
			this->seats_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seats_txt->Location = System::Drawing::Point(863, 522);
			this->seats_txt->Name = L"seats_txt";
			this->seats_txt->Size = System::Drawing::Size(191, 27);
			this->seats_txt->TabIndex = 12;
			// 
			// stock_txt
			// 
			this->stock_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stock_txt->Location = System::Drawing::Point(863, 640);
			this->stock_txt->Name = L"stock_txt";
			this->stock_txt->Size = System::Drawing::Size(191, 27);
			this->stock_txt->TabIndex = 13;
			// 
			// rate_txt
			// 
			this->rate_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rate_txt->Location = System::Drawing::Point(863, 580);
			this->rate_txt->Name = L"rate_txt";
			this->rate_txt->Size = System::Drawing::Size(191, 27);
			this->rate_txt->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(748, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 24);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Power";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(744, 454);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 24);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Charging";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(744, 397);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 24);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Range";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(748, 336);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 24);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Battery";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(748, 583);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 24);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Rate";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(748, 522);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 24);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Seats";
			// 
			// update_btn
			// 
			this->update_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_btn->Location = System::Drawing::Point(193, 626);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(104, 37);
			this->update_btn->TabIndex = 21;
			this->update_btn->Text = L"Update";
			this->update_btn->UseVisualStyleBackColor = true;
			this->update_btn->Click += gcnew System::EventHandler(this, &DaleteCar::update_btn_Click);
			// 
			// back1_btn
			// 
			this->back1_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back1_btn->Location = System::Drawing::Point(445, 626);
			this->back1_btn->Name = L"back1_btn";
			this->back1_btn->Size = System::Drawing::Size(104, 37);
			this->back1_btn->TabIndex = 22;
			this->back1_btn->Text = L"Back";
			this->back1_btn->UseVisualStyleBackColor = true;
			this->back1_btn->Click += gcnew System::EventHandler(this, &DaleteCar::back_btn_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(72, 626);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 37);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Load ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(91, 47);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(338, 48);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Delete Car";
			// 
			// DaleteCar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 751);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->back1_btn);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->rate_txt);
			this->Controls->Add(this->stock_txt);
			this->Controls->Add(this->seats_txt);
			this->Controls->Add(this->range_txt);
			this->Controls->Add(this->battery_txt);
			this->Controls->Add(this->power_txt);
			this->Controls->Add(this->delete_btn);
			this->Controls->Add(this->Cars_List);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->charging_txt);
			this->Controls->Add(this->carname_txt);
			this->Controls->Add(this->id_txt);
			this->Name = L"DaleteCar";
			this->Text = L"DaleteCar";
			this->Load += gcnew System::EventHandler(this, &DaleteCar::DaleteCar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DaleteCar_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}


 private:void FillList(void) {
	 
	 String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.car_details;", conDataBase);
	 MySqlDataReader^ myReader;
	 try {
		 conDataBase->Open();
		 myReader = cmdDataBase->ExecuteReader();

		 while(myReader->Read()) {
			 String^ carnameval;
			 carnameval = myReader->GetString("car_name");
			 Cars_List->Items->Add(carnameval);
		 }
	 }
	 catch (Exception^ ex) {
		 MessageBox::Show(ex->Message);
		  
	 }
 }

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	String^ listval = Cars_List->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.car_details where car_name='"+listval+"' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if(myReader->Read()) {
			
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

private: System::Void srno_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
	String^ listval = Cars_List->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("DELETE FROM car_rental.car_details where car_name='" + listval + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Car Deleted Successfully");
	
		this->Hide();
		DaleteCar^ d1 = gcnew DaleteCar();
		d1->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ listval = Cars_List->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
    MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `car_rental`.`car_details` SET `car_name` = '" + this->carname_txt->Text + "', `power` = '" + this->power_txt->Text + "', `battery` = '" + this->battery_txt->Text + "',`range` = '" + this->range_txt->Text + "', `charging` = '" + this->charging_txt->Text + "', `seats` = '" + this->seats_txt->Text + "', `rate` = '" + this->rate_txt->Text + "', `stock` = '" + this->stock_txt->Text + "' WHERE (car_name = '" + listval + "');", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Car Updated Successfully");
		this->Hide();
		DaleteCar^ d1 = gcnew DaleteCar();
		d1->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
	
} 
};
}
