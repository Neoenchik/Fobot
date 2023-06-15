#pragma once
#include <cliext/vector>
#include <algorithm>
#include "SUGSpr.h"

namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SugSprWin
	/// </summary>
	public ref class SugSprWin : public System::Windows::Forms::Form
	{
	public:
		SugSprWin(void)
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
		~SugSprWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ SUGList;
	protected:

	protected:
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ Change;
	private: System::Windows::Forms::Button^ Add;

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
			this->SUGList = (gcnew System::Windows::Forms::ListBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Change = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SUGList
			// 
			this->SUGList->FormattingEnabled = true;
			this->SUGList->ItemHeight = 16;
			this->SUGList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"что то", L"кто то", L"чем то", L"зачем то" });
			this->SUGList->Location = System::Drawing::Point(5, 12);
			this->SUGList->Name = L"SUGList";
			this->SUGList->Size = System::Drawing::Size(285, 228);
			this->SUGList->TabIndex = 14;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(298, 153);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(107, 36);
			this->Exit->TabIndex = 13;
			this->Exit->Text = L"Закрыть";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &SugSprWin::Exit_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(296, 111);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(107, 36);
			this->Delete->TabIndex = 12;
			this->Delete->Text = L"Удалить";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &SugSprWin::Delete_Click);
			// 
			// Change
			// 
			this->Change->Location = System::Drawing::Point(296, 69);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(107, 36);
			this->Change->TabIndex = 11;
			this->Change->Text = L"Изменить";
			this->Change->UseVisualStyleBackColor = true;
			this->Change->Click += gcnew System::EventHandler(this, &SugSprWin::Change_Click);
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(298, 27);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(107, 36);
			this->Add->TabIndex = 10;
			this->Add->Text = L"Добавить";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &SugSprWin::Add_Click);
			// 
			// SugSprWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 253);
			this->Controls->Add(this->SUGList);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Change);
			this->Controls->Add(this->Add);
			this->Name = L"SugSprWin";
			this->ShowIcon = false;
			this->Text = L"Справочник грузов";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SugSprWin::SugSprWin_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SugSprWin::SugSprWin_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SugSprWin_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenSUG();
		SUGList->Items->Clear();
		fseek(FSUG, 0, 0);
		while (fread((char*)&SUG, sizeof(SUG), 1, FSUG) == 1)
		{
			SUGList->Items->Add((System::Object^)gcnew System::String(SUG.Name.c_str()));
		}
	}
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DelSUG(SUGList->SelectedIndex);
		SUGList->Items->Clear();
		fseek(FSUG, 0, 0);
		while (fread((char*)&SUG, sizeof(SUG), 1, FSUG) == 1)
		{
			SUGList->Items->Add((System::Object^)gcnew System::String(SUG.Name.c_str()));
		}
	}
	private: System::Void SugSprWin_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		CloseSUG();
		fcloseall();
	}
	public: System::Void Add_SUG(TSUG aSUG)
	{
		if (SUG_change == false)
		{
			AddSUG(aSUG);
			SUGList->Items->Clear();
			CloseSUG();
			OpenSUG();
			fseek(FSUG, 0, 0);
			while (fread((char*)&SUG, sizeof(SUG), 1, FSUG) == 1)
			{
				SUGList->Items->Add((System::Object^)gcnew System::String(SUG.Name.c_str()));
			}
		}
		else
		{
			WriteSUG(SUGList->SelectedIndex, aSUG);
			SUGList->Items->Clear();
			fseek(FSUG, 0, 0);
			while (fread((char*)&SUG, sizeof(SUG), 1, FSUG) == 1)
			{
				SUGList->Items->Add((System::Object^)gcnew System::String(SUG.Name.c_str()));
			}
		}
	}
	bool SUG_change = false;
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
};
}
