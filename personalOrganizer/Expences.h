#pragma once
#include "setBudget.h"

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Expences
	/// </summary>
	public ref class Expences : public System::Windows::Forms::Form
	{
	public:
		Expences(void)
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
		~Expences()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Head_Expences;
	private: System::Windows::Forms::Label^ lbDate;



	private: System::Windows::Forms::Label^ lbcategory;
	private: System::Windows::Forms::TextBox^ tbAmount;


	private: System::Windows::Forms::Label^ lbAmount;
	private: System::Windows::Forms::TextBox^ tbDescription;


	private: System::Windows::Forms::Label^ lbDescription;
	private: System::Windows::Forms::Button^ btSubmit;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::ListBox^ listBoxCategory;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Expences::typeid));
			this->Head_Expences = (gcnew System::Windows::Forms::Label());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->lbcategory = (gcnew System::Windows::Forms::Label());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->tbDescription = (gcnew System::Windows::Forms::TextBox());
			this->lbDescription = (gcnew System::Windows::Forms::Label());
			this->btSubmit = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->listBoxCategory = (gcnew System::Windows::Forms::ListBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// Head_Expences
			// 
			this->Head_Expences->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Head_Expences->BackColor = System::Drawing::Color::Transparent;
			this->Head_Expences->Font = (gcnew System::Drawing::Font(L"Deansgate Condensed", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Head_Expences->ForeColor = System::Drawing::Color::Transparent;
			this->Head_Expences->Location = System::Drawing::Point(12, 9);
			this->Head_Expences->Name = L"Head_Expences";
			this->Head_Expences->Size = System::Drawing::Size(901, 51);
			this->Head_Expences->TabIndex = 0;
			this->Head_Expences->Text = L"Expences";
			this->Head_Expences->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->BackColor = System::Drawing::Color::Transparent;
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDate->ForeColor = System::Drawing::Color::Transparent;
			this->lbDate->Location = System::Drawing::Point(28, 93);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(62, 30);
			this->lbDate->TabIndex = 1;
			this->lbDate->Text = L"Date";
			// 
			// lbcategory
			// 
			this->lbcategory->AutoSize = true;
			this->lbcategory->BackColor = System::Drawing::Color::Transparent;
			this->lbcategory->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcategory->ForeColor = System::Drawing::Color::Transparent;
			this->lbcategory->Location = System::Drawing::Point(28, 243);
			this->lbcategory->Name = L"lbcategory";
			this->lbcategory->Size = System::Drawing::Size(110, 30);
			this->lbcategory->TabIndex = 3;
			this->lbcategory->Text = L"Category";
			// 
			// tbAmount
			// 
			this->tbAmount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbAmount->Location = System::Drawing::Point(203, 319);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(710, 36);
			this->tbAmount->TabIndex = 6;
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->BackColor = System::Drawing::Color::Transparent;
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::Color::Transparent;
			this->lbAmount->Location = System::Drawing::Point(28, 319);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(96, 30);
			this->lbAmount->TabIndex = 5;
			this->lbAmount->Text = L"Amount";
			// 
			// tbDescription
			// 
			this->tbDescription->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbDescription->Location = System::Drawing::Point(203, 166);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(710, 36);
			this->tbDescription->TabIndex = 8;
			// 
			// lbDescription
			// 
			this->lbDescription->AutoSize = true;
			this->lbDescription->BackColor = System::Drawing::Color::Transparent;
			this->lbDescription->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDescription->ForeColor = System::Drawing::Color::Transparent;
			this->lbDescription->Location = System::Drawing::Point(28, 166);
			this->lbDescription->Name = L"lbDescription";
			this->lbDescription->Size = System::Drawing::Size(133, 30);
			this->lbDescription->TabIndex = 7;
			this->lbDescription->Text = L"Description";
			// 
			// btSubmit
			// 
			this->btSubmit->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSubmit->Location = System::Drawing::Point(665, 406);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(121, 46);
			this->btSubmit->TabIndex = 9;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = true;
			this->btSubmit->Click += gcnew System::EventHandler(this, &Expences::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->Location = System::Drawing::Point(790, 406);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(121, 46);
			this->btClose->TabIndex = 10;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = true;
			this->btClose->Click += gcnew System::EventHandler(this, &Expences::button1_Click);
			// 
			// listBoxCategory
			// 
			this->listBoxCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBoxCategory->FormattingEnabled = true;
			this->listBoxCategory->ItemHeight = 30;
			this->listBoxCategory->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Food", L"Entertainment", L"Travelling",
					L"Clothing", L"Educatiional Fee", L"University Fee"
			});
			this->listBoxCategory->Location = System::Drawing::Point(203, 245);
			this->listBoxCategory->Name = L"listBoxCategory";
			this->listBoxCategory->Size = System::Drawing::Size(710, 34);
			this->listBoxCategory->TabIndex = 11;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(203, 93);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(710, 36);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// Expences
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(925, 512);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->listBoxCategory);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btSubmit);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->lbDescription);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->lbAmount);
			this->Controls->Add(this->lbcategory);
			this->Controls->Add(this->lbDate);
			this->Controls->Add(this->Head_Expences);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"Expences";
			this->Text = L"Expences";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ date = dateTimePicker1->Text;
	String^ desc = tbDescription->Text;
	String^ category = listBoxCategory->Text;
	String^ amount = tbAmount->Text;

	if (date->Length == 0 || desc->Length == 0 || amount->Length == 0)
	{
		MessageBox::Show("Please fill all credintials..!","Attention",MessageBoxButtons::OK);
	}
	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlQuery = "INSERT INTO Expences" + "(Date, Description, Category, Amount)" + "VALUES(@dt, @dec, @ctgr, @amt);";
		SqlCommand command(sqlQuery,%sqlconn);

		command.Parameters->AddWithValue("@dt",date);
		command.Parameters->AddWithValue("@dec",desc);
		command.Parameters->AddWithValue("@ctgr",category);
		command.Parameters->AddWithValue("@amt",amount);

		command.ExecuteNonQuery();

		MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK);
		this->Close();
		
	}

	catch (Exception^ exe)
	{
		MessageBox::Show("Error: " + exe->Message,"Error",MessageBoxButtons::OK);
	}

	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlconn(connString); 
	sqlconn.Open(); 
	String^ sqlSumQuery = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Food';"; 
	SqlCommand sumCommand(sqlSumQuery, % sqlconn); 
	Object^ result = sumCommand.ExecuteScalar(); 
	double foodSum = result != nullptr ? Convert::ToDouble(result) : 0.0; 
	//MessageBox::Show("Total Food Amount: " + foodSum.ToString(), "Food Amount", MessageBoxButtons::OK);


	String^ connString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlconn1(connString1); 
	sqlconn1.Open(); 
	String^ sqlSumQuery1 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Entertainment';";  
	SqlCommand sumCommand1(sqlSumQuery1, % sqlconn1);
	Object^ result1 = sumCommand1.ExecuteScalar(); 
	double entertainmentSum = result1 != nullptr ? Convert::ToDouble(result1) : 0.0;
	//MessageBox::Show("Total Entertainment Amount: " + entertainmentSum.ToString(), "Entertainment Amount", MessageBoxButtons::OK);

	String^ connString2 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlconn2(connString2);
	sqlconn2.Open();
	String^ sqlSumQuery2 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Travelling';";
	SqlCommand sumCommand2(sqlSumQuery2, % sqlconn2);
	Object^ result2 = sumCommand2.ExecuteScalar();
	double travelingSum = result2 != nullptr ? Convert::ToDouble(result2) : 0.0; 
	//MessageBox::Show("Total Traveling Amount: " + travelingSum.ToString(), "Traveling Amount", MessageBoxButtons::OK); 

	String^ connString3 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlconn3(connString3);
	sqlconn3.Open(); 
	String^ sqlSumQuery3 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Clothing';"; 
	SqlCommand sumCommand3(sqlSumQuery3, % sqlconn3); 
	Object^ result3 = sumCommand3.ExecuteScalar(); 
	double clothingSum = result3 != nullptr ? Convert::ToDouble(result3) : 0.0;  
	//MessageBox::Show("Total Clothing Amount: " + clothingSum.ToString(), "Clothing Amount", MessageBoxButtons::OK); 
	

	String^ connString4 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlconn4(connString4); 
	sqlconn4.Open(); 
	String^ sqlSumQuery4 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Educational Fee';"; 
	SqlCommand sumCommand4(sqlSumQuery4, % sqlconn4); 
	Object^ result4 = sumCommand4.ExecuteScalar(); 
	double educationSum = result4 != nullptr ? Convert::ToDouble(result4) : 0.0; 
	//MessageBox::Show("Total Education Fee Amount: " + educationSum.ToString(), "Educational Fee Amount", MessageBoxButtons::OK);  


	String^ connString5 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlconn5(connString5); 
	sqlconn5.Open();
	String^ sqlSumQuery5 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'University Fee';";
	SqlCommand sumCommand5(sqlSumQuery5, % sqlconn5); 
	Object^ result5 = sumCommand5.ExecuteScalar(); 
	double universitySum = result5 != nullptr ? Convert::ToDouble(result5) : 0.0; 
	//MessageBox::Show("Total University Fee Amount: " + universitySum.ToString(), "University Fee Amount", MessageBoxButtons::OK);


	//BUDGET ASSIGNMENTS

	String^ conString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlcon1(conString1);
	sqlcon1.Open();
	String^ sqlBgdQuery1 = "SELECT Amount FROM Budget WHERE Category = 'Food';"; 
	SqlCommand bgdCommand1(sqlBgdQuery1, % sqlcon1); 
	Object^ amount1 = bgdCommand1.ExecuteScalar(); 
	double foodBgd = amount1 != nullptr ? Convert::ToDouble(amount1) : 0.0; 
	//MessageBox::Show("Total University Fee Budget Amount: " + universityBgd.ToString(), "University Fee Budget Amount", MessageBoxButtons::OK);

	if (foodSum >= foodBgd)
	{
		MessageBox::Show("Your Budget for Food is Exceeded !! ","Budget Alert",MessageBoxButtons::OK);
	}

	String^ conString2 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlcon2(conString2); 
	sqlcon2.Open();
	String^ sqlBgdQuery2 = "SELECT Amount FROM Budget WHERE Category = 'Entertainment';"; 
	SqlCommand bgdCommand2(sqlBgdQuery2, % sqlcon2);  
	Object^ amount2 = bgdCommand2.ExecuteScalar(); 
	double entertainmentBgd = amount2 != nullptr ? Convert::ToDouble(amount2) : 0.0; 

	if (entertainmentSum >= entertainmentBgd)
	{
		MessageBox::Show("Your Budget for Entertainment is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}


	String^ conString3 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlcon3(conString3); 
	sqlcon3.Open();
	String^ sqlBgdQuery3 = "SELECT Amount FROM Budget WHERE Category = 'Travelling';"; 
	SqlCommand bgdCommand3(sqlBgdQuery3, % sqlcon3); 
	Object^ amount3 = bgdCommand3.ExecuteScalar();
	double travelingBgd = amount3 != nullptr ? Convert::ToDouble(amount3) : 0.0;

	if (travelingSum >= travelingBgd)  
	{
		MessageBox::Show("Your Budget for traveling is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}

	String^ conString4 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlcon4(conString4); 
	sqlcon4.Open(); 
	String^ sqlBgdQuery4 = "SELECT Amount FROM Budget WHERE Category = 'Clothing';"; 
	SqlCommand bgdCommand4(sqlBgdQuery4, % sqlcon4); 
	Object^ amount4 = bgdCommand4.ExecuteScalar(); 
	double clothingBgd = amount4 != nullptr ? Convert::ToDouble(amount4) : 0.0; 

	if (clothingSum >= clothingBgd)
	{
		MessageBox::Show("Your Budget for Clothing is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}

	String^ conString5 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlcon5(conString5);
	sqlcon5.Open();
	String^ sqlBgdQuery5 = "SELECT Amount FROM Budget WHERE Category = 'Education';";
	SqlCommand bgdCommand5(sqlBgdQuery5, % sqlcon5);
	Object^ amount5 = bgdCommand5.ExecuteScalar();
	double educationBgd = amount5 != nullptr ? Convert::ToDouble(amount5) : 0.0;

	if (educationSum >= educationBgd)
	{
		MessageBox::Show("Your Budget for Education Fee is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}


	String^ conString6 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlcon6(conString6);
	sqlcon6.Open();
	String^ sqlBgdQuery6 = "SELECT Amount FROM Budget WHERE Category = 'University';";
	SqlCommand bgdCommand6(sqlBgdQuery6, % sqlcon6);
	Object^ amount6 = bgdCommand6.ExecuteScalar();
	double universitybdg = amount6 != nullptr ? Convert::ToDouble(amount6) : 0.0;

	if (universitySum>= universitybdg)
	{
		MessageBox::Show("Your Budget for University Fee is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}




}
};
}