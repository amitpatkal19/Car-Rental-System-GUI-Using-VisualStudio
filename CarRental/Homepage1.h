#pragma once
#include "HandleCarDetails.h"
#include "RentCar.h"
#include "DefaulterCustomers.h"
#include "Returncar1.h"
#include "RentalHistory.h"
namespace CarRental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
	public:
		Homepage(void)
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
		~Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ rent_car_btn;
	private: System::Windows::Forms::Button^ return_car_btn;
	private: System::Windows::Forms::Button^ rent_history_btn;
	protected:

	protected:


	private: System::Windows::Forms::Button^ modify_car_details_btn;

	private: System::Windows::Forms::Button^ defaulter_customers_btn;
	private: System::Windows::Forms::Button^ exit_btn;
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
			this->rent_car_btn = (gcnew System::Windows::Forms::Button());
			this->return_car_btn = (gcnew System::Windows::Forms::Button());
			this->rent_history_btn = (gcnew System::Windows::Forms::Button());
			this->modify_car_details_btn = (gcnew System::Windows::Forms::Button());
			this->defaulter_customers_btn = (gcnew System::Windows::Forms::Button());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rent_car_btn
			// 
			this->rent_car_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rent_car_btn->Location = System::Drawing::Point(327, 258);
			this->rent_car_btn->Name = L"rent_car_btn";
			this->rent_car_btn->Size = System::Drawing::Size(217, 86);
			this->rent_car_btn->TabIndex = 0;
			this->rent_car_btn->Text = L"Rent Car";
			this->rent_car_btn->UseVisualStyleBackColor = true;
			this->rent_car_btn->Click += gcnew System::EventHandler(this, &Homepage::button1_Click);
			// 
			// return_car_btn
			// 
			this->return_car_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->return_car_btn->Location = System::Drawing::Point(761, 258);
			this->return_car_btn->Name = L"return_car_btn";
			this->return_car_btn->Size = System::Drawing::Size(221, 86);
			this->return_car_btn->TabIndex = 1;
			this->return_car_btn->Text = L"Return Car";
			this->return_car_btn->UseVisualStyleBackColor = true;
			this->return_car_btn->Click += gcnew System::EventHandler(this, &Homepage::return_car_btn_Click);
			// 
			// rent_history_btn
			// 
			this->rent_history_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rent_history_btn->Location = System::Drawing::Point(327, 551);
			this->rent_history_btn->Name = L"rent_history_btn";
			this->rent_history_btn->Size = System::Drawing::Size(217, 83);
			this->rent_history_btn->TabIndex = 2;
			this->rent_history_btn->Text = L"Rent History";
			this->rent_history_btn->UseVisualStyleBackColor = true;
			this->rent_history_btn->Click += gcnew System::EventHandler(this, &Homepage::rent_history_btn_Click);
			// 
			// modify_car_details_btn
			// 
			this->modify_car_details_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modify_car_details_btn->Location = System::Drawing::Point(761, 398);
			this->modify_car_details_btn->Name = L"modify_car_details_btn";
			this->modify_car_details_btn->Size = System::Drawing::Size(221, 87);
			this->modify_car_details_btn->TabIndex = 3;
			this->modify_car_details_btn->Text = L"Modify Car Details";
			this->modify_car_details_btn->UseVisualStyleBackColor = true;
			this->modify_car_details_btn->Click += gcnew System::EventHandler(this, &Homepage::modify_car_details_btn_Click);
			// 
			// defaulter_customers_btn
			// 
			this->defaulter_customers_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->defaulter_customers_btn->Location = System::Drawing::Point(327, 398);
			this->defaulter_customers_btn->Name = L"defaulter_customers_btn";
			this->defaulter_customers_btn->Size = System::Drawing::Size(217, 87);
			this->defaulter_customers_btn->TabIndex = 4;
			this->defaulter_customers_btn->Text = L"Defaulter Customers";
			this->defaulter_customers_btn->UseVisualStyleBackColor = true;
			this->defaulter_customers_btn->Click += gcnew System::EventHandler(this, &Homepage::button5_Click);
			// 
			// exit_btn
			// 
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_btn->Location = System::Drawing::Point(761, 551);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(221, 83);
			this->exit_btn->TabIndex = 5;
			this->exit_btn->Text = L"Exit";
			this->exit_btn->UseVisualStyleBackColor = true;
			this->exit_btn->Click += gcnew System::EventHandler(this, &Homepage::exit_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 34.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(274, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(784, 75);
			this->label1->TabIndex = 6;
			this->label1->Text = L"CAR RENAL SYSTEM";
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1356, 736);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->defaulter_customers_btn);
			this->Controls->Add(this->modify_car_details_btn);
			this->Controls->Add(this->rent_history_btn);
			this->Controls->Add(this->return_car_btn);
			this->Controls->Add(this->rent_car_btn);
			this->Name = L"Homepage";
			this->Text = L"Homepage";
			this->Load += gcnew System::EventHandler(this, &Homepage::Homepage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Homepage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DefaulterCustomers ^dc = gcnew DefaulterCustomers(this);
		dc->ShowDialog();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
	RentCar^ hcd = gcnew RentCar(this);
	hcd->ShowDialog();
	
}
private: System::Void modify_car_details_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
	this->Hide();
	HandleCarDetails^ hcd = gcnew HandleCarDetails(this);
	hcd->ShowDialog();

}
private: System::Void return_car_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Returncar^ rc = gcnew Returncar(this);
	rc->ShowDialog();
}
private: System::Void rent_history_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RentalHistory ^rhh = gcnew RentalHistory(this);
	rhh->ShowDialog();
}
private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
