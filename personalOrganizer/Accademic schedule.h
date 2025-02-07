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
	/// Summary for Accademicschedule
	/// </summary>
	public ref class Accademicschedule : public System::Windows::Forms::Form
	{
	public:
		Accademicschedule(void)
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
		~Accademicschedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ tbTimeEvent;
	protected:
	private: System::Windows::Forms::TextBox^ tbEvent;
	private: System::Windows::Forms::Button^ btnSetEvent;

	private: System::Windows::Forms::DateTimePicker^ tbDateEvent;
	private: System::Windows::Forms::Label^ lbDateEvent;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbTimeEvent;
	private: System::Windows::Forms::Label^ lbhead;
	private: System::Windows::Forms::Label^ lbCourse;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;



	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tbTimeEvent = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbEvent = (gcnew System::Windows::Forms::TextBox());
			this->btnSetEvent = (gcnew System::Windows::Forms::Button());
			this->tbDateEvent = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbDateEvent = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbTimeEvent = (gcnew System::Windows::Forms::Label());
			this->lbhead = (gcnew System::Windows::Forms::Label());
			this->lbCourse = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tbTimeEvent
			// 
			this->tbTimeEvent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTimeEvent->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->tbTimeEvent->Location = System::Drawing::Point(1103, 104);
			this->tbTimeEvent->Margin = System::Windows::Forms::Padding(2);
			this->tbTimeEvent->Name = L"tbTimeEvent";
			this->tbTimeEvent->Size = System::Drawing::Size(158, 25);
			this->tbTimeEvent->TabIndex = 14;
			// 
			// tbEvent
			// 
			this->tbEvent->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->tbEvent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEvent->Location = System::Drawing::Point(1103, 140);
			this->tbEvent->Margin = System::Windows::Forms::Padding(2);
			this->tbEvent->Name = L"tbEvent";
			this->tbEvent->Size = System::Drawing::Size(158, 25);
			this->tbEvent->TabIndex = 13;
			// 
			// btnSetEvent
			// 
			this->btnSetEvent->BackColor = System::Drawing::Color::Navy;
			this->btnSetEvent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSetEvent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSetEvent->Location = System::Drawing::Point(1194, 185);
			this->btnSetEvent->Margin = System::Windows::Forms::Padding(2);
			this->btnSetEvent->Name = L"btnSetEvent";
			this->btnSetEvent->Size = System::Drawing::Size(67, 28);
			this->btnSetEvent->TabIndex = 12;
			this->btnSetEvent->Text = L"Set";
			this->btnSetEvent->UseVisualStyleBackColor = false;
			this->btnSetEvent->Click += gcnew System::EventHandler(this, &Accademicschedule::btnSetEvent_Click);
			// 
			// tbDateEvent
			// 
			this->tbDateEvent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDateEvent->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->tbDateEvent->Location = System::Drawing::Point(1103, 70);
			this->tbDateEvent->Margin = System::Windows::Forms::Padding(2);
			this->tbDateEvent->Name = L"tbDateEvent";
			this->tbDateEvent->Size = System::Drawing::Size(158, 25);
			this->tbDateEvent->TabIndex = 11;
			// 
			// lbDateEvent
			// 
			this->lbDateEvent->BackColor = System::Drawing::Color::Transparent;
			this->lbDateEvent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDateEvent->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbDateEvent->Location = System::Drawing::Point(958, 72);
			this->lbDateEvent->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbDateEvent->Name = L"lbDateEvent";
			this->lbDateEvent->Size = System::Drawing::Size(131, 23);
			this->lbDateEvent->TabIndex = 15;
			this->lbDateEvent->Text = L"Deadline Date";
			this->lbDateEvent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbDateEvent->Click += gcnew System::EventHandler(this, &Accademicschedule::lbDateEvent_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(958, 147);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 23);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Event / Task";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbTimeEvent
			// 
			this->lbTimeEvent->BackColor = System::Drawing::Color::Transparent;
			this->lbTimeEvent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTimeEvent->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbTimeEvent->Location = System::Drawing::Point(958, 110);
			this->lbTimeEvent->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbTimeEvent->Name = L"lbTimeEvent";
			this->lbTimeEvent->Size = System::Drawing::Size(127, 23);
			this->lbTimeEvent->TabIndex = 17;
			this->lbTimeEvent->Text = L"Deadline Time";
			this->lbTimeEvent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbhead
			// 
			this->lbhead->BackColor = System::Drawing::Color::Transparent;
			this->lbhead->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbhead->ForeColor = System::Drawing::Color::White;
			this->lbhead->Location = System::Drawing::Point(409, 29);
			this->lbhead->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbhead->Name = L"lbhead";
			this->lbhead->Size = System::Drawing::Size(454, 51);
			this->lbhead->TabIndex = 18;
			this->lbhead->Text = L"ACADEMIC SCHEDULE";
			this->lbhead->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbhead->Click += gcnew System::EventHandler(this, &Accademicschedule::lbhead_Click);
			// 
			// lbCourse
			// 
			this->lbCourse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCourse->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbCourse->Location = System::Drawing::Point(956, 29);
			this->lbCourse->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbCourse->Name = L"lbCourse";
			this->lbCourse->Size = System::Drawing::Size(272, 31);
			this->lbCourse->TabIndex = 19;
			this->lbCourse->Text = L"Set Reminder --------";
			this->lbCourse->Click += gcnew System::EventHandler(this, &Accademicschedule::lbCourse_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(11, 237);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 31);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Subject";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(15, 124);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 37);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Time";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &Accademicschedule::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(16, 69);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(326, 40);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Add Your Lecture Schedules Here ----";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label5->Location = System::Drawing::Point(15, 177);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 36);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Day";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label7->Location = System::Drawing::Point(414, 127);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 28);
			this->label7->TabIndex = 25;
			this->label7->Text = L"To";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(143, 130);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 31);
			this->label8->TabIndex = 26;
			this->label8->Text = L"From";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(223, 127);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(166, 25);
			this->dateTimePicker1->TabIndex = 27;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(484, 127);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(179, 25);
			this->dateTimePicker2->TabIndex = 28;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &Accademicschedule::dateTimePicker2_ValueChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(148, 234);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(520, 25);
			this->textBox2->TabIndex = 30;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"wednesday", L"Thursday",
					L"Friday"
			});
			this->listBox1->Location = System::Drawing::Point(148, 177);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(520, 23);
			this->listBox1->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Navy;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(581, 281);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 31);
			this->button1->TabIndex = 32;
			this->button1->Text = L"submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Accademicschedule::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 351);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(657, 302);
			this->dataGridView1->TabIndex = 33;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(730, 248);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(531, 338);
			this->dataGridView2->TabIndex = 34;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(11, 317);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 30);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Load Data";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Accademicschedule::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(730, 211);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 33);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Load Data";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Accademicschedule::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Accademicschedule::timer1_Tick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::IndianRed;
			this->button4->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(1143, 610);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 43);
			this->button4->TabIndex = 37;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Accademicschedule::button4_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label9->Location = System::Drawing::Point(903, 206);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(218, 38);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Important Events";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(196, 309);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(234, 38);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Lecture Time table";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Accademicschedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->button4;
			this->ClientSize = System::Drawing::Size(1272, 664);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbCourse);
			this->Controls->Add(this->lbhead);
			this->Controls->Add(this->lbTimeEvent);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbDateEvent);
			this->Controls->Add(this->tbTimeEvent);
			this->Controls->Add(this->tbEvent);
			this->Controls->Add(this->btnSetEvent);
			this->Controls->Add(this->tbDateEvent);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Accademicschedule";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Accademicschedule";
			this->Load += gcnew System::EventHandler(this, &Accademicschedule::Accademicschedule_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lbDateEvent_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnSetEvent_Click(System::Object^ sender, System::EventArgs^ e) {

	DateTime Tdate = tbDateEvent->Value; 
	DateTime Ttime = tbTimeEvent->Value;

	DateTime targetDateTime = DateTime(Tdate.Year, Tdate.Month, Tdate.Day, Ttime.Hour, Ttime.Minute, Ttime.Second);

	
	TimeSpan RemainingTime = targetDateTime - DateTime::Now;
	if (RemainingTime.TotalMilliseconds < 0) {
		MessageBox::Show("The selected date and time is in the past.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return; 
	}

		double RemainingTimeInMilliSeconds = RemainingTime.TotalMilliseconds - 2000;

	
	timer1->Interval = static_cast<int>(RemainingTimeInMilliSeconds); 
	timer1->Enabled = true; 

	MessageBox::Show("Sucessfully Set", "Alert Set", MessageBoxButtons::OK);


	String^ eventDate = tbDateEvent->Text;
	String^ eventTime = tbTimeEvent->Text;
	String^ event = tbEvent->Text;

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlQuery = "INSERT INTO Events" + "(Event,[Deadline Date],[Deadline Time])" + "VALUES(@evt, @dD, @dT);";
		SqlCommand command(sqlQuery, % sqlconn);

		command.Parameters->AddWithValue("@evt", event);
		command.Parameters->AddWithValue("@dD", eventDate); 
		command.Parameters->AddWithValue("@dT",eventTime); 

		command.ExecuteNonQuery();

		MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK);

	}

	catch (Exception^ exe)
	{
		MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK);
	}

}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	timer1->Enabled = false; 
	MessageBox::Show("Your Deadline for " + tbEvent->Text + " is coming " + dateTimePicker1->Value.ToString("d") +
		" At " + dateTimePicker2->Value.ToString("t"), "Alert", MessageBoxButtons::OK); 
}

