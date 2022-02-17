#pragma once
#include "Homepage1.h"

namespace CarRental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ username_txt;
	private: System::Windows::Forms::TextBox^ password_txt;
	protected:

	protected:

	private: System::Windows::Forms::Label^ username_lbl;
	private: System::Windows::Forms::Label^ password_lbl;
	private: System::Windows::Forms::Button^ login_btn;




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
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(193, 67);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(153, 22);
			this->username_txt->TabIndex = 0;
			this->username_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(193, 125);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(153, 22);
			this->password_txt->TabIndex = 1;
			this->password_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->Location = System::Drawing::Point(82, 70);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(73, 17);
			this->username_lbl->TabIndex = 2;
			this->username_lbl->Text = L"Username";
			this->username_lbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->Location = System::Drawing::Point(82, 130);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(69, 17);
			this->password_lbl->TabIndex = 3;
			this->password_lbl->Text = L"Password";
			this->password_lbl->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// login_btn
			// 
			this->login_btn->Location = System::Drawing::Point(193, 181);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(75, 33);
			this->login_btn->TabIndex = 4;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 281);
			this->Controls->Add(this->login_btn);
			this->Controls->Add(this->password_lbl);
			this->Controls->Add(this->username_lbl);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->username_txt);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Amit@1234;";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `car_rental`.`admins` where username='"+this->username_txt->Text+"' and password='"+this->password_txt->Text+"';",conDataBase);
			MySqlDataReader^ myReader;
			try {
				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				int count = 0;
				while (myReader->Read()) {
					count = count + 1;
				}
				if (count == 1) {
					this->Hide();
					Homepage^ h1 = gcnew Homepage();
					h1->ShowDialog();

				}
				else if(count>1) {
					MessageBox::Show("Duplicate Username and Password ..... Access Denied");
                }
				else {
					MessageBox::Show("Username or Password is incorrect .....Please try again");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);

			}


	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
