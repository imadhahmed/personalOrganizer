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
			this->lbIncome->AutoSize = true;
			this->lbIncome->BackColor = System::Drawing::Color::Transparent;
			this->lbIncome->Font = (gcnew System::Drawing::Font(L"Deansgate Condensed", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbIncome->ForeColor = System::Drawing::Color::Transparent;
			this->lbIncome->Location = System::Drawing::Point(493, 34);
			this->lbIncome->Name = L"lbIncome";
			this->lbIncome->Size = System::Drawing::Size(135, 50);
			this->lbIncome->TabIndex = 0;
			this->lbIncome->Text = L"Income";
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->BackColor = System::Drawing::Color::Transparent;
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDate->ForeColor = System::Drawing::Color::Transparent;
			this->lbDate->Location = System::Drawing::Point(23, 140);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(62, 30);
			this->lbDate->TabIndex = 1;
			this->lbDate->Text = L"Date";
			// 
			// lbSource
			// 
			this->lbSource->AutoSize = true;
			this->lbSource->BackColor = System::Drawing::Color::Transparent;
			this->lbSource->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSource->ForeColor = System::Drawing::Color::Transparent;
			this->lbSource->Location = System::Drawing::Point(23, 206);
			this->lbSource->Name = L"lbSource";
			this->lbSource->Size = System::Drawing::Size(83, 30);
			this->lbSource->TabIndex = 2;
			this->lbSource->Text = L"Source";
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->BackColor = System::Drawing::Color::Transparent;
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::Color::Transparent;
			this->lbAmount->Location = System::Drawing::Point(23, 268);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(96, 30);
			this->lbAmount->TabIndex = 4;
			this->lbAmount->Text = L"Amount";
			// 
			// tbAmount
			// 
			this->tbAmount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbAmount->Location = System::Drawing::Point(187, 269);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(850, 32);
			this->tbAmount->TabIndex = 5;
			// 
			// tbSource
			// 
			this->tbSource->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbSource->Location = System::Drawing::Point(187, 207);
			this->tbSource->Name = L"tbSource";
			this->tbSource->Size = System::Drawing::Size(850, 32);
			this->tbSource->TabIndex = 6;
			// 
			// btSubmit
			// 
			this->btSubmit->Location = System::Drawing::Point(779, 385);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(116, 39);
			this->btSubmit->TabIndex = 8;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = true;
			this->btSubmit->Click += gcnew System::EventHandler(this, &Income::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->Location = System::Drawing::Point(921, 385);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(116, 39);
			this->btClose->TabIndex = 9;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = true;
			this->btClose->Click += gcnew System::EventHandler(this, &Income::btClose_Click);
			// 
			// datePicker1
			// 
			this->datePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->datePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datePicker1->Location = System::Drawing::Point(187, 149);
			this->datePicker1->Name = L"datePicker1";
			this->datePicker1->Size = System::Drawing::Size(850, 32);
			this->datePicker1->TabIndex = 10;
			// 
			// Income
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkMagenta;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 544);
			this->Controls->Add(this->datePicker1);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btSubmit);
			this->Controls->Add(this->tbSource);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->lbAmount);
			this->Controls->Add(this->lbSource);
			this->Controls->Add(this->lbDate);
			this->Controls->Add(this->lbIncome);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Income";
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

}
};
}