private: System::Void Accademicschedule_Load(System::Object^ sender, System::EventArgs^ e) {

	timer1->Enabled = false; 
}


private: System::Void lbhead_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close(); 
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ fromT = dateTimePicker1->Text;
		String^ toT = dateTimePicker2->Text;
		String^ day = listBox1->Text;
		String^ subject = textBox2->Text;

		if (day->Length == 0)
			MessageBox::Show("Please Enter the day correctly", "Alert", MessageBoxButtons::OK);
		else
		{

			try {
				String^ ConString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";
				SqlConnection SqlConn(ConString);
				SqlConn.Open();

				String^ SqlQuery = "INSERT INTO [TimeTable] ([Day],[From],[To],[Subject]) VALUES (@day,@fT, @tT, @subj);";
				SqlCommand command(SqlQuery, % SqlConn);

				command.Parameters->AddWithValue("@day", day);
				command.Parameters->AddWithValue("@fT", fromT);
				command.Parameters->AddWithValue("@tT", toT);
				command.Parameters->AddWithValue("@subj", subject);

				command.ExecuteNonQuery();

				MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK);

			}

			catch (Exception^ exe)
			{
				MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK);
			}
		}
	}

	private: void LoadTimeTable()
	{
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT [Day],[From],[To],[Subject] FROM [TimeTable]", connection);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

			DataTable^ dataTable = gcnew DataTable();

			adapter->Fill(dataTable);

			this->dataGridView1->DataSource = dataTable;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			if (connection->State == ConnectionState::Open)
				connection->Close();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	LoadTimeTable();
}
	   private: void LoadEvents()
	   {
		   String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";

		   SqlConnection^ connection = gcnew SqlConnection(connectionString);

		   try
		   {
			   connection->Open();

			   SqlCommand^ command = gcnew SqlCommand("SELECT [Event],[Deadline Date],[Deadline time] FROM [Events]", connection);

			   SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

			   DataTable^ dataTable = gcnew DataTable();

			   adapter->Fill(dataTable);

			   this->dataGridView2->DataSource = dataTable;
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show(ex->Message);
		   }
		   finally
		   {
				   if (connection->State == ConnectionState::Open)
				   connection->Close();
		   }
	   }
private: System::Void lbCourse_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadEvents();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

