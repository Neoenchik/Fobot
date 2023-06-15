#pragma once
#include <msclr/marshal.h>
#include "MainWin.h"
namespace Fobot {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SourceData
	/// </summary>
	public ref class SourceData : public System::Windows::Forms::Form
	{
	private: MainWin^ parents = gcnew MainWin();
	public:
		SourceData(MainWin^ parent)
		{
			InitializeComponent();
			parents = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SourceData()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ button1;
	protected:
	public: System::Windows::Forms::Button^ button2;


	public: System::Windows::Forms::ToolTip^ toolTip1;
	public: System::Windows::Forms::TabPage^ tabPage4;
	public: System::Windows::Forms::TabPage^ tabPage3;
	public: System::Windows::Forms::Label^ label20;
	public: System::Windows::Forms::Label^ label21;
	public: System::Windows::Forms::TextBox^ EMMSUG;


	public: System::Windows::Forms::TextBox^ EMSUG;

	public: System::Windows::Forms::GroupBox^ groupBox4;
	public: System::Windows::Forms::Label^ label26;
	public: System::Windows::Forms::TextBox^ ECpG;

	public: System::Windows::Forms::Label^ label27;
	public: System::Windows::Forms::TextBox^ ELG;

	public: System::Windows::Forms::Label^ label28;
	public: System::Windows::Forms::TextBox^ ENuG;

	public: System::Windows::Forms::Button^ button8;
	public: System::Windows::Forms::Label^ label22;
	public: System::Windows::Forms::TextBox^ ESigmaF;

	public: System::Windows::Forms::Label^ label23;
	public: System::Windows::Forms::TextBox^ ECpF;

	public: System::Windows::Forms::Label^ label24;
	public: System::Windows::Forms::TextBox^ ENuF;

	public: System::Windows::Forms::Label^ label25;
	public: System::Windows::Forms::TextBox^ ELF;

	public: System::Windows::Forms::TabPage^ tabPage2;
	public: System::Windows::Forms::TabControl^ tabControl2;
	public: System::Windows::Forms::TabPage^ tabPage5;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::TextBox^ EDIS;

	public: System::Windows::Forms::TextBox^ ESIZ;

	public: System::Windows::Forms::GroupBox^ groupBox2;
	public: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::TextBox^ ELIS;

	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::TextBox^ ECIS;

	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::TextBox^ ERIS;

	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::TextBox^ EMIS;

	public: System::Windows::Forms::TabPage^ tabPage6;
	public: System::Windows::Forms::Label^ label19;
	public: System::Windows::Forms::TextBox^ EDZP;

	public: System::Windows::Forms::GroupBox^ groupBox3;
	public: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::TextBox^ ELZP;

	public: System::Windows::Forms::Label^ label16;
public: System::Windows::Forms::TextBox^ ECZP;

	public: System::Windows::Forms::Label^ label17;
public: System::Windows::Forms::TextBox^ ERZP;

	public: System::Windows::Forms::Label^ label18;
public: System::Windows::Forms::TextBox^ EMZP;

	public: System::Windows::Forms::TabPage^ tabPage7;
	public: System::Windows::Forms::Button^ button7;
	public: System::Windows::Forms::Button^ button6;
public: System::Windows::Forms::ListBox^ KlapList;

	public: System::Windows::Forms::TabControl^ tabControl1;
	public: System::Windows::Forms::TabPage^ tabPage1;
	public: System::Windows::Forms::GroupBox^ groupBox1;
	public: System::Windows::Forms::Label^ label29;
public: System::Windows::Forms::TextBox^ ELST;

	public: System::Windows::Forms::Label^ label30;
public: System::Windows::Forms::TextBox^ ECST;

	public: System::Windows::Forms::Label^ label31;
public: System::Windows::Forms::TextBox^ ERST;

	public: System::Windows::Forms::Label^ label32;
public: System::Windows::Forms::TextBox^ EDST;

	public: System::Windows::Forms::Label^ label33;
public: System::Windows::Forms::TextBox^ EMat;

	public: System::Windows::Forms::Label^ label34;
public: System::Windows::Forms::TextBox^ EV;

	public: System::Windows::Forms::Label^ label35;
public: System::Windows::Forms::TextBox^ ED;
public: System::Windows::Forms::Button^ ButtonTypeTank;


	public: System::Windows::Forms::Label^ label1;
public: System::Windows::Forms::CheckBox^ LightProtect;

	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::TextBox^ textBox7;
	public: System::Windows::Forms::TextBox^ textBox8;
	public: System::Windows::Forms::TextBox^ textBox9;
	public: System::Windows::Forms::TextBox^ textBox10;
	public: System::Windows::Forms::TextBox^ textBox11;
	public: System::Windows::Forms::TextBox^ textBox12;
	public: System::Windows::Forms::TextBox^ textBox13;
public: System::Windows::Forms::Label^ label42;
public: System::Windows::Forms::TextBox^ EPTank;

public: System::Windows::Forms::Label^ label41;
public: System::Windows::Forms::TextBox^ EALF;

public: System::Windows::Forms::Label^ label40;
public: System::Windows::Forms::TextBox^ ETW;

public: System::Windows::Forms::GroupBox^ groupBox5;
public: System::Windows::Forms::ComboBox^ comboBox1;
public: System::Windows::Forms::Label^ label36;
public: System::Windows::Forms::TextBox^ ETauP;

public: System::Windows::Forms::Label^ label37;
public: System::Windows::Forms::TextBox^ EQF;

public: System::Windows::Forms::Label^ label38;
public: System::Windows::Forms::TextBox^ EFF;
public: System::Windows::Forms::Label^ label39;
private: System::ComponentModel::IContainer^ components;
public:








































	public:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->EPTank = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->EALF = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->ETW = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->ETauP = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->EQF = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->EFF = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->EMMSUG = (gcnew System::Windows::Forms::TextBox());
			this->EMSUG = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->ECpG = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->ELG = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->ENuG = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->ESigmaF = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->ECpF = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->ENuF = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->ELF = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->EDIS = (gcnew System::Windows::Forms::TextBox());
			this->ESIZ = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ELIS = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ECIS = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ERIS = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->EMIS = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->EDZP = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->ELZP = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ECZP = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->ERZP = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->EMZP = (gcnew System::Windows::Forms::TextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->KlapList = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->ELST = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->ECST = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->ERST = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->EDST = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->EMat = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->EV = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->ED = (gcnew System::Windows::Forms::TextBox());
			this->ButtonTypeTank = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LightProtect = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(184, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SourceData::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(290, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вперед";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SourceData::button2_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipTitle = L"Теневая защита";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label42);
			this->tabPage4->Controls->Add(this->EPTank);
			this->tabPage4->Controls->Add(this->label41);
			this->tabPage4->Controls->Add(this->EALF);
			this->tabPage4->Controls->Add(this->label40);
			this->tabPage4->Controls->Add(this->ETW);
			this->tabPage4->Controls->Add(this->groupBox5);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(527, 290);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Характеристики процесса";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(6, 74);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(243, 17);
			this->label42->TabIndex = 9;
			this->label42->Text = L"Давление разрыва цистерны, МПа:";
			// 
			// EPTank
			// 
			this->EPTank->Location = System::Drawing::Point(257, 69);
			this->EPTank->Name = L"EPTank";
			this->EPTank->Size = System::Drawing::Size(264, 22);
			this->EPTank->TabIndex = 8;
			this->EPTank->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(68, 43);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(183, 17);
			this->label41->TabIndex = 7;
			this->label41->Text = L"Угол наклона цистерны, °:";
			// 
			// EALF
			// 
			this->EALF->Location = System::Drawing::Point(257, 38);
			this->EALF->Name = L"EALF";
			this->EALF->Size = System::Drawing::Size(264, 22);
			this->EALF->TabIndex = 6;
			this->EALF->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(6, 15);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(251, 17);
			this->label40->TabIndex = 5;
			this->label40->Text = L"Расчетная температура воздуха, °С:";
			// 
			// ETW
			// 
			this->ETW->Location = System::Drawing::Point(257, 10);
			this->ETW->Name = L"ETW";
			this->ETW->Size = System::Drawing::Size(264, 22);
			this->ETW->TabIndex = 4;
			this->ETW->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Controls->Add(this->label36);
			this->groupBox5->Controls->Add(this->ETauP);
			this->groupBox5->Controls->Add(this->label37);
			this->groupBox5->Controls->Add(this->EQF);
			this->groupBox5->Controls->Add(this->label38);
			this->groupBox5->Controls->Add(this->EFF);
			this->groupBox5->Location = System::Drawing::Point(6, 110);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(515, 174);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Вид аварийного режима";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1 степени", L"2 степени", L"3 степени", L"Произвольный" });
			this->comboBox1->Location = System::Drawing::Point(15, 21);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(494, 24);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SourceData::comboBox1_SelectedIndexChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(155, 115);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(155, 17);
			this->label36->TabIndex = 12;
			this->label36->Text = L"Время процесса, час.:";
			// 
			// ETauP
			// 
			this->ETauP->BackColor = System::Drawing::SystemColors::Window;
			this->ETauP->Enabled = false;
			this->ETauP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ETauP->Location = System::Drawing::Point(343, 112);
			this->ETauP->Name = L"ETauP";
			this->ETauP->Size = System::Drawing::Size(150, 23);
			this->ETauP->TabIndex = 11;
			this->ETauP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(40, 86);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(271, 17);
			this->label37->TabIndex = 10;
			this->label37->Text = L"Плотность теплового потока, КВт/кв.м.:";
			// 
			// EQF
			// 
			this->EQF->BackColor = System::Drawing::SystemColors::Window;
			this->EQF->Enabled = false;
			this->EQF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EQF->Location = System::Drawing::Point(343, 80);
			this->EQF->Name = L"EQF";
			this->EQF->Size = System::Drawing::Size(150, 23);
			this->EQF->TabIndex = 9;
			this->EQF->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(52, 54);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(259, 17);
			this->label38->TabIndex = 8;
			this->label38->Text = L"Площадь огневого воздействия, кв.м.:";
			// 
			// EFF
			// 
			this->EFF->BackColor = System::Drawing::SystemColors::Window;
			this->EFF->Enabled = false;
			this->EFF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EFF->Location = System::Drawing::Point(343, 51);
			this->EFF->Name = L"EFF";
			this->EFF->Size = System::Drawing::Size(150, 23);
			this->EFF->TabIndex = 7;
			this->EFF->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->EMMSUG);
			this->tabPage3->Controls->Add(this->EMSUG);
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(527, 290);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Перевозимый груз";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(227, 18);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(185, 17);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Молярная масса, кг/кмоль:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(3, 15);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(112, 17);
			this->label21->TabIndex = 8;
			this->label21->Text = L"Масса груза, кг:";
			// 
			// EMMSUG
			// 
			this->EMMSUG->Location = System::Drawing::Point(415, 15);
			this->EMMSUG->Name = L"EMMSUG";
			this->EMMSUG->Size = System::Drawing::Size(106, 22);
			this->EMMSUG->TabIndex = 7;
			this->EMMSUG->Text = L"0";
			this->EMMSUG->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EMSUG
			// 
			this->EMSUG->Location = System::Drawing::Point(111, 15);
			this->EMSUG->Name = L"EMSUG";
			this->EMSUG->Size = System::Drawing::Size(110, 22);
			this->EMSUG->TabIndex = 6;
			this->EMSUG->Text = L"0";
			this->EMSUG->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->ECpG);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->ELG);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Controls->Add(this->ENuG);
			this->groupBox4->Controls->Add(this->button8);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->ESigmaF);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->ECpF);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->ENuF);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->ELF);
			this->groupBox4->Location = System::Drawing::Point(3, 58);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(518, 226);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Свойства груза";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(61, 192);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(275, 17);
			this->label26->TabIndex = 19;
			this->label26->Text = L"Удельная теплоемкость газа,кДж/(кг*К):";
			// 
			// ECpG
			// 
			this->ECpG->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ECpG->Location = System::Drawing::Point(342, 189);
			this->ECpG->Name = L"ECpG";
			this->ECpG->Size = System::Drawing::Size(150, 22);
			this->ECpG->TabIndex = 18;
			this->ECpG->Text = L"0";
			this->ECpG->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(71, 164);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(265, 17);
			this->label27->TabIndex = 17;
			this->label27->Text = L"Коэффициент теплопроводности газа:";
			// 
			// ELG
			// 
			this->ELG->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ELG->Location = System::Drawing::Point(342, 161);
			this->ELG->Name = L"ELG";
			this->ELG->Size = System::Drawing::Size(150, 22);
			this->ELG->TabIndex = 16;
			this->ELG->Text = L"0";
			this->ELG->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(134, 136);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(200, 17);
			this->label28->TabIndex = 15;
			this->label28->Text = L"Коэффициент вязкости газа:";
			// 
			// ENuG
			// 
			this->ENuG->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ENuG->Location = System::Drawing::Point(341, 133);
			this->ENuG->Name = L"ENuG";
			this->ENuG->Size = System::Drawing::Size(150, 22);
			this->ENuG->TabIndex = 14;
			this->ENuG->Text = L"0";
			this->ENuG->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(200)));
			this->button8->Location = System::Drawing::Point(380, 0);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 21);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Выбрать";
			this->button8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &SourceData::button8_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(114, 105);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(220, 17);
			this->label22->TabIndex = 12;
			this->label22->Text = L"Поверхностное натяжение, Н/м:";
			// 
			// ESigmaF
			// 
			this->ESigmaF->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ESigmaF->Location = System::Drawing::Point(340, 105);
			this->ESigmaF->Name = L"ESigmaF";
			this->ESigmaF->Size = System::Drawing::Size(150, 22);
			this->ESigmaF->TabIndex = 11;
			this->ESigmaF->Text = L"0";
			this->ESigmaF->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(22, 82);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(313, 17);
			this->label23->TabIndex = 10;
			this->label23->Text = L"Удельная теплоемкость жидкости, кДж/(кг*К):";
			// 
			// ECpF
			// 
			this->ECpF->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ECpF->Location = System::Drawing::Point(341, 77);
			this->ECpF->Name = L"ECpF";
			this->ECpF->Size = System::Drawing::Size(150, 22);
			this->ECpF->TabIndex = 9;
			this->ECpF->Text = L"0";
			this->ECpF->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(34, 52);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(301, 17);
			this->label24->TabIndex = 8;
			this->label24->Text = L"Кинематическая вязкость жидкости, кв.м./с:";
			// 
			// ENuF
			// 
			this->ENuF->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ENuF->Location = System::Drawing::Point(341, 49);
			this->ENuF->Name = L"ENuF";
			this->ENuF->Size = System::Drawing::Size(150, 22);
			this->ENuF->TabIndex = 7;
			this->ENuF->Text = L"0";
			this->ENuF->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(12, 24);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(322, 15);
			this->label25->TabIndex = 6;
			this->label25->Text = L"Коэффициент теплопроводности жидкости, Вт/(м*К):";
			// 
			// ELF
			// 
			this->ELF->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ELF->Location = System::Drawing::Point(340, 21);
			this->ELF->Name = L"ELF";
			this->ELF->Size = System::Drawing::Size(150, 22);
			this->ELF->TabIndex = 5;
			this->ELF->Text = L"0";
			this->ELF->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(527, 290);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Средства защиты";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(6, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(508, 272);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->EDIS);
			this->tabPage5->Controls->Add(this->ESIZ);
			this->tabPage5->Controls->Add(this->groupBox2);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(500, 243);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Теплоизоляция";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(43, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 17);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Толщина изоляции, мм:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(25, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Прощадь покрытия, кв. м.:";
			// 
			// EDIS
			// 
			this->EDIS->Location = System::Drawing::Point(214, 40);
			this->EDIS->Name = L"EDIS";
			this->EDIS->Size = System::Drawing::Size(150, 22);
			this->EDIS->TabIndex = 2;
			this->EDIS->Text = L"0";
			this->EDIS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ESIZ
			// 
			this->ESIZ->Location = System::Drawing::Point(214, 12);
			this->ESIZ->Name = L"ESIZ";
			this->ESIZ->Size = System::Drawing::Size(150, 22);
			this->ESIZ->TabIndex = 1;
			this->ESIZ->Text = L"0";
			this->ESIZ->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->ELIS);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->ECIS);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->ERIS);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->EMIS);
			this->groupBox2->Location = System::Drawing::Point(3, 68);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(496, 174);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Материал";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(200)));
			this->button4->Location = System::Drawing::Point(380, 0);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 21);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Выбрать";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SourceData::button4_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(36, 105);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(298, 17);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Коэффициент теплопроводности, Вт/(м.*К):";
			// 
			// ELIS
			// 
			this->ELIS->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ELIS->Location = System::Drawing::Point(340, 105);
			this->ELIS->Name = L"ELIS";
			this->ELIS->Size = System::Drawing::Size(150, 22);
			this->ELIS->TabIndex = 11;
			this->ELIS->Text = L"0";
			this->ELIS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(154, 80);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(181, 17);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Теплоемкость, кДж/(кг*К):";
			// 
			// ECIS
			// 
			this->ECIS->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ECIS->Location = System::Drawing::Point(341, 77);
			this->ECIS->Name = L"ECIS";
			this->ECIS->Size = System::Drawing::Size(150, 22);
			this->ECIS->TabIndex = 9;
			this->ECIS->Text = L"0";
			this->ECIS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(190, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 17);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Плотность, кг/куб.м.:";
			// 
			// ERIS
			// 
			this->ERIS->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ERIS->Location = System::Drawing::Point(341, 49);
			this->ERIS->Name = L"ERIS";
			this->ERIS->Size = System::Drawing::Size(150, 22);
			this->ERIS->TabIndex = 7;
			this->ERIS->Text = L"0";
			this->ERIS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(280, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 17);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Марка:";
			// 
			// EMIS
			// 
			this->EMIS->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->EMIS->Location = System::Drawing::Point(340, 21);
			this->EMIS->Name = L"EMIS";
			this->EMIS->Size = System::Drawing::Size(150, 22);
			this->EMIS->TabIndex = 5;
			this->EMIS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label19);
			this->tabPage6->Controls->Add(this->EDZP);
			this->tabPage6->Controls->Add(this->groupBox3);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(500, 243);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Огнезащитное покрытие";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(39, 23);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(165, 17);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Толщина изоляции, мм:";
			// 
			// EDZP
			// 
			this->EDZP->Location = System::Drawing::Point(210, 20);
			this->EDZP->Name = L"EDZP";
			this->EDZP->Size = System::Drawing::Size(150, 22);
			this->EDZP->TabIndex = 5;
			this->EDZP->Text = L"0";
			this->EDZP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->ELZP);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->ECZP);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->ERZP);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->EMZP);
			this->groupBox3->Location = System::Drawing::Point(3, 63);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(496, 174);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Материал";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(200)));
			this->button5->Location = System::Drawing::Point(380, 0);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 21);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Выбрать";
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SourceData::button5_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(36, 105);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(298, 17);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Коэффициент теплопроводности, Вт/(м.*К):";
			// 
			// ELZP
			// 
			this->ELZP->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ELZP->Location = System::Drawing::Point(340, 105);
			this->ELZP->Name = L"ELZP";
			this->ELZP->Size = System::Drawing::Size(150, 22);
			this->ELZP->TabIndex = 11;
			this->ELZP->Text = L"0";
			this->ELZP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(154, 80);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(181, 17);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Теплоемкость, кДж/(кг*К):";
			// 
			// ECZP
			// 
			this->ECZP->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ECZP->Location = System::Drawing::Point(341, 77);
			this->ECZP->Name = L"ECZP";
			this->ECZP->Size = System::Drawing::Size(150, 22);
			this->ECZP->TabIndex = 9;
			this->ECZP->Text = L"0";
			this->ECZP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(190, 54);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(145, 17);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Плотность, кг/куб.м.:";
			// 
			// ERZP
			// 
			this->ERZP->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ERZP->Location = System::Drawing::Point(341, 49);
			this->ERZP->Name = L"ERZP";
			this->ERZP->Size = System::Drawing::Size(150, 22);
			this->ERZP->TabIndex = 7;
			this->ERZP->Text = L"0";
			this->ERZP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(280, 26);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(54, 17);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Марка:";
			// 
			// EMZP
			// 
			this->EMZP->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->EMZP->Location = System::Drawing::Point(340, 21);
			this->EMZP->Name = L"EMZP";
			this->EMZP->Size = System::Drawing::Size(150, 22);
			this->EMZP->TabIndex = 5;
			this->EMZP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->button7);
			this->tabPage7->Controls->Add(this->button6);
			this->tabPage7->Controls->Add(this->KlapList);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(500, 243);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Предохранительные клапаны";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(274, 205);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(152, 31);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Удалить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &SourceData::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(116, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(152, 31);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Добавить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SourceData::button6_Click);
			// 
			// KlapList
			// 
			this->KlapList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->KlapList->FormattingEnabled = true;
			this->KlapList->ItemHeight = 20;
			this->KlapList->Location = System::Drawing::Point(3, 3);
			this->KlapList->Name = L"KlapList";
			this->KlapList->Size = System::Drawing::Size(494, 184);
			this->KlapList->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(535, 319);
			this->tabControl1->TabIndex = 2;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &SourceData::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label39);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->ButtonTypeTank);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->LightProtect);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(527, 290);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Цистерны";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(33, 11);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(105, 17);
			this->label39->TabIndex = 22;
			this->label39->Text = L"Тип цистерны:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->ELST);
			this->groupBox1->Controls->Add(this->label30);
			this->groupBox1->Controls->Add(this->ECST);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->ERST);
			this->groupBox1->Controls->Add(this->label32);
			this->groupBox1->Controls->Add(this->EDST);
			this->groupBox1->Controls->Add(this->label33);
			this->groupBox1->Controls->Add(this->EMat);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->EV);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->ED);
			this->groupBox1->Location = System::Drawing::Point(6, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(515, 220);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Свойства цистерны";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(55, 186);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(294, 17);
			this->label29->TabIndex = 33;
			this->label29->Text = L"Коэффициент теплопроводности, Вт/(м*К):";
			// 
			// ELST
			// 
			this->ELST->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ELST->Location = System::Drawing::Point(357, 183);
			this->ELST->Name = L"ELST";
			this->ELST->Size = System::Drawing::Size(150, 22);
			this->ELST->TabIndex = 32;
			this->ELST->Text = L"0";
			this->ELST->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(62, 158);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(289, 17);
			this->label30->TabIndex = 31;
			this->label30->Text = L"Удельная теплоемкость стали, кДж/(кг*К):";
			// 
			// ECST
			// 
			this->ECST->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ECST->Location = System::Drawing::Point(357, 155);
			this->ECST->Name = L"ECST";
			this->ECST->Size = System::Drawing::Size(150, 22);
			this->ECST->TabIndex = 30;
			this->ECST->Text = L"0";
			this->ECST->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(164, 130);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(187, 17);
			this->label31->TabIndex = 29;
			this->label31->Text = L"Плотность стали, кг/куб.м.:";
			// 
			// ERST
			// 
			this->ERST->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ERST->Location = System::Drawing::Point(356, 127);
			this->ERST->Name = L"ERST";
			this->ERST->Size = System::Drawing::Size(150, 22);
			this->ERST->TabIndex = 28;
			this->ERST->Text = L"0";
			this->ERST->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(202, 102);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(147, 17);
			this->label32->TabIndex = 27;
			this->label32->Text = L"Толщина стенки, мм:";
			// 
			// EDST
			// 
			this->EDST->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->EDST->Location = System::Drawing::Point(355, 99);
			this->EDST->Name = L"EDST";
			this->EDST->Size = System::Drawing::Size(150, 22);
			this->EDST->TabIndex = 26;
			this->EDST->Text = L"0";
			this->EDST->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(222, 74);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(127, 17);
			this->label33->TabIndex = 25;
			this->label33->Text = L"Материал стенки:";
			// 
			// EMat
			// 
			this->EMat->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->EMat->Location = System::Drawing::Point(356, 71);
			this->EMat->Name = L"EMat";
			this->EMat->Size = System::Drawing::Size(150, 22);
			this->EMat->TabIndex = 24;
			this->EMat->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(148, 46);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(201, 17);
			this->label34->TabIndex = 23;
			this->label34->Text = L"Полная вместимость, куб. м.:";
			// 
			// EV
			// 
			this->EV->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->EV->Location = System::Drawing::Point(356, 43);
			this->EV->Name = L"EV";
			this->EV->Size = System::Drawing::Size(150, 22);
			this->EV->TabIndex = 22;
			this->EV->Text = L"0";
			this->EV->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(174, 18);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(175, 17);
			this->label35->TabIndex = 21;
			this->label35->Text = L"Внутренний Диаметр, м.:";
			// 
			// ED
			// 
			this->ED->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ED->Location = System::Drawing::Point(355, 15);
			this->ED->Name = L"ED";
			this->ED->Size = System::Drawing::Size(150, 22);
			this->ED->TabIndex = 20;
			this->ED->Text = L"0";
			this->ED->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ButtonTypeTank
			// 
			this->ButtonTypeTank->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonTypeTank->Location = System::Drawing::Point(144, 6);
			this->ButtonTypeTank->Name = L"ButtonTypeTank";
			this->ButtonTypeTank->Size = System::Drawing::Size(311, 25);
			this->ButtonTypeTank->TabIndex = 2;
			this->ButtonTypeTank->UseVisualStyleBackColor = true;
			this->ButtonTypeTank->Click += gcnew System::EventHandler(this, &SourceData::ButtonTypeTank_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(33, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 1;
			// 
			// LightProtect
			// 
			this->LightProtect->AutoSize = true;
			this->LightProtect->Location = System::Drawing::Point(461, 11);
			this->LightProtect->Name = L"LightProtect";
			this->LightProtect->Size = System::Drawing::Size(18, 17);
			this->LightProtect->TabIndex = 0;
			this->LightProtect->UseVisualStyleBackColor = true;
			this->LightProtect->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SourceData::checkBox1_MouseMove);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(132, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 17);
			this->label2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(99, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(201, 17);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(173, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 17);
			this->label4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(153, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 17);
			this->label5->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(113, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 17);
			this->label6->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(11, 150);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(289, 17);
			this->label7->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(294, 17);
			this->label8->TabIndex = 10;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(306, 10);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(177, 21);
			this->textBox7->TabIndex = 11;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(306, 37);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(177, 21);
			this->textBox8->TabIndex = 12;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(306, 64);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(177, 21);
			this->textBox9->TabIndex = 13;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(306, 92);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(177, 21);
			this->textBox10->TabIndex = 14;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(306, 119);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(177, 21);
			this->textBox11->TabIndex = 15;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(306, 146);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(177, 21);
			this->textBox12->TabIndex = 16;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(306, 173);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(177, 21);
			this->textBox13->TabIndex = 17;
			// 
			// SourceData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 373);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"SourceData";
			this->ShowIcon = false;
			this->Text = L"Исходные данные";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SourceData::SourceData_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SourceData::SourceData_Load);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int currIndex = 1;
		
		public: System::Void checkBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			toolTip1->Active=true;
		}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (comboBox1->Text == "1 степени")
		{
			EFF->Enabled = false;
			EFF->Text = "7";
			EQF->Text = "100";
			ETauP->Text = "4";
			EQF->Enabled = false;
			ETauP->Enabled = false;
		}
		else if (comboBox1->Text == "2 степени")
		{
			EFF->Enabled = false;
			EFF->Text = "50";
			EQF->Text = "100";
			ETauP->Text = "1";
			EQF->Enabled = false;
			ETauP->Enabled = false;
		}
		else if (comboBox1->Text == "3 степени")
		{
			EFF->Enabled = false;
			EFF->Text = "Вся поверхность";
			EQF->Text = "400";
			ETauP->Text = "2";
			EQF->Enabled = false;
			ETauP->Enabled = false;
		}
		else if (comboBox1->Text == "Произвольный")
		{
			EFF->Enabled = true;
			EQF->Enabled = true;
			ETauP->Enabled = true;
		}
	}
	private: System::Void ButtonTypeTank_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		currIndex++;
		if (currIndex > 3)
			button2->Text = "Готово";
		else
			button2->Text = "Далее";
		if (currIndex == 1)
			button1->Enabled = false;
		else
			button1->Enabled = true;
		if (currIndex > 4)
			Close();
		else
			tabControl1->SelectedIndex += 1;
	}
	public: void gettank(int index);
	
	private: System::Void SourceData_Load(System::Object^ sender, System::EventArgs^ e)\
	{
		currIndex = 1;
	}
		   bool isMatFire = false;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);

	public: void getmat(int index);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		currIndex--;
		if (currIndex == 1)
			button1->Enabled = false;
		else
			button1->Enabled = true;
		tabControl1->SelectedIndex -= 1;
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		currIndex = tabControl1->SelectedIndex + 1;
		if (currIndex > 3)
			button2->Text = "Готово";
		else
			button2->Text = "Далее";
		if (currIndex == 1)
			button1->Enabled = false;
		else
			button1->Enabled = true;
	}
	private: System::Void SourceData_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	public: void getklap(int index);
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
	public: void getSUG(int index);
};
}
