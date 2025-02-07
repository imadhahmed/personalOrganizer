#pragma once
#include "User.h"
#include "Income.h"
#include "Expences.h"
#include "setBudget.h"
#include "Showing Report.h"
#include "Accademic schedule.h"
namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(User1^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			//lbUserInfo->Text = "ID = " + user->id + ", Name = " + user->name + ", Username = " + user->username + ", Password = " + user->password;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^ lbWelcome;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnBudget;
	private: System::Windows::Forms::Button^ btnReport;


	private: System::Windows::Forms::Button^ btnExpance;

	private: System::Windows::Forms::Button^ btnIncome;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnBudget = (gcnew System::Windows::Forms::Button());
			this->btnReport = (gcnew System::Windows::Forms::Button());
			this->btnExpance = (gcnew System::Windows::Forms::Button());
			this->btnIncome = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbWelcome
			// 
			this->lbWelcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbWelcome->BackColor = System::Drawing::Color::Transparent;
			this->lbWelcome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcome->ForeColor = System::Drawing::Color::White;
			this->lbWelcome->Location = System::Drawing::Point(185, 69);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbWelcome->Size = System::Drawing::Size(710, 64);
			this->lbWelcome->TabIndex = 1;
			this->lbWelcome->Text = L"DASHBOARD";
			this->lbWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbWelcome->Click += gcnew System::EventHandler(this, &Dashboard::lbWelcome_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(565, 522);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(330, 116);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(565, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(330, 116);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Acadamic schedule";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// btnBudget
			// 
			this->btnBudget->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnBudget->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBudget->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBudget->Location = System::Drawing::Point(185, 209);
			this->btnBudget->Name = L"btnBudget";
			this->btnBudget->Size = System::Drawing::Size(328, 116);
			this->btnBudget->TabIndex = 10;
			this->btnBudget->Text = L"Set Budget";
			this->btnBudget->UseVisualStyleBackColor = false;
			this->btnBudget->Click += gcnew System::EventHandler(this, &Dashboard::btnBudget_Click);
			// 
			// btnReport
			// 
			this->btnReport->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnReport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReport->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnReport->Location = System::Drawing::Point(565, 365);
			this->btnReport->Name = L"btnReport";
			this->btnReport->Size = System::Drawing::Size(330, 116);
			this->btnReport->TabIndex = 11;
			this->btnReport->Text = L"Show Finacial Report";
			this->btnReport->UseVisualStyleBackColor = false;
			this->btnReport->Click += gcnew System::EventHandler(this, &Dashboard::btnReport_Click);
			// 
			// btnExpance
			// 
			this->btnExpance->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnExpance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExpance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnExpance->Location = System::Drawing::Point(185, 522);
			this->btnExpance->Name = L"btnExpance";
			this->btnExpance->Size = System::Drawing::Size(328, 116);
			this->btnExpance->TabIndex = 12;
			this->btnExpance->Text = L"Add Expence";
			this->btnExpance->UseVisualStyleBackColor = false;
			this->btnExpance->Click += gcnew System::EventHandler(this, &Dashboard::btnExpance_Click);
			// 
			// btnIncome
			// 
			this->btnIncome->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnIncome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIncome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnIncome->Location = System::Drawing::Point(185, 365);
			this->btnIncome->Name = L"btnIncome";
			this->btnIncome->Size = System::Drawing::Size(328, 116);
			this->btnIncome->TabIndex = 13;
			this->btnIncome->Text = L"Add Income";
			this->btnIncome->UseVisualStyleBackColor = false;
			this->btnIncome->Click += gcnew System::EventHandler(this, &Dashboard::btnIncome_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->button1;
			this->ClientSize = System::Drawing::Size(1272, 664);
			this->Controls->Add(this->btnIncome);
			this->Controls->Add(this->btnExpance);
			this->Controls->Add(this->btnReport);
			this->Controls->Add(this->btnBudget);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbWelcome);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnIncome_Click(System::Object^ sender, System::EventArgs^ e) {
	personalOrganizer::Income income;
	income.ShowDialog();
	
}
private: System::Void btnExpance_Click(System::Object^ sender, System::EventArgs^ e) {
	personalOrganizer::Expences exp;
	exp.ShowDialog();
}
private: System::Void btnBudget_Click(System::Object^ sender, System::EventArgs^ e) {
	personalOrganizer::setBudget bgd;
	bgd.ShowDialog();
}
private: System::Void btnReport_Click(System::Object^ sender, System::EventArgs^ e) {
	personalOrganizer::ShowingReport fReport;
	fReport.ShowDialog();
}
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	personalOrganizer::Accademicschedule AcSchedule;  
	AcSchedule.ShowDialog();  
}
private: System::Void lbWelcome_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
