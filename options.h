#pragma once
#include <fstream>
#include <string>
#include "Ftypes.h"
#include "SetupUnit.h"

extern struct TSetup SetUp;
namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для options
	/// </summary>
	public ref class options : public System::Windows::Forms::Form
	{
	public:
		options(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~options()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ OK;
	private: System::Windows::Forms::Button^ cancle;
	private: System::Windows::Forms::Button^ apply;

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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->cancle = (gcnew System::Windows::Forms::Button());
			this->apply = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(373, 191);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->numericUpDown1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(365, 162);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Общие";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Кол-во знаков после запятой:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(225, 6);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(96, 22);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(25, 212);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(97, 32);
			this->OK->TabIndex = 1;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &options::OK_Click);
			// 
			// cancle
			// 
			this->cancle->Location = System::Drawing::Point(128, 212);
			this->cancle->Name = L"cancle";
			this->cancle->Size = System::Drawing::Size(97, 32);
			this->cancle->TabIndex = 2;
			this->cancle->Text = L"Отмена";
			this->cancle->UseVisualStyleBackColor = true;
			// 
			// apply
			// 
			this->apply->Location = System::Drawing::Point(231, 212);
			this->apply->Name = L"apply";
			this->apply->Size = System::Drawing::Size(97, 32);
			this->apply->TabIndex = 3;
			this->apply->Text = L"Применить";
			this->apply->UseVisualStyleBackColor = true;
			this->apply->Click += gcnew System::EventHandler(this, &options::apply_Click);
			// 
			// options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 256);
			this->ControlBox = false;
			this->Controls->Add(this->apply);
			this->Controls->Add(this->cancle);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->tabControl1);
			this->Name = L"options";
			this->Text = L"options";
			this->Load += gcnew System::EventHandler(this, &options::options_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SetUp.Expres = System::Decimal::ToInt32(numericUpDown1->Value);
		WriteSetupData(SetUp);
		Close();
	}
	private: System::Void apply_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SetUp.Expres = unsigned char(numericUpDown1->Value);
		WriteSetupData(SetUp);
	}

	private: System::Void options_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
		numericUpDown1->Value = SetUp.Expres;
	}
};
}
