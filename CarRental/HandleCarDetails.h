#pragma once
#include "AddCar.h"
#include "DeleteAndUpdate.h"
#include "ShowAllCars1.h"
namespace CarRental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HandleCarDetails
	/// </summary>
	public ref class HandleCarDetails : public System::Windows::Forms::Form
	{
	public:
		Form^ h;
        HandleCarDetails(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		HandleCarDetails(Form ^h1)
		{
			h = h1;
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HandleCarDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ back_btn;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(401, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Car";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HandleCarDetails::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(401, 272);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 64);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Delete , Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &HandleCarDetails::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(401, 376);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(225, 58);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Show All Cars";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &HandleCarDetails::button4_Click);
			// 
			// back_btn
			// 
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(401, 487);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(225, 58);
			this->back_btn->TabIndex = 4;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &HandleCarDetails::back_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(281, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 40);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Handle Car Details";
			// 
			// HandleCarDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1095, 640);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"HandleCarDetails";
			this->Text = L"HandleCarDetails";
			this->Load += gcnew System::EventHandler(this, &HandleCarDetails::HandleCarDetails_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		AddCar^ ac = gcnew AddCar(this);
		ac->ShowDialog();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		DeleteAndUpdate ^obj1 = gcnew DeleteAndUpdate(this);
		obj1->ShowDialog(); 
     
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ShowAllCars1^ obj1 = gcnew ShowAllCars1(this);
	obj1->ShowDialog();


}
private: System::Void HandleCarDetails_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	h->Show();
}
};
}
