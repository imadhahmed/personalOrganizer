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
	/// Summary for setBudget
	/// </summary>
	public ref class setBudget : public System::Windows::Forms::Form
	{
	public:
		setBudget(void)
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
		~setBudget()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ headBudget;



	private: System::Windows::Forms::Button^ btSubmit;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::Label^ lbFood;
	private: System::Windows::Forms::TextBox^ tbFood;
	private: System::Windows::Forms::TextBox^ tbEntertainment;


	private: System::Windows::Forms::Label^ lbEntertainment;
	private: System::Windows::Forms::TextBox^ tbTraveling;

	private: System::Windows::Forms::Label^ lbTraveling;
	private: System::Windows::Forms::TextBox^ tbUniversity;

	private: System::Windows::Forms::Label^ lbuniversity;
	private: System::Windows::Forms::TextBox^ tbEducation;


	private: System::Windows::Forms::Label^ lbEducation;
	private: System::Windows::Forms::TextBox^ tbClothing;


	private: System::Windows::Forms::Label^ lbcCothing;
	private: System::Windows::Forms::Label^ lbCategories;
	private: System::Windows::Forms::Label^ lbAmount;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(setBudget::typeid));
			this->headBudget = (gcnew System::Windows::Forms::Label());
			this->btSubmit = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->lbFood = (gcnew System::Windows::Forms::Label());
			this->tbFood = (gcnew System::Windows::Forms::TextBox());
			this->tbEntertainment = (gcnew System::Windows::Forms::TextBox());
			this->lbEntertainment = (gcnew System::Windows::Forms::Label());
			this->tbTraveling = (gcnew System::Windows::Forms::TextBox());
			this->lbTraveling = (gcnew System::Windows::Forms::Label());
			this->tbUniversity = (gcnew System::Windows::Forms::TextBox());
			this->lbuniversity = (gcnew System::Windows::Forms::Label());
			this->tbEducation = (gcnew System::Windows::Forms::TextBox());
			this->lbEducation = (gcnew System::Windows::Forms::Label());
			this->tbClothing = (gcnew System::Windows::Forms::TextBox());
			this->lbcCothing = (gcnew System::Windows::Forms::Label());
			this->lbCategories = (gcnew System::Windows::Forms::Label());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// headBudget
			// 
			this->headBudget->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->headBudget->BackColor = System::Drawing::Color::Transparent;
			this->headBudget->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headBudget->ForeColor = System::Drawing::Color::White;
			this->headBudget->Location = System::Drawing::Point(162, 23);
			this->headBudget->Name = L"headBudget";
			this->headBudget->Size = System::Drawing::Size(548, 82);
			this->headBudget->TabIndex = 1;
			this->headBudget->Text = L"BUDGET ALLOCATION";
			this->headBudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btSubmit
			// 
			this->btSubmit->BackColor = System::Drawing::Color::Navy;
			this->btSubmit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSubmit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btSubmit->Location = System::Drawing::Point(1011, 677);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(124, 49);
			this->btSubmit->TabIndex = 5;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = false;
			this->btSubmit->Click += gcnew System::EventHandler(this, &setBudget::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->BackColor = System::Drawing::Color::IndianRed;
			this->btClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btClose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->Location = System::Drawing::Point(1141, 677);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(118, 48);
			this->btClose->TabIndex = 6;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = false;
			this->btClose->Click += gcnew System::EventHandler(this, &setBudget::btClose_Click);
			// 
			// lbFood
			// 
			this->lbFood->BackColor = System::Drawing::Color::Transparent;
			this->lbFood->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFood->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbFood->Location = System::Drawing::Point(155, 296);
			this->lbFood->Name = L"lbFood";
			this->lbFood->Size = System::Drawing::Size(84, 51);
			this->lbFood->TabIndex = 7;
			this->lbFood->Text = L"Food";
			this->lbFood->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbFood
			// 
			this->tbFood->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbFood->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFood->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbFood->Location = System::Drawing::Point(431, 304);
			this->tbFood->Name = L"tbFood";
			this->tbFood->Size = System::Drawing::Size(279, 36);
			this->tbFood->TabIndex = 8;
			// 
			// tbEntertainment
			// 
			this->tbEntertainment->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbEntertainment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEntertainment->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbEntertainment->Location = System::Drawing::Point(430, 370);
			this->tbEntertainment->Name = L"tbEntertainment";
			this->tbEntertainment->Size = System::Drawing::Size(279, 36);
			this->tbEntertainment->TabIndex = 10;
			// 
			// lbEntertainment
			// 
			this->lbEntertainment->BackColor = System::Drawing::Color::Transparent;
			this->lbEntertainment->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEntertainment->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbEntertainment->Location = System::Drawing::Point(155, 361);
			this->lbEntertainment->Name = L"lbEntertainment";
			this->lbEntertainment->Size = System::Drawing::Size(208, 60);
			this->lbEntertainment->TabIndex = 9;
			this->lbEntertainment->Text = L"Entertainment";
			this->lbEntertainment->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbTraveling
			// 
			this->tbTraveling->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbTraveling->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTraveling->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbTraveling->Location = System::Drawing::Point(430, 432);
			this->tbTraveling->Name = L"tbTraveling";
			this->tbTraveling->Size = System::Drawing::Size(279, 36);
			this->tbTraveling->TabIndex = 12;
			// 
			// lbTraveling
			// 
			this->lbTraveling->BackColor = System::Drawing::Color::Transparent;
			this->lbTraveling->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTraveling->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbTraveling->Location = System::Drawing::Point(155, 427);
			this->lbTraveling->Name = L"lbTraveling";
			this->lbTraveling->Size = System::Drawing::Size(138, 52);
			this->lbTraveling->TabIndex = 11;
			this->lbTraveling->Text = L"Traveling";
			this->lbTraveling->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbUniversity
			// 
			this->tbUniversity->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbUniversity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUniversity->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbUniversity->Location = System::Drawing::Point(430, 618);
			this->tbUniversity->Name = L"tbUniversity";
			this->tbUniversity->Size = System::Drawing::Size(279, 36);
			this->tbUniversity->TabIndex = 18;
			// 
			// lbuniversity
			// 
			this->lbuniversity->BackColor = System::Drawing::Color::Transparent;
			this->lbuniversity->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbuniversity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbuniversity->Location = System::Drawing::Point(155, 610);
			this->lbuniversity->Name = L"lbuniversity";
			this->lbuniversity->Size = System::Drawing::Size(203, 59);
			this->lbuniversity->TabIndex = 17;
			this->lbuniversity->Text = L"University Fee";
			this->lbuniversity->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbEducation
			// 
			this->tbEducation->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbEducation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEducation->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbEducation->Location = System::Drawing::Point(430, 557);
			this->tbEducation->Name = L"tbEducation";
			this->tbEducation->Size = System::Drawing::Size(279, 36);
			this->tbEducation->TabIndex = 16;
			// 
			// lbEducation
			// 
			this->lbEducation->BackColor = System::Drawing::Color::Transparent;
			this->lbEducation->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEducation->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbEducation->Location = System::Drawing::Point(155, 552);
			this->lbEducation->Name = L"lbEducation";
			this->lbEducation->Size = System::Drawing::Size(201, 52);
			this->lbEducation->TabIndex = 15;
			this->lbEducation->Text = L"Education Fee";
			this->lbEducation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbClothing
			// 
			this->tbClothing->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tbClothing->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbClothing->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbClothing->Location = System::Drawing::Point(430, 495);
			this->tbClothing->Name = L"tbClothing";
			this->tbClothing->Size = System::Drawing::Size(279, 36);
			this->tbClothing->TabIndex = 14;
			// 
			// lbcCothing
			// 
			this->lbcCothing->BackColor = System::Drawing::Color::Transparent;
			this->lbcCothing->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcCothing->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbcCothing->Location = System::Drawing::Point(155, 488);
			this->lbcCothing->Name = L"lbcCothing";
			this->lbcCothing->Size = System::Drawing::Size(130, 57);
			this->lbcCothing->TabIndex = 13;
			this->lbcCothing->Text = L"Clothing";
			this->lbcCothing->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbCategories
			// 
			this->lbCategories->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbCategories->BackColor = System::Drawing::Color::Transparent;
			this->lbCategories->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCategories->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbCategories->Location = System::Drawing::Point(155, 164);
			this->lbCategories->Name = L"lbCategories";
			this->lbCategories->Size = System::Drawing::Size(208, 66);
			this->lbCategories->TabIndex = 19;
			this->lbCategories->Text = L"Categories";
			this->lbCategories->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbAmount
			// 
			this->lbAmount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbAmount->BackColor = System::Drawing::Color::Transparent;
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbAmount->Location = System::Drawing::Point(424, 164);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(263, 66);
			this->lbAmount->TabIndex = 20;
			this->lbAmount->Text = L"Amount";
			this->lbAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// setBudget
			// 
			this->AcceptButton = this->btSubmit;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btClose;
			this->ClientSize = System::Drawing::Size(1272, 749);
			this->Controls->Add(this->lbAmount);
			this->Controls->Add(this->lbCategories);
			this->Controls->Add(this->tbUniversity);
			this->Controls->Add(this->lbuniversity);
			this->Controls->Add(this->tbEducation);
			this->Controls->Add(this->lbEducation);
			this->Controls->Add(this->tbClothing);
			this->Controls->Add(this->lbcCothing);
			this->Controls->Add(this->tbTraveling);
			this->Controls->Add(this->lbTraveling);
			this->Controls->Add(this->tbEntertainment);
			this->Controls->Add(this->lbEntertainment);
			this->Controls->Add(this->tbFood);
			this->Controls->Add(this->lbFood);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btSubmit);
			this->Controls->Add(this->headBudget);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"setBudget";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Set Budget";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lbCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ food = tbFood->Text;
	String^ entertainment = tbEntertainment->Text;
	String^ travel = tbTraveling->Text;
	String^ cloth = tbClothing->Text;
	String^ education = tbEducation->Text;
	String^ university_fee = tbUniversity->Text;

	
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlQuery = "UPDATE Budget SET Amount = @fd WHERE Id =1" "UPDATE Budget SET Amount = @ent WHERE Id =2" 
							"UPDATE Budget SET Amount = @trvl WHERE Id =3" "UPDATE Budget SET Amount = @clth WHERE Id =4"
							"UPDATE Budget SET Amount = @edu WHERE Id =5" "UPDATE Budget SET Amount = @unifee WHERE Id =6";

		SqlCommand command(sqlQuery,%sqlconn);

		command.Parameters->AddWithValue("@fd",food);
		command.Parameters->AddWithValue("@ent",entertainment);
		command.Parameters->AddWithValue("@trvl",travel);
		command.Parameters->AddWithValue("@clth",cloth);
		command.Parameters->AddWithValue("@edu",education);
		command.Parameters->AddWithValue("@unifee",university_fee);
		

		command.ExecuteNonQuery();

		MessageBox::Show("Update Successful..!","Success",MessageBoxButtons::OK);
		this->Close(); 

	}
	catch (Exception^ exe) {
		MessageBox::Show("Error: " + exe->Message,"Error",MessageBoxButtons::OK);
	}   
	

}
};
}
