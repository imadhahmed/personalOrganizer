#pragma once
#include "User.h"
#include "Income.h"
#include "Expences.h"
#include "setBudget.h"
#include "Showing Report.h"

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
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Deansgate Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcome->ForeColor = System::Drawing::Color::Transparent;
			this->lbWelcome->Location = System::Drawing::Point(-4, 22);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(1106, 55);
			this->lbWelcome->TabIndex = 1;
			this->lbWelcome->Text = L"Dashboard";
			this->lbWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(772, 485);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 43);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(519, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 107);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Acadamic shedule";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnBudget
			// 
			this->btnBudget->Location = System::Drawing::Point(288, 320);
			this->btnBudget->Name = L"btnBudget";
			this->btnBudget->Size = System::Drawing::Size(191, 107);
			this->btnBudget->TabIndex = 10;
			this->btnBudget->Text = L"Set Budget";
			this->btnBudget->UseVisualStyleBackColor = true;
			this->btnBudget->Click += gcnew System::EventHandler(this, &Dashboard::btnBudget_Click);
			// 
			// btnReport
			// 
			this->btnReport->Location = System::Drawing::Point(673, 167);
			this->btnReport->Name = L"btnReport";
			this->btnReport->Size = System::Drawing::Size(208, 112);
			this->btnReport->TabIndex = 11;
			this->btnReport->Text = L"Show Finacial Report";
			this->btnReport->UseVisualStyleBackColor = true;
			this->btnReport->Click += gcnew System::EventHandler(this, &Dashboard::btnReport_Click);
			// 
			// btnExpance
			// 
			this->btnExpance->Location = System::Drawing::Point(443, 167);
			this->btnExpance->Name = L"btnExpance";
			this->btnExpance->Size = System::Drawing::Size(191, 112);
			this->btnExpance->TabIndex = 12;
			this->btnExpance->Text = L"Add Expance";
			this->btnExpance->UseVisualStyleBackColor = true;
			this->btnExpance->Click += gcnew System::EventHandler(this, &Dashboard::btnExpance_Click);
			// 
			// btnIncome
			// 
			this->btnIncome->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnIncome->FlatAppearance->BorderSize = 5;
			this->btnIncome->Location = System::Drawing::Point(212, 167);
			this->btnIncome->Name = L"btnIncome";
			this->btnIncome->Size = System::Drawing::Size(191, 112);
			this->btnIncome->TabIndex = 13;
			this->btnIncome->Text = L"Add Income";
			this->btnIncome->UseVisualStyleBackColor = true;
			this->btnIncome->Click += gcnew System::EventHandler(this, &Dashboard::btnIncome_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1130, 551);
			this->Controls->Add(this->btnIncome);
			this->Controls->Add(this->btnExpance);
			this->Controls->Add(this->btnReport);
			this->Controls->Add(this->btnBudget);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbWelcome);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Dashboard";
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
};
}
