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
	/// Summary for ShowAllCars1
	/// </summary>
	public ref class ShowAllCars1 : public System::Windows::Forms::Form
	{
	public:
		Form^ sac1;
		ShowAllCars1(void)
		{
			InitializeComponent();
			LoadData();
			//
			//TODO: Add the constructor code here
			//
		}
		ShowAllCars1(Form ^sac2)
		{
			sac1 = sac2;
			InitializeComponent();
			LoadData();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShowAllCars1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button2;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(543, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cars Data";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(70, 121);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1303, 526);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1233, 689);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 45);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ShowAllCars1::button2_Click);
			// 
			// ShowAllCars1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1456, 763);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"ShowAllCars1";
			this->Text = L"ShowAllCars1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		sac1->Show();
	}
		   private: void LoadData()
		   {
			   String^ returnStatus = "NO";
			   String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
			   MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			   MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM car_rental.car_details ;", conDataBase);
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
