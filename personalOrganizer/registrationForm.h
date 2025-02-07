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
	/// Summary for registrationForm
	/// </summary>
	public ref class registrationForm : public System::Windows::Forms::Form
	{
	public:
		registrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~registrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbRegistration;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ lbPassword;

	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Label^ lbUsername;
	private: System::Windows::Forms::TextBox^ tbConfirmPswd;
	private: System::Windows::Forms::Label^ lbconfirmPswd;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ lbLogin;
	private: System::Windows::Forms::Label^ lbLoginAsk;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrationForm::typeid));
			this->lbRegistration = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPswd = (gcnew System::Windows::Forms::TextBox());
			this->lbconfirmPswd = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lbLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->lbLoginAsk = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbRegistration
			// 
			this->lbRegistration->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbRegistration->BackColor = System::Drawing::Color::Transparent;
			this->lbRegistration->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRegistration->ForeColor = System::Drawing::Color::White;
			this->lbRegistration->Location = System::Drawing::Point(348, 44);
			this->lbRegistration->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbRegistration->Name = L"lbRegistration";
			this->lbRegistration->Size = System::Drawing::Size(534, 60);
			this->lbRegistration->TabIndex = 0;
			this->lbRegistration->Text = L"REGISTRATION";
			this->lbRegistration->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbName
			// 
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbName->Location = System::Drawing::Point(283, 150);
			this->lbName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(107, 43);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Name ";
			this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbName
			// 
			this->tbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbName->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tbName->Location = System::Drawing::Point(421, 150);
			this->tbName->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(494, 35);
			this->tbName->TabIndex = 2;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPassword->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tbPassword->Location = System::Drawing::Point(421, 309);
			this->tbPassword->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(494, 35);
			this->tbPassword->TabIndex = 4;
			// 
			// lbPassword
			// 
			this->lbPassword->BackColor = System::Drawing::Color::Transparent;
			this->lbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPassword->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbPassword->Location = System::Drawing::Point(283, 306);
			this->lbPassword->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(144, 43);
			this->lbPassword->TabIndex = 3;
			this->lbPassword->Text = L"Password";
			this->lbPassword->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbUsername->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tbUsername->Location = System::Drawing::Point(421, 229);
			this->tbUsername->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(494, 35);
			this->tbUsername->TabIndex = 6;
			// 
			// lbUsername
			// 
			this->lbUsername->BackColor = System::Drawing::Color::Transparent;
			this->lbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUsername->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbUsername->Location = System::Drawing::Point(283, 226);
			this->lbUsername->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(155, 43);
			this->lbUsername->TabIndex = 5;
			this->lbUsername->Text = L"Username ";
			this->lbUsername->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbConfirmPswd
			// 
			this->tbConfirmPswd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbConfirmPswd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbConfirmPswd->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPswd->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tbConfirmPswd->Location = System::Drawing::Point(421, 384);
			this->tbConfirmPswd->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->tbConfirmPswd->Name = L"tbConfirmPswd";
			this->tbConfirmPswd->Size = System::Drawing::Size(494, 35);
			this->tbConfirmPswd->TabIndex = 8;
			// 
			// lbconfirmPswd
			// 
			this->lbconfirmPswd->BackColor = System::Drawing::Color::Transparent;
			this->lbconfirmPswd->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbconfirmPswd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbconfirmPswd->Location = System::Drawing::Point(283, 379);
			this->lbconfirmPswd->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbconfirmPswd->Name = L"lbconfirmPswd";
			this->lbconfirmPswd->Size = System::Drawing::Size(254, 46);
			this->lbconfirmPswd->TabIndex = 7;
			this->lbconfirmPswd->Text = L"Confirm \r\nPassword";
			this->lbconfirmPswd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbconfirmPswd->Click += gcnew System::EventHandler(this, &registrationForm::lbconfirmPswd_Click);
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::Navy;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSubmit->Location = System::Drawing::Point(643, 606);
			this->btnSubmit->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(139, 50);
			this->btnSubmit->TabIndex = 9;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &registrationForm::btnSubmit_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::IndianRed;
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCancel->Location = System::Drawing::Point(807, 606);
			this->btnCancel->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(139, 50);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &registrationForm::btnCancel_Click);
			// 
			// lbLogin
			// 
			this->lbLogin->AutoSize = true;
			this->lbLogin->BackColor = System::Drawing::Color::Transparent;
			this->lbLogin->ForeColor = System::Drawing::Color::Transparent;
			this->lbLogin->LinkColor = System::Drawing::Color::Aquamarine;
			this->lbLogin->Location = System::Drawing::Point(570, 512);
			this->lbLogin->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbLogin->Name = L"lbLogin";
			this->lbLogin->Size = System::Drawing::Size(65, 26);
			this->lbLogin->TabIndex = 11;
			this->lbLogin->TabStop = true;
			this->lbLogin->Text = L"Login";
			this->lbLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &registrationForm::lbLogin_LinkClicked);
			// 
			// lbLoginAsk
			// 
			this->lbLoginAsk->BackColor = System::Drawing::Color::Transparent;
			this->lbLoginAsk->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLoginAsk->ForeColor = System::Drawing::Color::LightSteelBlue;
			this->lbLoginAsk->Location = System::Drawing::Point(416, 456);
			this->lbLoginAsk->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbLoginAsk->Name = L"lbLoginAsk";
			this->lbLoginAsk->Size = System::Drawing::Size(357, 56);
			this->lbLoginAsk->TabIndex = 12;
			this->lbLoginAsk->Text = L"Do you have an account\?";
			this->lbLoginAsk->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// registrationForm
			// 
			this->AcceptButton = this->btnSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(1222, 720);
			this->Controls->Add(this->lbLoginAsk);
			this->Controls->Add(this->lbLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->tbConfirmPswd);
			this->Controls->Add(this->lbconfirmPswd);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->lbUsername);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lbPassword);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbRegistration);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"registrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"registrationForm";
			this->Load += gcnew System::EventHandler(this, &registrationForm::registrationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

public: bool switchToLogin = false;
public: User1^ user = nullptr;

private: System::Void lbLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ username = tbUsername->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPswd->Text;

		if (name->Length == 0 || username->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			MessageBox::Show("Please Enter Details for all Fields","Attentioin",MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password is not matched","password Error",MessageBoxButtons::OK);
			return;
		}

		try {

			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO User_Detail" + "(Name, Username, Password)" + "VALUES(@n, @Un, @Pd);";

			SqlCommand command(sqlQuery,% sqlconn);
			command.Parameters->AddWithValue("@n",name);
			command.Parameters->AddWithValue("@Un",username);
			command.Parameters->AddWithValue("@Pd",password);
			
			command.ExecuteNonQuery();
			user = gcnew User1;

			user->name = name;
			user->username = username;
			user->password = password;

			this-> Close();

		}
		catch(Exception^ ex){
			MessageBox::Show("Error: " + ex->Message,"Register Failure",MessageBoxButtons::OK);
		}
}
private: System::Void registrationForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbconfirmPswd_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
