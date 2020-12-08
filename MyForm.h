#pragma once
#include <vector>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Data.h"


namespace NBAStats {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Map m;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ ec;
	private: System::Windows::Forms::ComboBox^ wc;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ teamName;
	private: System::Windows::Forms::Button^ p1;
	private: System::Windows::Forms::Button^ p4;
	private: System::Windows::Forms::Button^ p3;
	private: System::Windows::Forms::Button^ p2;
	private: System::Windows::Forms::Button^ p6;
	private: System::Windows::Forms::Button^ p5;
	private: System::Windows::Forms::Button^ p11;
	private: System::Windows::Forms::Button^ p12;


	private: System::Windows::Forms::Button^ p8;
	private: System::Windows::Forms::Button^ p9;
	private: System::Windows::Forms::Button^ p10;



	private: System::Windows::Forms::Button^ p7;
	private: System::Windows::Forms::Button^ p20;


	private: System::Windows::Forms::Button^ p19;

	private: System::Windows::Forms::Button^ p17;
	private: System::Windows::Forms::Button^ p18;


	private: System::Windows::Forms::Button^ p14;
	private: System::Windows::Forms::Button^ p15;
	private: System::Windows::Forms::Button^ p16;



	private: System::Windows::Forms::Button^ p13;
	private: System::Windows::Forms::Label^ ppg;
	private: System::Windows::Forms::Label^ spg;
	private: System::Windows::Forms::Label^ bpg;
	private: System::Windows::Forms::Label^ mpg;



