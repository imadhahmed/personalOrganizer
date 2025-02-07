#pragma once
#include "User.h"

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbuserName;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSignIn;
	private: System::Windows::Forms::Button^ btnExit;


	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Sign_in_Page;


	private: System::Windows::Forms::Label^ label1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbuserName = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Sign_in_Page = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(377, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 36);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Username";
			// 
			// tbuserName
			// 
			this->tbuserName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(112)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->tbuserName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbuserName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbuserName->ForeColor = System::Drawing::Color::Black;
			this->tbuserName->Location = System::Drawing::Point(485, 241);
			this->tbuserName->Name = L"tbuserName";
			this->tbuserName->Size = System::Drawing::Size(326, 36);
			this->tbuserName->TabIndex = 4;
			// 
			// tbPassword
			// 
			this->tbPassword->AcceptsReturn = true;
			this->tbPassword->AcceptsTab = true;
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(112)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::Color::Black;
			this->tbPassword->Location = System::Drawing::Point(485, 332);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(326, 29);
			this->tbPassword->TabIndex = 6;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(378, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password";
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackColor = System::Drawing::Color::Navy;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignIn->ForeColor = System::Drawing::Color::White;
			this->btnSignIn->Location = System::Drawing::Point(758, 545);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(155, 49);
			this->btnSignIn->TabIndex = 7;
			this->btnSignIn->Text = L"Sign in";
			this->btnSignIn->UseVisualStyleBackColor = false;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &loginForm::button1_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::IndianRed;
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::Black;
			this->btnExit->Location = System::Drawing::Point(919, 545);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(132, 49);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &loginForm::button2_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::Color::Transparent;
			this->linkLabel1->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel1->Location = System::Drawing::Point(547, 429);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(143, 26);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Register Now";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Lime;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginForm::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(480, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(386, 38);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Don\'t you have any account\?";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Sign_in_Page
			// 
			this->Sign_in_Page->AutoSize = true;
			this->Sign_in_Page->BackColor = System::Drawing::Color::Transparent;
			this->Sign_in_Page->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sign_in_Page->ForeColor = System::Drawing::Color::Black;
			this->Sign_in_Page->Location = System::Drawing::Point(561, 170);
			this->Sign_in_Page->Name = L"Sign_in_Page";
			this->Sign_in_Page->Size = System::Drawing::Size(79, 31);
			this->Sign_in_Page->TabIndex = 11;
			this->Sign_in_Page->Text = L"Login";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(268, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(665, 155);
			this->label1->TabIndex = 14;
			this->label1->Text = L"PERSONAL ORGANIZER";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loginForm
			// 
			this->AcceptButton = this->btnSignIn;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(1208, 664);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Sign_in_Page);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSignIn);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbuserName);
			this->Controls->Add(this->label3);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"loginForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &loginForm::loginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:User1^ user = nullptr;
	
private: System::Void loginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = this->tbuserName->Text;
	String^ password = this->tbPassword->Text;

	if (username->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Please enter E-mail and Password Correctly","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
	}
	try 
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();
		

		String^ sqlquery = "SELECT * FROM User_Detail WHERE Username=@Uname AND Password=@pswd;";
		SqlCommand command(sqlquery,%sqlconn);
		command.Parameters->AddWithValue("@Uname",username);
		command.Parameters->AddWithValue("@pswd",password);

		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read())
		{
			user = gcnew User1;
			user->id = reader->GetInt32(0);
			user->name = reader->GetString(1);
			user->username = reader->GetString(2);
			user->password = reader->GetString(3);


			this->Close();
		}
		else
		{
			MessageBox::Show("Username or Password is incorrect","Error",MessageBoxButtons::OK);
		}

		
	}
	catch(Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message,"Error", MessageBoxButtons::OK);
	}
}
public: bool switchToRegister = false;

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
private: System::Void SignIn_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
