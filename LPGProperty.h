#pragma once
#include <msclr/marshal.h>
#include "SUGSpr.h"
#include "Vars.h"
#include "SugSprWin.h"
namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LPGProperty
	/// </summary>
	public ref class LPGProperty : public System::Windows::Forms::Form
	{
	private: SugSprWin^ parentform;
	public:
		LPGProperty(SugSprWin^ parent)
		{
			InitializeComponent();
			parentform = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LPGProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ ECpG;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ELG;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ ENuG;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ ESigmaF;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ ECpF;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ ENuF;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ELF;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ ECKP;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ ENuKP;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ ELKR;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ NasTBL;







	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ Davl;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridView^ Temper;



	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ RKTbl;

	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::DataGridView^ EKTbl;







	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::TextBox^ Marka;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nomer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ECpG = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ELG = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ENuG = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ESigmaF = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ECpF = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ENuF = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ELF = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->ECKP = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ENuKP = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ELKR = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->NasTBL = (gcnew System::Windows::Forms::DataGridView());
			this->nomer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Davl = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Temper = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->RKTbl = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->EKTbl = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Marka = (gcnew System::Windows::Forms::TextBox());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NasTBL))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Davl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Temper))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RKTbl))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EKTbl))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(598, 370);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->ECpG);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->ELG);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->ENuG);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->ESigmaF);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->ECpF);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->ENuF);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->ELF);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(590, 341);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"теплофизические свойства";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// ECpG
			// 
			this->ECpG->Location = System::Drawing::Point(410, 188);
			this->ECpG->Name = L"ECpG";
			this->ECpG->Size = System::Drawing::Size(174, 24);
			this->ECpG->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(103, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(301, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Удельная теплоемкость газа, кДж/(кг*К):";
			// 
			// ELG
			// 
			this->ELG->Location = System::Drawing::Point(410, 158);
			this->ELG->Name = L"ELG";
			this->ELG->Size = System::Drawing::Size(174, 24);
			this->ELG->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(122, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(282, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Коэффициент теплопроводности газа:";
			// 
			// ENuG
			// 
			this->ENuG->Location = System::Drawing::Point(410, 130);
			this->ENuG->Name = L"ENuG";
			this->ENuG->Size = System::Drawing::Size(174, 24);
			this->ENuG->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(190, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Коэффициент вязкости газа:";
			// 
			// ESigmaF
			// 
			this->ESigmaF->Location = System::Drawing::Point(410, 102);
			this->ESigmaF->Name = L"ESigmaF";
			this->ESigmaF->Size = System::Drawing::Size(174, 24);
			this->ESigmaF->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(172, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Поверхностное натяжение, Н/м:";
			// 
			// ECpF
			// 
			this->ECpF->Location = System::Drawing::Point(410, 73);
			this->ECpF->Name = L"ECpF";
			this->ECpF->Size = System::Drawing::Size(174, 24);
			this->ECpF->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(65, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(339, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Удельная теплоемкость жидкости, кДж/(кг*К):";
			// 
			// ENuF
			// 
			this->ENuF->Location = System::Drawing::Point(410, 45);
			this->ENuF->Name = L"ENuF";
			this->ENuF->Size = System::Drawing::Size(174, 24);
			this->ENuF->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(81, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(323, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Кинематическая вязкость жидкости, кв.м./с:";
			// 
			// ELF
			// 
			this->ELF->Location = System::Drawing::Point(410, 17);
			this->ELF->Name = L"ELF";
			this->ELF->Size = System::Drawing::Size(174, 24);
			this->ELF->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Коэффициент теплопроводности жидкости, Вт/(м*К):";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->NasTBL);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(590, 341);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Состояние насыщения";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->ECKP);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->ENuKP);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->ELKR);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(6, 232);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(578, 103);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры в критической точке";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(527, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(33, 33);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Ок";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(515, 50);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(57, 22);
			this->textBox11->TabIndex = 16;
			this->textBox11->Visible = false;
			// 
			// ECKP
			// 
			this->ECKP->Location = System::Drawing::Point(319, 80);
			this->ECKP->Name = L"ECKP";
			this->ECKP->Size = System::Drawing::Size(174, 22);
			this->ECKP->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(46, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(267, 18);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Удельная теплоемкость, кДж/(кг*К):";
			// 
			// ENuKP
			// 
			this->ENuKP->Location = System::Drawing::Point(319, 48);
			this->ENuKP->Name = L"ENuKP";
			this->ENuKP->Size = System::Drawing::Size(174, 22);
			this->ENuKP->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(58, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(255, 18);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Кинематическая вязкость, кв.м./с.:";
			// 
			// ELKR
			// 
			this->ELKR->Location = System::Drawing::Point(319, 21);
			this->ELKR->Name = L"ELKR";
			this->ELKR->Size = System::Drawing::Size(174, 22);
			this->ELKR->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(-3, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(316, 18);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Коэффициент Теплопроводности, Вт/(м*К):";
			// 
			// NasTBL
			// 
			this->NasTBL->ColumnHeadersHeight = 29;
			this->NasTBL->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->NasTBL->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->nomer, this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->NasTBL->Location = System::Drawing::Point(6, 6);
			this->NasTBL->Name = L"NasTBL";
			this->NasTBL->RowHeadersWidth = 51;
			this->NasTBL->RowTemplate->Height = 24;
			this->NasTBL->Size = System::Drawing::Size(578, 220);
			this->NasTBL->TabIndex = 0;
			// 
			// nomer
			// 
			this->nomer->HeaderText = L"";
			this->nomer->MinimumWidth = 6;
			this->nomer->Name = L"nomer";
			this->nomer->Width = 40;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"P, бар";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 85;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Т, °К";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ro жидк.";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 85;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Энт. жидк.";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 95;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Ro газа";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 90;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Энт. газа";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 95;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(590, 341);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Сверхкритическое состояние";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Location = System::Drawing::Point(6, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(578, 329);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Silver;
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->Davl);
			this->tabPage4->Controls->Add(this->Temper);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(570, 300);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Тмпературы и давления";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(91, 253);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(417, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Подготовить таблицы плотностей и энтальпий";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LPGProperty::button2_Click);
			// 
			// Davl
			// 
			this->Davl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Davl->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->Davl->Location = System::Drawing::Point(306, 6);
			this->Davl->Name = L"Davl";
			this->Davl->RowHeadersWidth = 51;
			this->Davl->RowTemplate->Height = 24;
			this->Davl->Size = System::Drawing::Size(258, 241);
			this->Davl->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Давление, бар";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 208;
			// 
			// Temper
			// 
			this->Temper->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Temper->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column7 });
			this->Temper->Location = System::Drawing::Point(6, 6);
			this->Temper->Name = L"Temper";
			this->Temper->RowHeadersWidth = 51;
			this->Temper->RowTemplate->Height = 24;
			this->Temper->Size = System::Drawing::Size(258, 241);
			this->Temper->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->RKTbl);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(570, 300);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Плотности";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// RKTbl
			// 
			this->RKTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RKTbl->Location = System::Drawing::Point(6, 6);
			this->RKTbl->Name = L"RKTbl";
			this->RKTbl->RowHeadersWidth = 51;
			this->RKTbl->RowTemplate->Height = 24;
			this->RKTbl->Size = System::Drawing::Size(558, 288);
			this->RKTbl->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->EKTbl);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(570, 300);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"Энтальпии";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// EKTbl
			// 
			this->EKTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EKTbl->Location = System::Drawing::Point(6, 6);
			this->EKTbl->Name = L"EKTbl";
			this->EKTbl->RowHeadersWidth = 51;
			this->EKTbl->RowTemplate->Height = 24;
			this->EKTbl->Size = System::Drawing::Size(558, 288);
			this->EKTbl->TabIndex = 1;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(144, 388);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(113, 33);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Ок";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &LPGProperty::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(263, 388);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 33);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Отмена";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &LPGProperty::button7_Click);
			// 
			// Marka
			// 
			this->Marka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Marka->Location = System::Drawing::Point(382, 393);
			this->Marka->Name = L"Marka";
			this->Marka->Size = System::Drawing::Size(213, 23);
			this->Marka->TabIndex = 3;
			this->Marka->Text = L"Введите Марку СУГ(Название)";
			this->Marka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Температура, К";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 208;
			// 
			// LPGProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 433);
			this->Controls->Add(this->Marka);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->tabControl1);
			this->Name = L"LPGProperty";
			this->ShowIcon = false;
			this->Text = L"Свойство СУГ";
			this->Load += gcnew System::EventHandler(this, &LPGProperty::LPGProperty_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NasTBL))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Davl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Temper))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RKTbl))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EKTbl))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void LPGProperty_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		TSUG ASUG;
		msclr::interop::marshal_context context;
		ASUG.Name = context.marshal_as<const char*>(Marka->Text);
		ASUG.LF = atof(context.marshal_as<const char*>(ELF->Text));
		ASUG.NuF = atof(context.marshal_as<const char*>(ENuF->Text));
		ASUG.LG = atof(context.marshal_as<const char*>(ELG->Text));
		ASUG.CpG = atof(context.marshal_as<const char*>(ECpG->Text));
		ASUG.LKR = atof(context.marshal_as<const char*>(ELKR->Text));
		ASUG.NuKR = atof(context.marshal_as<const char*>(ENuKP->Text));
		ASUG.CKP = atof(context.marshal_as<const char*>(ECKP->Text));
		ASUG.CpF = atof(context.marshal_as<const char*>(ECpF->Text));
		ASUG.SigmaF = atof(context.marshal_as<const char*>(ESigmaF->Text));
		ASUG.NuG = atof(context.marshal_as<const char*>(ENuG->Text));
		for (int i = 0; i < NS; i++)
		{
			ASUG.PS[i] = atof(context.marshal_as<const char*>(NasTBL[0, i]->Value->ToString()));
			ASUG.TS[i] = atof(context.marshal_as<const char*>(NasTBL[1, i]->Value->ToString()));
			ASUG.RF[i] = atof(context.marshal_as<const char*>(NasTBL[2, i]->Value->ToString()));
			ASUG.EF[i] = atof(context.marshal_as<const char*>(NasTBL[3, i]->Value->ToString()));
			ASUG.RG[i] = atof(context.marshal_as<const char*>(NasTBL[4, i]->Value->ToString()));
			ASUG.EG[i] = atof(context.marshal_as<const char*>(NasTBL[5, i]->Value->ToString()));
		}
		for (int i = 0; i < 50; i++)
		{
			ASUG.TK[i] = atof(context.marshal_as<const char*>(Temper[0, i]->Value->ToString()));
			ASUG.PK[i] = atof(context.marshal_as<const char*>(Davl[0, i]->Value->ToString()));
		}
		for (int i = 0; i < 50; i++)
			for (int j = 0; j < 50; j++)
			{
				ASUG.RK[i][j] = atof(context.marshal_as<const char*>(RKTbl[i, j]->Value->ToString()));
				ASUG.EK[i][j] = atof(context.marshal_as<const char*>(EKTbl[i, j]->Value->ToString()));
			}
		SUG = ASUG;
		parentform->Add_SUG(ASUG);
		Close();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < 50; i++)
		{
			RKTbl[i, 0] = Temper[1, i];
			RKTbl[0, i] = Davl[1, i];
			EKTbl[i, 0] = Temper[1, i];
			EKTbl[0, i] = Davl[1, i];
		}
	}
	public: void GetSUGProp(TSUG ASUG)
	{
		if (ASUG.Name.size() == 0)
			Text = "Свойство СУГ - без названия";
		else
		{
			Text = "Свойства СУГ - " + gcnew String(ASUG.Name.c_str());
			Marka->Text = gcnew String(ASUG.Name.c_str());
		}
		ELF->Text = gcnew String(ConvertNum(ASUG.LF).c_str());
		ENuF->Text = gcnew String(ConvertNum(ASUG.NuF).c_str());
		ECpF->Text = gcnew String(ConvertNum(ASUG.CpF).c_str());
		ESigmaF->Text = gcnew String(ConvertNum(ASUG.SigmaF).c_str());
		ENuG->Text = gcnew String(ConvertNum(ASUG.NuG).c_str());
		ELG->Text = gcnew String(ConvertNum(ASUG.LG).c_str());
		ECpG->Text = gcnew String(ConvertNum(ASUG.CpG).c_str());
		ELKR->Text = gcnew String(ConvertNum(ASUG.LKR).c_str());
		ENuKP->Text = gcnew String(ConvertNum(ASUG.NuKR).c_str());
		ECKP->Text = gcnew String(ConvertNum(ASUG.CKP).c_str());
		NasTBL->RowCount = 51;
		NasTBL->ColumnCount = 7;
		Temper->ColumnCount = 2;
		Temper->RowCount = 51;
		Davl->ColumnCount = 2;
		Davl->RowCount = 51;
		RKTbl->ColumnCount = 51;
		RKTbl->RowCount = 51;
		EKTbl->ColumnCount = 51;
		EKTbl->RowCount = 51;
		
		for (int i = 0; i < NS; i++)
		{
			NasTBL->Rows[i]->HeaderCell->Value = gcnew String(std::to_string(i+1).c_str());
			NasTBL[0, i]->Value = ASUG.PS[i];
			NasTBL[1, i]->Value = ASUG.TS[i];
			NasTBL[2, i]->Value = ASUG.RF[i];
			NasTBL[3, i]->Value = ASUG.EF[i];
			NasTBL[4, i]->Value = ASUG.RG[i];
			NasTBL[5, i]->Value = ASUG.EG[i];
		}
		for (int i = 0; i < 50; i++)
			for (int j = 0; j < 50; j++)
			{
				RKTbl[i, j]->Value = ASUG.RK[i][j];
				EKTbl[i, j]->Value = ASUG.EK[i][j];
			}
		NasTBL->Columns[0]->HeaderText = "P, бар";
		NasTBL->Columns[1]->HeaderText = "T, °K";
		NasTBL->Columns[2]->HeaderText = "Ro жидк.";
		NasTBL->Columns[3]->HeaderText = "Энт. жидк.";
		NasTBL->Columns[4]->HeaderText = "Ro газа";
		NasTBL->Columns[5]->HeaderText = "Энт. газа";
		for (int i = 0; i < 50; i++)
		{
			Temper->Rows[i]->HeaderCell->Value = gcnew String(std::to_string(i + 1).c_str());
			Davl->Rows[i]->HeaderCell->Value = gcnew String(std::to_string(i + 1).c_str());
			Temper[0, i]->Value = ASUG.TK[i];
			Davl[0, i]->Value = ASUG.PK[i];
		}
		Show();
	}
};
}