	private: System::Windows::Forms::Label^ rpg;
	private: System::Windows::Forms::Label^ apg;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ec = (gcnew System::Windows::Forms::ComboBox());
			this->wc = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->teamName = (gcnew System::Windows::Forms::Label());
			this->p1 = (gcnew System::Windows::Forms::Button());
			this->p4 = (gcnew System::Windows::Forms::Button());
			this->p3 = (gcnew System::Windows::Forms::Button());
			this->p2 = (gcnew System::Windows::Forms::Button());
			this->p6 = (gcnew System::Windows::Forms::Button());
			this->p5 = (gcnew System::Windows::Forms::Button());
			this->p11 = (gcnew System::Windows::Forms::Button());
			this->p12 = (gcnew System::Windows::Forms::Button());
			this->p8 = (gcnew System::Windows::Forms::Button());
			this->p9 = (gcnew System::Windows::Forms::Button());
			this->p10 = (gcnew System::Windows::Forms::Button());
			this->p7 = (gcnew System::Windows::Forms::Button());
			this->p20 = (gcnew System::Windows::Forms::Button());
			this->p19 = (gcnew System::Windows::Forms::Button());
			this->p17 = (gcnew System::Windows::Forms::Button());
			this->p18 = (gcnew System::Windows::Forms::Button());
			this->p14 = (gcnew System::Windows::Forms::Button());
			this->p15 = (gcnew System::Windows::Forms::Button());
			this->p16 = (gcnew System::Windows::Forms::Button());
			this->p13 = (gcnew System::Windows::Forms::Button());
			this->ppg = (gcnew System::Windows::Forms::Label());
			this->spg = (gcnew System::Windows::Forms::Label());
			this->bpg = (gcnew System::Windows::Forms::Label());
			this->mpg = (gcnew System::Windows::Forms::Label());
			this->rpg = (gcnew System::Windows::Forms::Label());
			this->apg = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			m.readFile();
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->Location = System::Drawing::Point(23, 463);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Points";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->Location = System::Drawing::Point(23, 596);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Steals";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->Location = System::Drawing::Point(342, 463);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Rebounds";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->Location = System::Drawing::Point(163, 463);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Assists";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label5->Location = System::Drawing::Point(342, 596);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 28);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Minutes";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label6->Location = System::Drawing::Point(163, 596);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 28);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Blocks";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(342, 310);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// ec
			// 
			this->ec->BackColor = System::Drawing::Color::DimGray;
			this->ec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ec->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->ec->FormattingEnabled = true;
			this->ec->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ec->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"ATL", L"BOS", L"BRK", L"CHO", L"CHI", L"CLE", L"DET",
					L"IND", L"MIA", L"MIL", L"NYK", L"ORL", L"PHI", L"TOR", L"WAS"
			});
			this->ec->Location = System::Drawing::Point(752, 46);
			this->ec->Name = L"ec";
			this->ec->Size = System::Drawing::Size(205, 30);
			this->ec->TabIndex = 7;
			this->ec->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// wc
			// 
			this->wc->BackColor = System::Drawing::Color::DimGray;
			this->wc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wc->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->wc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wc->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->wc->FormattingEnabled = true;
			this->wc->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"DAL", L"DEN", L"GSW", L"HOU", L"LAC", L"LAL", L"MEM",
					L"MIN", L"NOP", L"OKC", L"PHO", L"POR", L"SAC", L"SAS", L"UTA"
			});
			this->wc->Location = System::Drawing::Point(963, 46);
			this->wc->Name = L"wc";
			this->wc->Size = System::Drawing::Size(207, 30);
			this->wc->TabIndex = 9;
			this->wc->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::wc_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(773, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 22);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Eastern Conference";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cambria", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(976, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(174, 22);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Western Conference";
			// 
			// teamName
			// 
			this->teamName->AutoSize = true;
			this->teamName->BackColor = System::Drawing::Color::Transparent;
			this->teamName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teamName->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->teamName->Location = System::Drawing::Point(743, 120);
			this->teamName->Name = L"teamName";
			this->teamName->Size = System::Drawing::Size(0, 51);
			this->teamName->TabIndex = 12;
			// 
			// p1
			// 
			this->p1->BackColor = System::Drawing::Color::Transparent;
			this->p1->Location = System::Drawing::Point(752, 214);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(205, 23);
			this->p1->TabIndex = 13;
			this->p1->UseVisualStyleBackColor = false;
			this->p1->Click += gcnew System::EventHandler(this, &MyForm::p1_Click);
			// 
			// p4
			// 
			this->p4->Location = System::Drawing::Point(752, 303);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(205, 23);
			this->p4->TabIndex = 14;
			this->p4->UseVisualStyleBackColor = true;
			this->p4->Click += gcnew System::EventHandler(this, &MyForm::p4_Click);
			// 
			// p3
			// 
			this->p3->Location = System::Drawing::Point(752, 273);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(205, 23);
			this->p3->TabIndex = 15;
			this->p3->UseVisualStyleBackColor = true;
			this->p3->Click += gcnew System::EventHandler(this, &MyForm::p3_Click);
			// 
			// p2
			// 
			this->p2->Location = System::Drawing::Point(752, 243);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(205, 23);
			this->p2->TabIndex = 16;
			this->p2->UseVisualStyleBackColor = true;
			this->p2->Click += gcnew System::EventHandler(this, &MyForm::p2_Click_1);
			// 
			// p6
			// 
			this->p6->Location = System::Drawing::Point(752, 363);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(205, 23);
			this->p6->TabIndex = 17;
			this->p6->UseVisualStyleBackColor = true;
			this->p6->Click += gcnew System::EventHandler(this, &MyForm::p6_Click);
			// 
			// p5
			// 
			this->p5->Location = System::Drawing::Point(752, 333);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(205, 23);
			this->p5->TabIndex = 18;
			this->p5->UseVisualStyleBackColor = true;
			this->p5->Click += gcnew System::EventHandler(this, &MyForm::p5_Click);
			// 
			// p11
			// 
			this->p11->Location = System::Drawing::Point(963, 214);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(207, 23);
			this->p11->TabIndex = 24;
			this->p11->UseVisualStyleBackColor = true;
			this->p11->Click += gcnew System::EventHandler(this, &MyForm::p11_Click);
			// 
			// p12
			// 
			this->p12->Location = System::Drawing::Point(963, 244);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(207, 23);
			this->p12->TabIndex = 23;
			this->p12->UseVisualStyleBackColor = true;
			this->p12->Click += gcnew System::EventHandler(this, &MyForm::p12_Click);
			// 
			// p8
			// 
			this->p8->Location = System::Drawing::Point(752, 423);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(205, 23);
			this->p8->TabIndex = 22;
			this->p8->UseVisualStyleBackColor = true;
			this->p8->Click += gcnew System::EventHandler(this, &MyForm::p8_Click);
			// 
			// p9
			// 
			this->p9->Location = System::Drawing::Point(752, 453);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(205, 23);
			this->p9->TabIndex = 21;
			this->p9->UseVisualStyleBackColor = true;
			this->p9->Click += gcnew System::EventHandler(this, &MyForm::p9_Click);
			// 
			// p10
			// 
			this->p10->Location = System::Drawing::Point(752, 483);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(205, 23);
			this->p10->TabIndex = 20;
			this->p10->UseVisualStyleBackColor = true;
			this->p10->Click += gcnew System::EventHandler(this, &MyForm::p10_Click);
			// 
			// p7
			// 
			this->p7->BackColor = System::Drawing::Color::Transparent;
			this->p7->Location = System::Drawing::Point(752, 393);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(205, 23);
			this->p7->TabIndex = 19;
			this->p7->UseVisualStyleBackColor = false;
			this->p7->Click += gcnew System::EventHandler(this, &MyForm::p7_Click);
			// 
			// p20
			// 
			this->p20->Location = System::Drawing::Point(963, 483);
			this->p20->Name = L"p20";
			this->p20->Size = System::Drawing::Size(207, 23);
			this->p20->TabIndex = 32;
			this->p20->UseVisualStyleBackColor = true;
			this->p20->Click += gcnew System::EventHandler(this, &MyForm::p20_Click);
			// 
			// p19
			// 
			this->p19->BackColor = System::Drawing::Color::Transparent;
			this->p19->Location = System::Drawing::Point(963, 453);
			this->p19->Name = L"p19";
			this->p19->Size = System::Drawing::Size(207, 23);
			this->p19->TabIndex = 31;
			this->p19->UseVisualStyleBackColor = false;
			this->p19->Click += gcnew System::EventHandler(this, &MyForm::p19_Click);
			// 
			// p17
			// 
			this->p17->Location = System::Drawing::Point(963, 393);
			this->p17->Name = L"p17";
			this->p17->Size = System::Drawing::Size(207, 23);
			this->p17->TabIndex = 30;
			this->p17->UseVisualStyleBackColor = true;
			this->p17->Click += gcnew System::EventHandler(this, &MyForm::p17_Click);
			// 
			// p18
			// 
			this->p18->Location = System::Drawing::Point(963, 423);
			this->p18->Name = L"p18";
			this->p18->Size = System::Drawing::Size(207, 23);
			this->p18->TabIndex = 29;
			this->p18->UseVisualStyleBackColor = true;
			this->p18->Click += gcnew System::EventHandler(this, &MyForm::p18_Click);
			// 
			// p14
			// 
			this->p14->Location = System::Drawing::Point(963, 303);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(207, 23);
			this->p14->TabIndex = 28;
			this->p14->UseVisualStyleBackColor = true;
			this->p14->Click += gcnew System::EventHandler(this, &MyForm::p14_Click);
			// 
			// p15
			// 
			this->p15->Location = System::Drawing::Point(963, 333);
			this->p15->Name = L"p15";
			this->p15->Size = System::Drawing::Size(207, 23);
			this->p15->TabIndex = 27;
			this->p15->UseVisualStyleBackColor = true;
			this->p15->Click += gcnew System::EventHandler(this, &MyForm::p15_Click);
			// 
			// p16
			// 
			this->p16->Location = System::Drawing::Point(963, 363);
			this->p16->Name = L"p16";
			this->p16->Size = System::Drawing::Size(207, 23);
			this->p16->TabIndex = 26;
			this->p16->UseVisualStyleBackColor = true;
			this->p16->Click += gcnew System::EventHandler(this, &MyForm::p16_Click);
			// 
			// p13
			// 
			this->p13->BackColor = System::Drawing::Color::Transparent;
			this->p13->Location = System::Drawing::Point(963, 273);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(207, 23);
			this->p13->TabIndex = 25;
			this->p13->UseVisualStyleBackColor = false;
			this->p13->Click += gcnew System::EventHandler(this, &MyForm::p13_Click);
			// 
			// ppg
			// 
			this->ppg->AutoSize = true;
			this->ppg->BackColor = System::Drawing::Color::Transparent;
			this->ppg->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ppg->ForeColor = System::Drawing::Color::Orange;
			this->ppg->Location = System::Drawing::Point(24, 516);
			this->ppg->Name = L"ppg";
			this->ppg->Size = System::Drawing::Size(0, 28);
			this->ppg->TabIndex = 33;
			// 
			// spg
			// 
			this->spg->AutoSize = true;
			this->spg->BackColor = System::Drawing::Color::Transparent;
			this->spg->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spg->ForeColor = System::Drawing::Color::Orange;
			this->spg->Location = System::Drawing::Point(20, 658);
			this->spg->Name = L"spg";
			this->spg->Size = System::Drawing::Size(0, 28);
			this->spg->TabIndex = 34;
			// 
			// bpg
			// 
			this->bpg->AutoSize = true;
			this->bpg->BackColor = System::Drawing::Color::Transparent;
			this->bpg->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpg->ForeColor = System::Drawing::Color::Orange;
			this->bpg->Location = System::Drawing::Point(163, 658);
			this->bpg->Name = L"bpg";
			this->bpg->Size = System::Drawing::Size(0, 28);
			this->bpg->TabIndex = 35;
			// 
			// mpg
			// 
			this->mpg->AutoSize = true;
			this->mpg->BackColor = System::Drawing::Color::Transparent;
			this->mpg->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mpg->ForeColor = System::Drawing::Color::Orange;
			this->mpg->Location = System::Drawing::Point(342, 658);
			this->mpg->Name = L"mpg";
			this->mpg->Size = System::Drawing::Size(0, 28);
			this->mpg->TabIndex = 36;
			// 
			// rpg
			// 
			this->rpg->AutoSize = true;
			this->rpg->BackColor = System::Drawing::Color::Transparent;
			this->rpg->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rpg->ForeColor = System::Drawing::Color::Orange;
			this->rpg->Location = System::Drawing::Point(342, 516);
			this->rpg->Name = L"rpg";
			this->rpg->Size = System::Drawing::Size(0, 28);
			this->rpg->TabIndex = 37;
			// 
			// apg
			// 
			this->apg->AutoSize = true;
			this->apg->BackColor = System::Drawing::Color::Transparent;
			this->apg->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apg->ForeColor = System::Drawing::Color::Orange;
			this->apg->Location = System::Drawing::Point(163, 516);
			this->apg->Name = L"apg";
			this->apg->Size = System::Drawing::Size(0, 28);
			this->apg->TabIndex = 38;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(403, 46);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(334, 310);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 39;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->apg);
			this->Controls->Add(this->rpg);
			this->Controls->Add(this->mpg);
			this->Controls->Add(this->bpg);
			this->Controls->Add(this->spg);
			this->Controls->Add(this->ppg);
			this->Controls->Add(this->p20);
			this->Controls->Add(this->p19);
			this->Controls->Add(this->p17);
			this->Controls->Add(this->p18);
			this->Controls->Add(this->p14);
			this->Controls->Add(this->p15);
			this->Controls->Add(this->p16);
			this->Controls->Add(this->p13);
			this->Controls->Add(this->p11);
			this->Controls->Add(this->p12);
			this->Controls->Add(this->p8);
			this->Controls->Add(this->p9);
			this->Controls->Add(this->p10);
			this->Controls->Add(this->p7);
			this->Controls->Add(this->p5);
			this->Controls->Add(this->p6);
			this->Controls->Add(this->p2);
			this->Controls->Add(this->p3);
			this->Controls->Add(this->p4);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->teamName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->wc);
			this->Controls->Add(this->ec);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->teamName->Text = this->ec->SelectedItem->ToString();
		std::string team = msclr::interop::marshal_as<std::string>(this->ec->SelectedItem->ToString());
		std::vector<std::string>players = m.getTeam(team);
		printPlayers(players, team);
		this->pictureBox2->Load(this->ec->SelectedItem->ToString() + ".png");
		
		
	}
	private: System::Void wc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->teamName->Text = this->wc->SelectedItem->ToString();
		std::string team = msclr::interop::marshal_as<std::string>(this->wc->SelectedItem->ToString());
		std::vector<std::string>players = m.getTeam(team);
		printPlayers(players, team);
		this->pictureBox2->Load(this->wc->SelectedItem->ToString() + ".png");
	}

	private: System::Void printPlayers(std::vector<std::string> players, std::string team) {
		String^ holder;
		players = m.getTeam(team);
		unsigned int i = 0;
		//Player 1
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p1->Text = holder;
			this->p1->Enabled = true;
			i++;
		}
		else {
			this->p1->Enabled = false;
			this->p1->Text = "";
		}
		//Player 2
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p2->Text = holder;
			this->p2->Enabled = true;
			i++;
		}
		else {
			this->p2->Enabled = false;
			this->p2->Text = "";
		}
		//Player 3
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p3->Text = holder;
			this->p3->Enabled = true;
			i++;
		}
		else {
			this->p3->Enabled = false;
			this->p3->Text = "";
		}
		//Player 4
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p4->Text = holder;
			this->p4->Enabled = true;
			i++;
		}
		else {
			this->p4->Enabled = false;
			this->p4->Text = "";
		}
		//Player 5
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p5->Text = holder;
			this->p5->Enabled = true;
			i++;
		}
		else {
			this->p5->Enabled = false;
			this->p5->Text = "";
		}
		//Player 6
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p6->Text = holder;
			this->p6->Enabled = true;
			i++;
		}
		else {
			this->p6->Enabled = false;
			this->p6->Text = "";
		}
		//Player 7
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p7->Text = holder;
			this->p7->Enabled = true;
			i++;
		}
		else {
			this->p7->Enabled = false;
			this->p7->Text = "";
		}
		//Player 8
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p8->Text = holder;
			this->p8->Enabled = true;
			i++;
		}
		else {
			this->p8->Enabled = false;
			this->p8->Text = "";
		}
		//Player 9
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p9->Text = holder;
			this->p9->Enabled = true;
			i++;
		}
		else {
			this->p9->Enabled = false;
			this->p9->Text = "";
		}
		//Player 10
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p10->Text = holder;
			this->p10->Enabled = true;
			i++;
		}
		else {
			this->p10->Enabled = false;
			this->p10->Text = "";
		}
		//Player 11
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p11->Text = holder;
			this->p11->Enabled = true;
			i++;
		}
		else {
			this->p11->Enabled = false;
			this->p11->Text = "";
		}
		//Player 12
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p12->Text = holder;
			this->p12->Enabled = true;
			i++;
		}
		else {
			this->p12->Enabled = false;
			this->p12->Text = "";
		}
		//Player 13
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p13->Text = holder;
			this->p13->Enabled = true;
			i++;
		}
		else {
			this->p13->Enabled = false;
			this->p13->Text = "";
		}
		//Player 14
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p14->Text = holder;
			this->p14->Enabled = true;
			i++;
		}
		else {
			this->p14->Enabled = false;
			this->p14->Text = "";
		}
		//Player 15
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p15->Text = holder;
			this->p15->Enabled = true;
			i++;
		}
		else {
			this->p15->Enabled = false;
			this->p15->Text = "";
		}
		//Player 16
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p16->Text = holder;
			this->p16->Enabled = true;
			i++;
		}
		else {
			this->p16->Enabled = false;
			this->p16->Text = "";
		}
		//Player 17
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p17->Text = holder;
			this->p17->Enabled = true;
			i++;
		}
		else {
			this->p17->Enabled = false;
			this->p17->Text = "";
		}
		//Player 18
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p18->Text = holder;
			this->p18->Enabled = true;
			i++;
		}
		else {
			this->p18->Enabled = false;
			this->p18->Text = "";
		}
		//Player 19
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p19->Text = holder;
			this->p19->Enabled = true;
			i++;
		}
		else {
			this->p19->Enabled = false;
			this->p19->Text = "";
		}
		//Player 20
		if (i < players.size()) {
			holder = gcnew String(players[i].c_str());
			this->p20->Text = holder;
			this->p20->Enabled = true;
			i++;
		}
		else {
			this->p20->Enabled = false;
			this->p20->Text = "";
		}

	}

	private: System::Void printStats(String^ player) {
		std::string name = msclr::interop::marshal_as<std::string>(player);
		Player play = m.getPlayer(name);

		//Show ppg
		this->ppg->Text = play._pts.ToString();
		//Show apg
		this->apg->Text = play._ast.ToString();
		//Show rpg
		float reb = (play._drb + play._orb);
		this->rpg->Text = reb.ToString();
		//Show mpg
		this->mpg->Text = play._minsPlayed.ToString();
		//Show spg
		this->spg->Text = play._stl.ToString();
		//Show bpg
		this->bpg->Text = play._blk.ToString();
	}

	private: System::Void p1_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p1->Text);
	}
	
	private: System::Void p2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p2->Text);
	}
	private: System::Void p3_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p3->Text);
	}
	private: System::Void p4_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p4->Text);
	}
	private: System::Void p5_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p5->Text);
	}
	private: System::Void p6_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p6->Text);
	}
	private: System::Void p7_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p7->Text);
	}
	private: System::Void p8_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p8->Text);
	}
	private: System::Void p9_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p9->Text);
	}
	private: System::Void p10_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p10->Text);
	}
	private: System::Void p11_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p11->Text);
	}
	private: System::Void p12_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p12->Text);
	}
	private: System::Void p13_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p13->Text);
	}
	private: System::Void p14_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p14->Text);
	}
	private: System::Void p15_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p15->Text);
	}
	private: System::Void p16_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p16->Text);
	}
	private: System::Void p17_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p17->Text);
	}
	private: System::Void p18_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p18->Text);
	}
	private: System::Void p19_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p19->Text);
	}
	private: System::Void p20_Click(System::Object^ sender, System::EventArgs^ e) {
		printStats(this->p20->Text);
	}

};
}