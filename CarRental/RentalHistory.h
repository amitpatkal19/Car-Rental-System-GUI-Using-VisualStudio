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
	/// Summary for RentalHistory
	/// </summary>
	public ref class RentalHistory : public System::Windows::Forms::Form
	{
	public:
		Form^ rh;
		RentalHistory(void)
		{
			InitializeComponent();
			FillData();
			//
			//TODO: Add the constructor code here
			//
		}
		RentalHistory(Form ^rh1)
		{
			rh = rh1;
			InitializeComponent();
			FillData();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RentalHistory()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// back_btn
			// 
			this->back_btn->Location = System::Drawing::Point(1267, 608);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(119, 42);
			this->back_btn->TabIndex = 1;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &RentalHistory::back_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(45, 78);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1341, 494);
			this->dataGridView1->TabIndex = 2;
			// 
			// RentalHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1436, 732);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->back_btn);
			this->Name = L"RentalHistory";
			this->Text = L"RentalHistory";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:void FillData()
	{
		String^ returnStatus = "NO";
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.customer_details WHERE (DATEDIFF(curdate(), rental_date)>rental_days) OR return_status='NO' OR return_status='YES';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		rh->Show();
	}
	private: System::Void load_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ returnStatus = "NO";
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.customer_details WHERE (DATEDIFF(curdate(), rental_date)>rental_days) OR return_status='NO' OR return_status='YES';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}
};
}
