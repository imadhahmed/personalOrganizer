#pragma once

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Income
	/// </summary>
	public ref class Income : public System::Windows::Forms::Form
	{
	public:
		Income(void)
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
		~Income()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbIncome;
	private: System::Windows::Forms::Label^ lbDate;
	private: System::Windows::Forms::Label^ lbSource;
	private: System::Windows::Forms::Label^ lbAmount;
	private: System::Windows::Forms::TextBox^ tbAmount;
	private: System::Windows::Forms::TextBox^ tbSource;

	private: System::Windows::Forms::Button^ btSubmit;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::DateTimePicker^ datePicker1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Income::typeid));
			this->lbIncome = (gcnew System::Windows::Forms::Label());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->lbSource = (gcnew System::Windows::Forms::Label());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->tbSource = (gcnew System::Windows::Forms::TextBox());
			this->btSubmit = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->datePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// lbIncome
			// 
			this->lbIncome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbIncome->BackColor = System::Drawing::Color::Transparent;
			this->lbIncome->Cursor = System::Windows::Forms::Cursors::Default;
			this->lbIncome->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbIncome->ForeColor = System::Drawing::Color::White;
			this->lbIncome->Location = System::Drawing::Point(306, 83);
			this->lbIncome->Name = L"lbIncome";
			this->lbIncome->Size = System::Drawing::Size(413, 59);
			this->lbIncome->TabIndex = 0;
			this->lbIncome->Text = L"ADD YOUR INCOME";
			this->lbIncome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbIncome->Click += gcnew System::EventHandler(this, &Income::lbIncome_Click);
			// 
			// lbDate
			// 
			this->lbDate->BackColor = System::Drawing::Color::Transparent;
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDate->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->lbDate->Location = System::Drawing::Point(31, 248);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(79, 42);
			this->lbDate->TabIndex = 1;
			this->lbDate->Text = L"Date";
			this->lbDate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbSource
			// 
			this->lbSource->BackColor = System::Drawing::Color::Transparent;
			this->lbSource->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSource->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->lbSource->Location = System::Drawing::Point(31, 314);
			this->lbSource->Name = L"lbSource";
			this->lbSource->Size = System::Drawing::Size(207, 42);
			this->lbSource->TabIndex = 2;
			this->lbSource->Text = L"Description";
			this->lbSource->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbAmount
			// 
			this->lbAmount->BackColor = System::Drawing::Color::Transparent;
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->lbAmount->Location = System::Drawing::Point(31, 376);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(125, 42);
			this->lbAmount->TabIndex = 4;
			this->lbAmount->Text = L"Amount";
			this->lbAmount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbAmount
			// 
			this->tbAmount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbAmount->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAmount->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tbAmount->Location = System::Drawing::Point(301, 375);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(563, 36);
			this->tbAmount->TabIndex = 5;
			// 
			// tbSource
			// 
			this->tbSource->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbSource->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbSource->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSource->ForeColor = System::Drawing::Color::Black;
			this->tbSource->Location = System::Drawing::Point(301, 313);
			this->tbSource->Name = L"tbSource";
			this->tbSource->Size = System::Drawing::Size(563, 36);
			this->tbSource->TabIndex = 6;
			// 
			// btSubmit
			// 
			this->btSubmit->BackColor = System::Drawing::SystemColors::Highlight;
			this->btSubmit->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSubmit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btSubmit->Location = System::Drawing::Point(550, 541);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(169, 49);
			this->btSubmit->TabIndex = 8;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = false;
			this->btSubmit->Click += gcnew System::EventHandler(this, &Income::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->BackColor = System::Drawing::Color::IndianRed;
			this->btClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btClose->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->Location = System::Drawing::Point(725, 541);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(139, 49);
			this->btClose->TabIndex = 9;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = false;
			this->btClose->Click += gcnew System::EventHandler(this, &Income::btClose_Click);
			// 
			// datePicker1
			// 
			this->datePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->datePicker1->CalendarForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->CalendarMonthBackground = System::Drawing::SystemColors::HighlightText;
			this->datePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datePicker1->Location = System::Drawing::Point(301, 248);
			this->datePicker1->Name = L"datePicker1";
			this->datePicker1->Size = System::Drawing::Size(563, 36);
			this->datePicker1->TabIndex = 10;
			// 
			// Income
			// 
			this->AcceptButton = this->btSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btClose;
			this->ClientSize = System::Drawing::Size(1272, 664);
			this->Controls->Add(this->datePicker1);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btSubmit);
			this->Controls->Add(this->tbSource);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->lbAmount);
			this->Controls->Add(this->lbSource);
			this->Controls->Add(this->lbDate);
			this->Controls->Add(this->lbIncome);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Income";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Income Source";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ date = datePicker1->Text;
	String^ src = tbSource->Text;
	String^ amount = tbAmount->Text;

	if (date->Length == 0 || src->Length == 0 || amount->Length == 0)
	{
		MessageBox::Show("Please fill all credintials..","Incomplete",MessageBoxButtons::OK);
	}

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlQuery = "INSERT INTO Income" + "(Date,Source,Amount)" + "VALUES (@dt,@src,@amnt);";
		SqlCommand command(sqlQuery, % sqlconn);

		command.Parameters->AddWithValue("@dt",date);
		command.Parameters->AddWithValue("@src",src);
		command.Parameters->AddWithValue("@amnt",amount);

		command.ExecuteNonQuery(); 

		MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK);
		this->Close();
	}

	catch (Exception^ exe) {
		MessageBox::Show("Error: " + exe->Message,"Update error",MessageBoxButtons::OK);
	}


	String^ connectionString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlconnection1(connectionString1);
	sqlconnection1.Open();
	String^ sqlTotalQuery1 = "SELECT SUM(Amount) FROM Income;";
	SqlCommand TotalCommand1(sqlTotalQuery1, % sqlconnection1);
	Object^ Tamount1 = TotalCommand1.ExecuteScalar();
	double totalIncome = Tamount1 != nullptr ? Convert::ToDouble(Tamount1) : 0.0;

	try {
		String^ ConnString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn(ConnString);
		SqlConn.Open();

		String^ SqlQuery = "UPDATE  Reports SET [Total Income]=@tIncome;";

		SqlCommand command(SqlQuery, % SqlConn);

		command.Parameters->AddWithValue("@tIncome",totalIncome);
		command.ExecuteNonQuery();
		//MessageBox::Show("Update succes Total Income","Hello",MessageBoxButtons::OK);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}

	
	// Updating savings to Monthly Report Table

	String^ ConnectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
	SqlConnection sqlConnection(ConnectionString);
	sqlConnection.Open();
	String^ sqlSavingsQuery = "SELECT [Total Income] - [Total Expence] FROM Reports;";
	SqlCommand savingsCommand(sqlSavingsQuery, % sqlConnection);
	Object^ Samount = savingsCommand.ExecuteScalar();
	double Savings = Samount != nullptr ? Convert::ToDouble(Samount) : 0.0;

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection SqlConn1(connString);
		SqlConn1.Open();

		String^ SqlQuery1 = "UPDATE  Reports SET Savings =@tSavings;";

		SqlCommand command(SqlQuery1, % SqlConn1);

		command.Parameters->AddWithValue("@tSavings", Savings);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}
	


}
private: System::Void lbIncome_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
