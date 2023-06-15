#pragma once
#include <msclr/marshal.h>
#include "KlapanSpr.h"
#include "SourceData.h"
#include "Vars.h"
namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SourceKlap
	/// </summary>
	public ref class SourceKlap : public System::Windows::Forms::Form
	{
	private: SourceData^ source;
	public:
		SourceKlap(SourceData^ parent)
		{
			InitializeComponent();
			source = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SourceKlap()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ KlapList;
	protected:
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ choose;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->KlapList = (gcnew System::Windows::Forms::ListBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->choose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// KlapList
			// 
			this->KlapList->FormattingEnabled = true;
			this->KlapList->ItemHeight = 16;
			this->KlapList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"что то", L"кто то", L"чем то", L"зачем то" });
			this->KlapList->Location = System::Drawing::Point(11, 12);
			this->KlapList->Name = L"KlapList";
			this->KlapList->Size = System::Drawing::Size(285, 228);
			this->KlapList->TabIndex = 10;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(302, 69);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(107, 36);
			this->Exit->TabIndex = 9;
			this->Exit->Text = L"Закрыть";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &SourceKlap::Exit_Click);
			// 
			// choose
			// 
			this->choose->Location = System::Drawing::Point(304, 27);
			this->choose->Name = L"choose";
			this->choose->Size = System::Drawing::Size(107, 36);
			this->choose->TabIndex = 8;
			this->choose->Text = L"Выбрать";
			this->choose->UseVisualStyleBackColor = true;
			this->choose->Click += gcnew System::EventHandler(this, &SourceKlap::choose_Click);
			// 
			// SourceKlap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 253);
			this->Controls->Add(this->KlapList);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->choose);
			this->Name = L"SourceKlap";
			this->ShowIcon = false;
			this->Text = L"клапаны";
			this->Load += gcnew System::EventHandler(this, &SourceKlap::SourceKlap_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SourceKlap_Load(System::Object^ sender, System::EventArgs^ e)
	{
		FKlapan = fopen(FNKlapan.c_str(), "a+");
		KlapList->Items->Clear();
		fseek(FKlapan, 0, 0);
		while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
		{
			KlapList->Items->Add((System::Object^)gcnew System::String(Klapan.Marka.c_str()));
		}
	}
	private: System::Void choose_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fcloseall();
		source->getklap(KlapList->SelectedIndex);
		Close();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		fcloseall();
		Close();
	}
};
}
