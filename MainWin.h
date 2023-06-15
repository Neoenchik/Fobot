#pragma once
#include "TankReference.h"
#include "SugSprWin.h"
#include "KlapanSprav.h"
#include "MaterialReferenceMain.h"
namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MainWin
	/// </summary>
	public ref class MainWin : public System::Windows::Forms::Form
	{
	public:
		MainWin(void)
		{
			InitializeComponent();
			setupData();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}
	public: void setupData();

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ïå÷àòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêàÏğèíòåğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ N12;

	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ N14;

	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâî÷íèêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ N16;
	private: System::Windows::Forms::ToolStripMenuItem^ N26;
	private: System::Windows::Forms::ToolStripMenuItem^ N27;
	private: System::Windows::Forms::ToolStripMenuItem^ N28;






	private: System::Windows::Forms::ToolStripMenuItem^ äàííûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ N21;

	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîìîùüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::Button^ NewBtn;
	private: System::Windows::Forms::Button^ OpenBtn;
	private: System::Windows::Forms::Button^ SaveBtn;
	private: System::Windows::Forms::Button^ CloseBtn;

	private: System::Windows::Forms::Button^ PrintBtn;
	private: System::Windows::Forms::Button^ CalcBtn;
	private: System::Windows::Forms::Button^ ErrBtn;
	private: System::Windows::Forms::Button^ MDBtn;








	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	public: System::Windows::Forms::DataGridView^ Prot;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TimeTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ParametrsTable;

	private:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWin::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1,
				1));
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1,
				1));
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïå÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîéêàÏğèíòåğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->N12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->N14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâî÷íèêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->N16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->N26 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->N27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->N28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äàííûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->N21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîìîùüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NewBtn = (gcnew System::Windows::Forms::Button());
			this->OpenBtn = (gcnew System::Windows::Forms::Button());
			this->SaveBtn = (gcnew System::Windows::Forms::Button());
			this->CloseBtn = (gcnew System::Windows::Forms::Button());
			this->PrintBtn = (gcnew System::Windows::Forms::Button());
			this->CalcBtn = (gcnew System::Windows::Forms::Button());
			this->ErrBtn = (gcnew System::Windows::Forms::Button());
			this->MDBtn = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Prot = (gcnew System::Windows::Forms::DataGridView());
			this->TimeTable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EventTable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ParametrsTable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prot))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->ñïğàâî÷íèêèToolStripMenuItem, this->äàííûåToolStripMenuItem, this->ïîìîùüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(666, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->ñîçäàòüToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->çàêğûòüToolStripMenuItem, this->toolStripMenuItem2, this->ñîõğàíèòüToolStripMenuItem, this->ñîõğàíèòüÊàêToolStripMenuItem,
					this->toolStripMenuItem3, this->ïå÷àòüToolStripMenuItem, this->íàñòğîéêàÏğèíòåğàToolStripMenuItem, this->toolStripMenuItem4,
					this->N12, this->toolStripMenuItem5, this->N14
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->ShortcutKeyDisplayString = L"F3";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			// 
			// çàêğûòüToolStripMenuItem
			// 
			this->çàêğûòüToolStripMenuItem->Name = L"çàêğûòüToolStripMenuItem";
			this->çàêğûòüToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->çàêğûòüToolStripMenuItem->Text = L"Çàêğûòü";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Enabled = false;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(242, 26);
			this->toolStripMenuItem2->Text = L"_________________________";
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->ShortcutKeyDisplayString = L"F2";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"Ñîõğàíèòü êàê...";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Enabled = false;
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(242, 26);
			this->toolStripMenuItem3->Text = L"_________________________";
			// 
			// ïå÷àòüToolStripMenuItem
			// 
			this->ïå÷àòüToolStripMenuItem->Name = L"ïå÷àòüToolStripMenuItem";
			this->ïå÷àòüToolStripMenuItem->ShortcutKeyDisplayString = L"F9";
			this->ïå÷àòüToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->ïå÷àòüToolStripMenuItem->Text = L"Ïå÷àòü";
			// 
			// íàñòğîéêàÏğèíòåğàToolStripMenuItem
			// 
			this->íàñòğîéêàÏğèíòåğàToolStripMenuItem->Name = L"íàñòğîéêàÏğèíòåğàToolStripMenuItem";
			this->íàñòğîéêàÏğèíòåğàToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->íàñòğîéêàÏğèíòåğàToolStripMenuItem->Text = L"Íàñòğîéêà ïğèíòåğà";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Enabled = false;
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(242, 26);
			this->toolStripMenuItem4->Text = L"_________________________";
			// 
			// N12
			// 
			this->N12->Name = L"N12";
			this->N12->Size = System::Drawing::Size(242, 26);
			this->N12->Text = L"Îïöèè";
			this->N12->Click += gcnew System::EventHandler(this, &MainWin::N12_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Enabled = false;
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(242, 26);
			this->toolStripMenuItem5->Text = L"_________________________";
			// 
			// N14
			// 
			this->N14->Name = L"N14";
			this->N14->Size = System::Drawing::Size(242, 26);
			this->N14->Text = L"Âûõîä";
			this->N14->Click += gcnew System::EventHandler(this, &MainWin::N14_Click);
			// 
			// ñïğàâî÷íèêèToolStripMenuItem
			// 
			this->ñïğàâî÷íèêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->N16,
					this->N26, this->N27, this->N28
			});
			this->ñïğàâî÷íèêèToolStripMenuItem->Name = L"ñïğàâî÷íèêèToolStripMenuItem";
			this->ñïğàâî÷íèêèToolStripMenuItem->Size = System::Drawing::Size(117, 24);
			this->ñïğàâî÷íèêèToolStripMenuItem->Text = L"Ñïğàâî÷íèêè";
			// 
			// N16
			// 
			this->N16->Name = L"N16";
			this->N16->Size = System::Drawing::Size(235, 26);
			this->N16->Text = L"Öèñòåğíû";
			this->N16->Click += gcnew System::EventHandler(this, &MainWin::N16_Click);
			// 
			// N26
			// 
			this->N26->Name = L"N26";
			this->N26->Size = System::Drawing::Size(235, 26);
			this->N26->Text = L"Ïåğåâîçèìûå ãğóçû";
			this->N26->Click += gcnew System::EventHandler(this, &MainWin::N26_Click);
			// 
			// N27
			// 
			this->N27->Name = L"N27";
			this->N27->Size = System::Drawing::Size(235, 26);
			this->N27->Text = L"Êëàïàíû";
			this->N27->Click += gcnew System::EventHandler(this, &MainWin::N27_Click);
			// 
			// N28
			// 
			this->N28->Name = L"N28";
			this->N28->Size = System::Drawing::Size(235, 26);
			this->N28->Text = L"Ìàòåğèàëû";
			this->N28->Click += gcnew System::EventHandler(this, &MainWin::MatReference_Click);
			// 
			// äàííûåToolStripMenuItem
			// 
			this->äàííûåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->N21,
					this->toolStripMenuItem6, this->ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem
			});
			this->äàííûåToolStripMenuItem->Name = L"äàííûåToolStripMenuItem";
			this->äàííûåToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->äàííûåToolStripMenuItem->Text = L"Äàííûå";
			// 
			// N21
			// 
			this->N21->Name = L"N21";
			this->N21->Size = System::Drawing::Size(242, 26);
			this->N21->Text = L"Èñõîäíûå...";
			this->N21->Click += gcnew System::EventHandler(this, &MainWin::N21_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(242, 26);
			this->toolStripMenuItem6->Text = L"_________________________";
			// 
			// ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem
			// 
			this->ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem->Name = L"ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem";
			this->ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->ğåçóëüòàòûĞàñ÷åòàToolStripMenuItem->Text = L"Ğåçóëüòàòû ğàñ÷åòà";
			// 
			// ïîìîùüToolStripMenuItem
			// 
			this->ïîìîùüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->îÏğîãğàììåToolStripMenuItem });
			this->ïîìîùüToolStripMenuItem->Name = L"ïîìîùüToolStripMenuItem";
			this->ïîìîùüToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->ïîìîùüToolStripMenuItem->Text = L"Ïîìîùü";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(196, 26);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå...";
			// 
			// NewBtn
			// 
			this->NewBtn->BackColor = System::Drawing::Color::White;
			this->NewBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewBtn.Image")));
			this->NewBtn->Location = System::Drawing::Point(12, 31);
			this->NewBtn->Name = L"NewBtn";
			this->NewBtn->Size = System::Drawing::Size(33, 32);
			this->NewBtn->TabIndex = 1;
			this->NewBtn->UseVisualStyleBackColor = false;
			this->NewBtn->Click += gcnew System::EventHandler(this, &MainWin::NewBtn_Click);
			// 
			// OpenBtn
			// 
			this->OpenBtn->BackColor = System::Drawing::Color::White;
			this->OpenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OpenBtn.Image")));
			this->OpenBtn->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->OpenBtn->Location = System::Drawing::Point(45, 31);
			this->OpenBtn->Name = L"OpenBtn";
			this->OpenBtn->Size = System::Drawing::Size(33, 32);
			this->OpenBtn->TabIndex = 2;
			this->OpenBtn->UseVisualStyleBackColor = false;
			// 
			// SaveBtn
			// 
			this->SaveBtn->BackColor = System::Drawing::Color::White;
			this->SaveBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SaveBtn.Image")));
			this->SaveBtn->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->SaveBtn->Location = System::Drawing::Point(78, 31);
			this->SaveBtn->Name = L"SaveBtn";
			this->SaveBtn->Size = System::Drawing::Size(33, 32);
			this->SaveBtn->TabIndex = 3;
			this->SaveBtn->UseVisualStyleBackColor = false;
			// 
			// CloseBtn
			// 
			this->CloseBtn->BackColor = System::Drawing::Color::White;
			this->CloseBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CloseBtn.Image")));
			this->CloseBtn->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->CloseBtn->Location = System::Drawing::Point(111, 31);
			this->CloseBtn->Name = L"CloseBtn";
			this->CloseBtn->Size = System::Drawing::Size(33, 32);
			this->CloseBtn->TabIndex = 4;
			this->CloseBtn->UseVisualStyleBackColor = false;
			this->CloseBtn->Click += gcnew System::EventHandler(this, &MainWin::CloseBtn_Click);
			// 
			// PrintBtn
			// 
			this->PrintBtn->BackColor = System::Drawing::Color::White;
			this->PrintBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PrintBtn.Image")));
			this->PrintBtn->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->PrintBtn->Location = System::Drawing::Point(144, 31);
			this->PrintBtn->Name = L"PrintBtn";
			this->PrintBtn->Size = System::Drawing::Size(33, 32);
			this->PrintBtn->TabIndex = 5;
			this->PrintBtn->UseVisualStyleBackColor = false;
			this->PrintBtn->Click += gcnew System::EventHandler(this, &MainWin::PrintBtn_Click);
			// 
			// CalcBtn
			// 
			this->CalcBtn->BackColor = System::Drawing::Color::White;
			this->CalcBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CalcBtn.Image")));
			this->CalcBtn->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->CalcBtn->Location = System::Drawing::Point(177, 31);
			this->CalcBtn->Name = L"CalcBtn";
			this->CalcBtn->Size = System::Drawing::Size(33, 32);
			this->CalcBtn->TabIndex = 6;
			this->CalcBtn->UseVisualStyleBackColor = false;
			this->CalcBtn->Click += gcnew System::EventHandler(this, &MainWin::CalcBtn_Click);
			// 
			// ErrBtn
			// 
			this->ErrBtn->BackColor = System::Drawing::Color::White;
			this->ErrBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ErrBtn.Image")));
			this->ErrBtn->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->ErrBtn->Location = System::Drawing::Point(210, 31);
			this->ErrBtn->Name = L"ErrBtn";
			this->ErrBtn->Size = System::Drawing::Size(33, 32);
			this->ErrBtn->TabIndex = 7;
			this->ErrBtn->UseVisualStyleBackColor = false;
			// 
			// MDBtn
			// 
			this->MDBtn->BackColor = System::Drawing::Color::White;
			this->MDBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MDBtn.Image")));
			this->MDBtn->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->MDBtn->Location = System::Drawing::Point(243, 31);
			this->MDBtn->Name = L"MDBtn";
			this->MDBtn->Size = System::Drawing::Size(33, 32);
			this->MDBtn->TabIndex = 8;
			this->MDBtn->UseVisualStyleBackColor = false;
			this->MDBtn->Click += gcnew System::EventHandler(this, &MainWin::MDBtn_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button9->Location = System::Drawing::Point(276, 31);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(33, 32);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button10->Location = System::Drawing::Point(309, 31);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(33, 32);
			this->button10->TabIndex = 10;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 69);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(654, 384);
			this->tabControl1->TabIndex = 11;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->chart2);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(646, 355);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ãğàôèêè";
			// 
			// chart2
			// 
			chartArea1->AxisX->Title = L"Âğåìÿ t, ìèí";
			chartArea1->AxisX2->Title = L"êóêó";
			chartArea1->AxisY->Title = L"Òåìïåğàòóğà T, C";
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			legend1->Title = L"Òåìïåğàòóğà";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(314, 0);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->Points->Add(dataPoint1);
			series1->XValueMember = L"0";
			series1->YValueMembers = L"0";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(331, 355);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			title1->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			title1->ForeColor = System::Drawing::Color::Blue;
			title1->Name = L"Title1";
			title1->Text = L"Èçìåíåíèå òåìïåğàòóğû ïî âğåìåíè";
			this->chart2->Titles->Add(title1);
			this->chart2->UseWaitCursor = true;
			// 
			// chart1
			// 
			chartArea2->AxisX->Title = L"âğåìÿ t, ìèí";
			chartArea2->AxisY->Title = L"Äàâëåíèå P, ÌÏà";
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(-4, 0);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Name = L"Series1";
			series2->Points->Add(dataPoint2);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(312, 355);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title2->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			title2->ForeColor = System::Drawing::Color::Blue;
			title2->Name = L"Title1";
			title2->Text = L"Èçìåíåíèå äàâëåíèÿ ïî âğåìåíè";
			this->chart1->Titles->Add(title2);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->Prot);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(646, 355);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ïğîòîêîë ñîáûòèé";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Prot
			// 
			this->Prot->AllowUserToAddRows = false;
			this->Prot->AllowUserToDeleteRows = false;
			this->Prot->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Prot->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->TimeTable, this->EventTable,
					this->ParametrsTable
			});
			this->Prot->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Prot->Location = System::Drawing::Point(3, 3);
			this->Prot->Name = L"Prot";
			this->Prot->ReadOnly = true;
			this->Prot->RowHeadersVisible = false;
			this->Prot->RowHeadersWidth = 51;
			this->Prot->RowTemplate->Height = 24;
			this->Prot->Size = System::Drawing::Size(640, 349);
			this->Prot->TabIndex = 0;
			// 
			// TimeTable
			// 
			this->TimeTable->Frozen = true;
			this->TimeTable->HeaderText = L"Âğåìÿ";
			this->TimeTable->MinimumWidth = 6;
			this->TimeTable->Name = L"TimeTable";
			this->TimeTable->ReadOnly = true;
			this->TimeTable->Width = 125;
			// 
			// EventTable
			// 
			this->EventTable->Frozen = true;
			this->EventTable->HeaderText = L"Ñîáûòèå";
			this->EventTable->MinimumWidth = 6;
			this->EventTable->Name = L"EventTable";
			this->EventTable->ReadOnly = true;
			this->EventTable->Width = 260;
			// 
			// ParametrsTable
			// 
			this->ParametrsTable->Frozen = true;
			this->ParametrsTable->HeaderText = L"Ïàğàìåòğû";
			this->ParametrsTable->MinimumWidth = 6;
			this->ParametrsTable->Name = L"ParametrsTable";
			this->ParametrsTable->ReadOnly = true;
			this->ParametrsTable->Width = 260;
			// 
			// MainWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 465);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->MDBtn);
			this->Controls->Add(this->ErrBtn);
			this->Controls->Add(this->CalcBtn);
			this->Controls->Add(this->PrintBtn);
			this->Controls->Add(this->CloseBtn);
			this->Controls->Add(this->SaveBtn);
			this->Controls->Add(this->OpenBtn);
			this->Controls->Add(this->NewBtn);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWin";
			this->Text = L"FOBOT 1.0";
			this->Load += gcnew System::EventHandler(this, &MainWin::MainWin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void N12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void N16_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void N26_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SugSprWin^ SUGSprav = gcnew SugSprWin();
		SUGSprav->Show();
	}
	private: System::Void N27_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		KlapanSprav^ klapansprav = gcnew KlapanSprav();
		klapansprav->Show();
	}
	private: System::Void MatReference_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MaterialReferenceMain^ reference = gcnew MaterialReferenceMain();
		reference->Show();
	}
	private: System::Void MainWin_Load(System::Object^ sender, System::EventArgs^ e);
	private: void CheckPrj();
	private: System::Void N14_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	private: System::Void NewBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void N21_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CloseBtn_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void MDBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CalcBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PrintBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		chart1->Printing->Print(true);
		chart2->Printing->Print(true);
	}
	public: void closesourcedata();
};
}
