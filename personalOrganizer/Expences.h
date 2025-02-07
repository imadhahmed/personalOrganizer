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
			this->Head_Expences->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Head_Expences->ForeColor = System::Drawing::Color::White;
			this->Head_Expences->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Head_Expences->Location = System::Drawing::Point(227, 50);
			this->Head_Expences->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Head_Expences->Name = L"Head_Expences";
			this->Head_Expences->Size = System::Drawing::Size(459, 90);
			this->Head_Expences->TabIndex = 0;
			this->Head_Expences->Text = L"Add Your Expence";
			this->Head_Expences->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Head_Expences->Click += gcnew System::EventHandler(this, &Expences::Head_Expences_Click);
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->BackColor = System::Drawing::Color::Transparent;
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbDate->Location = System::Drawing::Point(28, 234);
			this->lbDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(57, 26);
			this->lbDate->TabIndex = 1;
			this->lbDate->Text = L"Date";
			this->lbDate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbcategory
			// 
			this->lbcategory->AutoSize = true;
			this->lbcategory->BackColor = System::Drawing::Color::Transparent;
			this->lbcategory->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcategory->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbcategory->Location = System::Drawing::Point(28, 384);
			this->lbcategory->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbcategory->Name = L"lbcategory";
			this->lbcategory->Size = System::Drawing::Size(99, 26);
			this->lbcategory->TabIndex = 3;
			this->lbcategory->Text = L"Category";
			this->lbcategory->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbAmount
			// 
			this->tbAmount->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAmount->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tbAmount->Location = System::Drawing::Point(234, 455);
			this->tbAmount->Margin = System::Windows::Forms::Padding(4);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(851, 35);
			this->tbAmount->TabIndex = 6;
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->BackColor = System::Drawing::Color::Transparent;
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbAmount->Location = System::Drawing::Point(28, 460);
			this->lbAmount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(89, 26);
			this->lbAmount->TabIndex = 5;
			this->lbAmount->Text = L"Amount";
			this->lbAmount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbDescription
			// 
			this->tbDescription->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbDescription->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDescription->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tbDescription->Location = System::Drawing::Point(234, 305);
			this->tbDescription->Margin = System::Windows::Forms::Padding(4);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(851, 35);
			this->tbDescription->TabIndex = 8;
			// 
			// lbDescription
			// 
			this->lbDescription->AutoSize = true;
			this->lbDescription->BackColor = System::Drawing::Color::Transparent;
			this->lbDescription->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDescription->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbDescription->Location = System::Drawing::Point(28, 307);
			this->lbDescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDescription->Name = L"lbDescription";
			this->lbDescription->Size = System::Drawing::Size(122, 26);
			this->lbDescription->TabIndex = 7;
			this->lbDescription->Text = L"Description";
			this->lbDescription->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btSubmit
			// 
			this->btSubmit->BackColor = System::Drawing::SystemColors::Highlight;
			this->btSubmit->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSubmit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btSubmit->Location = System::Drawing::Point(784, 544);
			this->btSubmit->Margin = System::Windows::Forms::Padding(4);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(160, 47);
			this->btSubmit->TabIndex = 9;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = false;
			this->btSubmit->Click += gcnew System::EventHandler(this, &Expences::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btClose->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btClose->Location = System::Drawing::Point(963, 545);
			this->btClose->Margin = System::Windows::Forms::Padding(4);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(122, 47);
			this->btClose->TabIndex = 10;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = false;
			this->btClose->Click += gcnew System::EventHandler(this, &Expences::button1_Click);
			// 
			// listBoxCategory
			// 
			this->listBoxCategory->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->listBoxCategory->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxCategory->ForeColor = System::Drawing::SystemColors::ControlText;
			this->listBoxCategory->FormattingEnabled = true;
			this->listBoxCategory->ItemHeight = 32;
			this->listBoxCategory->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Food", L"Entertainment", L"Travelling",
					L"Clothing", L"Educational Fee", L"University Fee"
			});
			this->listBoxCategory->Location = System::Drawing::Point(234, 381);
			this->listBoxCategory->Margin = System::Windows::Forms::Padding(4);
			this->listBoxCategory->Name = L"listBoxCategory";
			this->listBoxCategory->Size = System::Drawing::Size(851, 36);
			this->listBoxCategory->TabIndex = 11;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(234, 234);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(851, 35);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// Expences
			// 
			this->AcceptButton = this->btSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btClose;
			this->ClientSize = System::Drawing::Size(1271, 664);
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
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Expences";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Expences";
			this->Load += gcnew System::EventHandler(this, &Expences::Expences_Load);
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

	if (date->Length == 0 || desc->Length == 0 || amount->Length == 0 || category->Length == 0)
	{
		MessageBox::Show("Please fill all credintials..!","Attention",MessageBoxButtons::OK);
	}
	else {
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO Expences" + "(Date, Description, Category, Amount)" + "VALUES(@dt, @dec, @ctgr, @amt);";
			SqlCommand command(sqlQuery, % sqlconn);

			command.Parameters->AddWithValue("@dt", date);
			command.Parameters->AddWithValue("@dec", desc);
			command.Parameters->AddWithValue("@ctgr", category);
			command.Parameters->AddWithValue("@amt", amount);

			command.ExecuteNonQuery();

			MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK);
			this->Close();

		}

		catch (Exception^ exe)
		{
			MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK);
		}
	}

	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlconn(connString); 
	sqlconn.Open(); 
	String^ sqlSumQuery = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Food';"; 
	SqlCommand sumCommand(sqlSumQuery, % sqlconn); 
	Object^ result = sumCommand.ExecuteScalar(); 
	double foodSum = (result == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result);
	

	String^ connString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlconn1(connString1); 
	sqlconn1.Open(); 
	String^ sqlSumQuery1 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Entertainment';";  
	SqlCommand sumCommand1(sqlSumQuery1, % sqlconn1);
	Object^ result1 = sumCommand1.ExecuteScalar(); 
	double entertainmentSum = (result1 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result1);
	

	String^ connString2 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlconn2(connString2);
	sqlconn2.Open();
	String^ sqlSumQuery2 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Travelling';";
	SqlCommand sumCommand2(sqlSumQuery2, % sqlconn2);
	Object^ result2 = sumCommand2.ExecuteScalar();
	double travelingSum = (result2 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result2);


	String^ connString3 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlconn3(connString3);
	sqlconn3.Open(); 
	String^ sqlSumQuery3 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Clothing';"; 
	SqlCommand sumCommand3(sqlSumQuery3, % sqlconn3); 
	Object^ result3 = sumCommand3.ExecuteScalar(); 
	double clothingSum = (result3 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result3);
	

	String^ connString4 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlconn4(connString4); 
	sqlconn4.Open(); 
	String^ sqlSumQuery4 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Educational Fee';"; 
	SqlCommand sumCommand4(sqlSumQuery4, % sqlconn4); 
	Object^ result4 = sumCommand4.ExecuteScalar(); 
	double educationSum = (result4 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result4);
	


	String^ connString5 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlconn5(connString5); 
	sqlconn5.Open();
	String^ sqlSumQuery5 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'University Fee';";
	SqlCommand sumCommand5(sqlSumQuery5, % sqlconn5); 
	Object^ result5 = sumCommand5.ExecuteScalar(); 
	double universitySum = (result5 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result5);

	//BUDGET ASSIGNMENTS

	String^ conString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlcon1(conString1);
	sqlcon1.Open();
	String^ sqlBgdQuery1 = "SELECT Amount FROM Budget WHERE Category = 'Food';"; 
	SqlCommand bgdCommand1(sqlBgdQuery1, % sqlcon1); 
	Object^ amount1 = bgdCommand1.ExecuteScalar(); 
	double foodBgd = (amount1 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount1);
	

	if (foodSum > foodBgd)
	{
		MessageBox::Show("Your Budget for Food is Exceeded !! ","Budget Alert",MessageBoxButtons::OK);
	}

	String^ conString2 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlcon2(conString2); 
	sqlcon2.Open();
	String^ sqlBgdQuery2 = "SELECT Amount FROM Budget WHERE Category = 'Entertainment';"; 
	SqlCommand bgdCommand2(sqlBgdQuery2, % sqlcon2);  
	Object^ amount2 = bgdCommand2.ExecuteScalar(); 
	double entertainmentBgd = (amount2 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount2);

	if (entertainmentSum > entertainmentBgd)
	{
		MessageBox::Show("Your Budget for Entertainment is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}


	String^ conString3 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlcon3(conString3); 
	sqlcon3.Open();
	String^ sqlBgdQuery3 = "SELECT Amount FROM Budget WHERE Category = 'Travelling';"; 
	SqlCommand bgdCommand3(sqlBgdQuery3, % sqlcon3); 
	Object^ amount3 = bgdCommand3.ExecuteScalar();
	double travelingBgd = (amount3 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount3);
	if (travelingSum > travelingBgd)  
	{
		MessageBox::Show("Your Budget for traveling is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}

	String^ conString4 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlcon4(conString4); 
	sqlcon4.Open(); 
	String^ sqlBgdQuery4 = "SELECT Amount FROM Budget WHERE Category = 'Clothing';"; 
	SqlCommand bgdCommand4(sqlBgdQuery4, % sqlcon4); 
	Object^ amount4 = bgdCommand4.ExecuteScalar(); 
	double clothingBgd = (amount4 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount4);

	if (clothingSum > clothingBgd)
	{
		MessageBox::Show("Your Budget for Clothing is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}

	String^ conString5 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlcon5(conString5);
	sqlcon5.Open();
	String^ sqlBgdQuery5 = "SELECT Amount FROM Budget WHERE Category = 'Educational Fee';";
	SqlCommand bgdCommand5(sqlBgdQuery5, % sqlcon5);
	Object^ amount5 = bgdCommand5.ExecuteScalar();
	double educationBgd = (amount5 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount5);

	if (educationSum > educationBgd)
	{
		MessageBox::Show("Your Budget for Education Fee is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);
	}


	String^ conString6 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlcon6(conString6);
	sqlcon6.Open();
	String^ sqlBgdQuery6 = "SELECT Amount FROM Budget WHERE Category = 'University Fee';";
	SqlCommand bgdCommand6(sqlBgdQuery6, % sqlcon6);
	Object^ amount6 = bgdCommand6.ExecuteScalar();
	double universitybdg = (amount6 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount6);

	if (universitySum > universitybdg)
	{
		MessageBox::Show("Your Budget for University Fee is Exceeded !! ", "Budget Alert", MessageBoxButtons::OK);

	}

	//Updating Total Expence of every category to graphTable.

	try {
		String^ ConnString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn1(ConnString1);
		SqlConn1.Open();

		String^ SqlQuery1 = "UPDATE graph SET Expences=@Food WHERE Id=1;";

		SqlCommand command(SqlQuery1,%SqlConn1);

		command.Parameters->AddWithValue("@Food", foodSum);
		command.ExecuteNonQuery();

	}
	catch(Exception^ ex){
		MessageBox::Show("Error" +ex->Message),"Update failed..",MessageBoxButtons::OK;
	
	}

	try {
		String^ ConnString2 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
		SqlConnection SqlConn2(ConnString2); 
		SqlConn2.Open(); 

		String^ SqlQuery2 = "UPDATE graph SET Expences=@ent WHERE Id=2;"; 

		SqlCommand command(SqlQuery2, % SqlConn2); 

		command.Parameters->AddWithValue("@ent", entertainmentSum); 
		command.ExecuteNonQuery(); 

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK; 

	}

	try {
		String^ ConnString3 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn3(ConnString3);
		SqlConn3.Open();

		String^ SqlQuery3 = "UPDATE graph SET Expences=@trv WHERE Id=3;";

		SqlCommand command(SqlQuery3, % SqlConn3); 

		command.Parameters->AddWithValue("@trv", travelingSum);
		command.ExecuteNonQuery(); 

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}


	try {
		String^ ConnString4 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn4(ConnString4);
		SqlConn4.Open();

		String^ SqlQuery4 = "UPDATE graph SET Expences=@clth WHERE Id=4;";

		SqlCommand command(SqlQuery4, % SqlConn4);

		command.Parameters->AddWithValue("@clth", clothingSum);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}


	try {
		String^ ConnString5 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn5(ConnString5);
		SqlConn5.Open();

		String^ SqlQuery5 = "UPDATE graph SET Expences=@edu WHERE Id=5;";

		SqlCommand command(SqlQuery5, % SqlConn5);

		command.Parameters->AddWithValue("@edu", educationSum);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}




	try {
		String^ ConnString6 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn6(ConnString6);
		SqlConn6.Open();

		String^ SqlQuery6 = "UPDATE graph SET Expences=@uni WHERE Id=6;";

		SqlCommand command(SqlQuery6, % SqlConn6);

		command.Parameters->AddWithValue("@uni", universitySum);
		command.ExecuteNonQuery();
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}


	//Updating Monthly Report Table by Calculating total  Expences.

	String^ connectionString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
	SqlConnection sqlconnection1(connectionString1); 
	sqlconnection1.Open(); 
	String^ sqlTotalQuery1 = "SELECT SUM(Expences) FROM graph;"; 
	SqlCommand TotalCommand1(sqlTotalQuery1, % sqlconnection1); 
	Object^ Tamount1 = TotalCommand1.ExecuteScalar(); 
	double totalExpence = (Tamount1 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(Tamount1);

	try {
		String^ ConnString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;"; 
		SqlConnection SqlConn(ConnString); 
		SqlConn.Open(); 

		String^ SqlQuery = "UPDATE  Reports SET [Total Expence]=@tExpence;"; 

		SqlCommand command(SqlQuery, % SqlConn);  

		command.Parameters->AddWithValue("@tExpence", totalExpence); 
		command.ExecuteNonQuery(); 

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}

	//Updating savings to Monthly Report Table

	

	String^ ConnectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlConnection(ConnectionString);
	sqlConnection.Open(); 
	String^ sqlSavingsQuery = "SELECT [Total Income] - [Total Expence] FROM Reports;";
	SqlCommand savingsCommand(sqlSavingsQuery, % sqlConnection);   
	Object^ Samount = savingsCommand.ExecuteScalar(); 
	double Savings = (Samount == System::DBNull::Value) ? 0.0 : Convert::ToDouble(Samount);

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn1(connString);
		SqlConn1.Open();

		String^ SqlQuery1 = "UPDATE  Reports SET Savings =@tSavings;";

		SqlCommand command(SqlQuery1, % SqlConn1);

		command.Parameters->AddWithValue("@tSavings",Savings);
		command.ExecuteNonQuery();
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}



	






}
private: System::Void Expences_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Head_Expences_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
