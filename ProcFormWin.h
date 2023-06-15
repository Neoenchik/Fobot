#pragma once

namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ProcFormWin
	/// </summary>
	public ref class ProcFormWin : public System::Windows::Forms::Form
	{
	public:
		ProcFormWin(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ProcFormWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::ProgressBar^ progressBar1;
	public: System::Windows::Forms::Label^ LSOST;

	public: System::Windows::Forms::Label^ LTVN;

	public: System::Windows::Forms::Label^ LPVN;

	public: System::Windows::Forms::Label^ LTFR;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LSOST = (gcnew System::Windows::Forms::Label());
			this->LTVN = (gcnew System::Windows::Forms::Label());
			this->LPVN = (gcnew System::Windows::Forms::Label());
			this->LTFR = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->LSOST);
			this->groupBox1->Controls->Add(this->LTVN);
			this->groupBox1->Controls->Add(this->LPVN);
			this->groupBox1->Controls->Add(this->LTFR);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 90);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(473, 189);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// LSOST
			// 
			this->LSOST->AutoSize = true;
			this->LSOST->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LSOST->Location = System::Drawing::Point(214, 120);
			this->LSOST->Name = L"LSOST";
			this->LSOST->Size = System::Drawing::Size(13, 20);
			this->LSOST->TabIndex = 7;
			this->LSOST->Text = L",";
			// 
			// LTVN
			// 
			this->LTVN->AutoSize = true;
			this->LTVN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LTVN->Location = System::Drawing::Point(214, 100);
			this->LTVN->Name = L"LTVN";
			this->LTVN->Size = System::Drawing::Size(14, 20);
			this->LTVN->TabIndex = 6;
			this->LTVN->Text = L"/";
			// 
			// LPVN
			// 
			this->LPVN->AutoSize = true;
			this->LPVN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LPVN->Location = System::Drawing::Point(214, 80);
			this->LPVN->Name = L"LPVN";
			this->LPVN->Size = System::Drawing::Size(13, 20);
			this->LPVN->TabIndex = 5;
			this->LPVN->Text = L".";
			// 
			// LTFR
			// 
			this->LTFR->AutoSize = true;
			this->LTFR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LTFR->Location = System::Drawing::Point(214, 60);
			this->LTFR->Name = L"LTFR";
			this->LTFR->Size = System::Drawing::Size(13, 20);
			this->LTFR->TabIndex = 4;
			this->LTFR->Text = L".";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(189, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Состояние процесса:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(17, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Время от начала, ч:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(51, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Давление, МПа:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Темпертура, град.С:";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(111, 12);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(374, 44);
			this->progressBar1->TabIndex = 1;
			// 
			// ProcFormWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 291);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ProcFormWin";
			this->Text = L"ProcFormWin";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
