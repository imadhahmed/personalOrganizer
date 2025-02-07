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
	/// Summary for ShowingReport
	/// </summary>
	public ref class ShowingReport : public System::Windows::Forms::Form
	{
	public:
		ShowingReport(void)
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
		~ShowingReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ graphTableHead;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ monthlyReportText;
	private: System::Windows::Forms::Label^ headText;
	private: System::Windows::Forms::Button^ btnMonthlyReport;
	private: System::Windows::Forms::Button^ btnGraphTable;
	private: System::Windows::Forms::Button^ btnGraph;
	private: System::Windows::Forms::Button^ btnClose;



	private: System::Windows::Forms::DataGridView^ monthlyReportGrid;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ LbIncomeTable;
	private: System::Windows::Forms::Button^ button1;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->graphTableHead = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->monthlyReportText = (gcnew System::Windows::Forms::Label());
			this->headText = (gcnew System::Windows::Forms::Label());
			this->btnMonthlyReport = (gcnew System::Windows::Forms::Button());
			this->btnGraphTable = (gcnew System::Windows::Forms::Button());
			this->btnGraph = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->monthlyReportGrid = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->LbIncomeTable = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monthlyReportGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(773, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 35);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Graphical View Of Monthly Expences";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Lavender;
			chartArea1->BackSecondaryColor = System::Drawing::Color::Gainsboro;
			chartArea1->BorderColor = System::Drawing::Color::DarkGreen;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(768, 222);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart1->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(2) {
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0))), System::Drawing::Color::Indigo
			};
			this->chart1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Expence";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(508, 451);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			// 
			// graphTableHead
			// 
			this->graphTableHead->BackColor = System::Drawing::Color::Transparent;
			this->graphTableHead->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->graphTableHead->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->graphTableHead->Location = System::Drawing::Point(409, 174);
			this->graphTableHead->Name = L"graphTableHead";
			this->graphTableHead->Size = System::Drawing::Size(128, 38);
			this->graphTableHead->TabIndex = 11;
			this->graphTableHead->Text = L"Expence Table";
			this->graphTableHead->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Lavender;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Location = System::Drawing::Point(405, 222);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(269, 417);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ShowingReport::dataGridView1_CellContentClick);
			// 
			// monthlyReportText
			// 
			this->monthlyReportText->BackColor = System::Drawing::Color::Transparent;
			this->monthlyReportText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthlyReportText->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->monthlyReportText->Location = System::Drawing::Point(32, 165);
			this->monthlyReportText->Name = L"monthlyReportText";
			this->monthlyReportText->Size = System::Drawing::Size(148, 32);
			this->monthlyReportText->TabIndex = 8;
			this->monthlyReportText->Text = L"Monthly Report";
			this->monthlyReportText->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->monthlyReportText->Click += gcnew System::EventHandler(this, &ShowingReport::monthlyReportText_Click);
			// 
			// headText
			// 
			this->headText->BackColor = System::Drawing::Color::Transparent;
			this->headText->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headText->ForeColor = System::Drawing::Color::White;
			this->headText->Location = System::Drawing::Point(517, 26);
			this->headText->Name = L"headText";
			this->headText->Size = System::Drawing::Size(391, 76);
			this->headText->TabIndex = 7;
			this->headText->Text = L"FINANCIAL REPORT";
			this->headText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMonthlyReport
			// 
			this->btnMonthlyReport->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMonthlyReport->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMonthlyReport->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMonthlyReport->Location = System::Drawing::Point(225, 161);
			this->btnMonthlyReport->Name = L"btnMonthlyReport";
			this->btnMonthlyReport->Size = System::Drawing::Size(148, 40);
			this->btnMonthlyReport->TabIndex = 14;
			this->btnMonthlyReport->Text = L"Show Table";
			this->btnMonthlyReport->UseVisualStyleBackColor = false;
			this->btnMonthlyReport->Click += gcnew System::EventHandler(this, &ShowingReport::btnMonthlyReport_Click);
			// 
			// btnGraphTable
			// 
			this->btnGraphTable->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnGraphTable->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGraphTable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnGraphTable->Location = System::Drawing::Point(553, 174);
			this->btnGraphTable->Name = L"btnGraphTable";
			this->btnGraphTable->Size = System::Drawing::Size(121, 42);
			this->btnGraphTable->TabIndex = 15;
			this->btnGraphTable->Text = L"Show Table";
			this->btnGraphTable->UseVisualStyleBackColor = false;
			this->btnGraphTable->Click += gcnew System::EventHandler(this, &ShowingReport::btnGraphTable_Click);
			// 
			// btnGraph
			// 
			this->btnGraph->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnGraph->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGraph->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnGraph->Location = System::Drawing::Point(1156, 175);
			this->btnGraph->Name = L"btnGraph";
			this->btnGraph->Size = System::Drawing::Size(120, 41);
			this->btnGraph->TabIndex = 16;
			this->btnGraph->Text = L"Load Graph";
			this->btnGraph->UseVisualStyleBackColor = false;
			this->btnGraph->Click += gcnew System::EventHandler(this, &ShowingReport::btnGraph_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::IndianRed;
			this->btnClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClose->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnClose->FlatAppearance->BorderSize = 2;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnClose->Location = System::Drawing::Point(1114, 710);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(114, 42);
			this->btnClose->TabIndex = 17;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &ShowingReport::btnClose_Click);
			// 
			// monthlyReportGrid
			// 
			this->monthlyReportGrid->BackgroundColor = System::Drawing::Color::Lavender;
			this->monthlyReportGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->monthlyReportGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->NullValue = L"0.00";
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->monthlyReportGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->monthlyReportGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->monthlyReportGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->monthlyReportGrid->Location = System::Drawing::Point(32, 207);
			this->monthlyReportGrid->Name = L"monthlyReportGrid";
			this->monthlyReportGrid->RowHeadersWidth = 51;
			this->monthlyReportGrid->RowTemplate->Height = 24;
			this->monthlyReportGrid->Size = System::Drawing::Size(341, 120);
			this->monthlyReportGrid->TabIndex = 21;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Lavender;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView2->ColumnHeadersHeight = 29;
			this->dataGridView2->Location = System::Drawing::Point(32, 402);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(345, 237);
			this->dataGridView2->TabIndex = 18;
			// 
			// LbIncomeTable
			// 
			this->LbIncomeTable->BackColor = System::Drawing::Color::Transparent;
			this->LbIncomeTable->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbIncomeTable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->LbIncomeTable->Location = System::Drawing::Point(32, 363);
			this->LbIncomeTable->Name = L"LbIncomeTable";
			this->LbIncomeTable->Size = System::Drawing::Size(117, 33);
			this->LbIncomeTable->TabIndex = 19;
			this->LbIncomeTable->Text = L"Income Table";
			this->LbIncomeTable->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(248, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 37);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Show Table";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ShowingReport::button1_Click);
			// 
			// ShowingReport
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btnClose;
			this->ClientSize = System::Drawing::Size(1272, 749);
			this->Controls->Add(this->monthlyReportGrid);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LbIncomeTable);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnGraph);
			this->Controls->Add(this->btnGraphTable);
			this->Controls->Add(this->btnMonthlyReport);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->graphTableHead);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->monthlyReportText);
			this->Controls->Add(this->headText);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ShowingReport";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Financial Report";
			this->Load += gcnew System::EventHandler(this, &ShowingReport::ShowingReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monthlyReportGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowingReport_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void LoadData1()
	{
		
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT [Total Income],[Total Expence],Savings FROM Reports", connection);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

			DataTable^ dataTable = gcnew DataTable();

			adapter->Fill(dataTable);

			this->monthlyReportGrid->DataSource = dataTable;
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
		 
private: System::Void monthlyReportText_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnMonthlyReport_Click(System::Object^ sender, System::EventArgs^ e) {
	   LoadData1();
}

	private: void LoadData2()
	{
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT Category,Expences FROM graph;", connection);

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

private: System::Void btnGraphTable_Click(System::Object^ sender, System::EventArgs^ e) {

	LoadData2();
}

private: void LoadData3()
{
	String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT Date,Source,Amount FROM Income;", connection);

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


private: System::Void btnGraph_Click(System::Object^ sender, System::EventArgs^ e) {

	chart1->Series[0]->XValueMember = "Category"; 
	chart1->Series[0]->YValueMembers = "Expences";

	chart1->Series[0]->XValueMember = "Category"; 
	chart1->Series[0]->YValueMembers = "Expences";

	chart1->Series[0]->XValueMember = "Category"; 
	chart1->Series[0]->YValueMembers = "Expences";

	chart1->Series[0]->XValueMember = "Category"; 
	chart1->Series[0]->YValueMembers = "Expences";

	chart1->Series[0]->XValueMember = "Category"; 
	chart1->Series[0]->YValueMembers = "Expences";

	chart1->Series[0]->XValueMember = "Category"; 
	chart1->Series[0]->YValueMembers = "Expences";


	String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=personal_organizer;Integrated Security=True;Encrypt=False;";

	
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT Category,Expences FROM graph;", connection); 

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();

		
		adapter->Fill(dataTable);

		
		chart1->DataSource = dataTable;

		chart1->DataBind();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {

		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadData3();
}
};
}

