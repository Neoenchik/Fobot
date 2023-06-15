#pragma once
#include <fstream>
#include <cliext/vector>
#include <algorithm>
#include "KlapanSpr.h"
namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для KlapanSprav
	/// </summary>
	public ref class KlapanSprav : public System::Windows::Forms::Form
	{
	public:
		KlapanSprav(void)
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
		~KlapanSprav()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ KlapanList;
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
			this->KlapanList = (gcnew System::Windows::Forms::ListBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Change = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// KlapanList
			// 
			this->KlapanList->FormattingEnabled = true;
			this->KlapanList->ItemHeight = 16;
			this->KlapanList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"что то", L"кто то", L"чем то", L"зачем то" });
			this->KlapanList->Location = System::Drawing::Point(5, 11);
			this->KlapanList->Name = L"KlapanList";
			this->KlapanList->Size = System::Drawing::Size(285, 228);
			this->KlapanList->TabIndex = 9;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(298, 152);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(107, 36);
			this->Exit->TabIndex = 8;
			this->Exit->Text = L"Закрыть";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &KlapanSprav::Exit_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(296, 110);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(107, 36);
			this->Delete->TabIndex = 7;
			this->Delete->Text = L"Удалить";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &KlapanSprav::Delete_Click);
			// 
			// Change
			// 
			this->Change->Location = System::Drawing::Point(296, 68);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(107, 36);
			this->Change->TabIndex = 6;
			this->Change->Text = L"Изменить";
			this->Change->UseVisualStyleBackColor = true;
			this->Change->Click += gcnew System::EventHandler(this, &KlapanSprav::Change_Click);
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(298, 26);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(107, 36);
			this->Add->TabIndex = 5;
			this->Add->Text = L"Добавить";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &KlapanSprav::Add_Click);
			// 
			// KlapanSprav
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 250);
			this->Controls->Add(this->KlapanList);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Change);
			this->Controls->Add(this->Add);
			this->Name = L"KlapanSprav";
			this->ShowIcon = false;
			this->Text = L"Справочник Клапанов";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &KlapanSprav::KlapanSprav_FormClosing);
			this->Load += gcnew System::EventHandler(this, &KlapanSprav::KlapanSprav_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void KlapanSprav_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenKlapan();
		KlapanList->Items->Clear();
		fseek(FKlapan, 0, 0);
		while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
		{
			KlapanList->Items->Add((System::Object^)gcnew System::String(Klapan.Marka.c_str()));
		}
	}
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DelKlapan(KlapanList->SelectedIndex);
		KlapanList->Items->Clear();
		fseek(FKlapan, 0, 0);
		while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
		{
			KlapanList->Items->Add((System::Object^)gcnew System::String(Klapan.Marka.c_str()));
		}
	}
	private: System::Void KlapanSprav_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		CloseKlapan();
		fcloseall();
	}
	public: System::Void Add_Klapan(TKlapan klap)
	{
		if (Kla_change == false)
		{
			AddKlapan(klap);
			KlapanList->Items->Clear();
			CloseKlapan();
			OpenKlapan();
			fseek(FKlapan, 0, 0);
			while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
			{
				KlapanList->Items->Add((System::Object^)gcnew System::String(Klapan.Marka.c_str()));
			}
		}
		else
		{
			WriteKlapan(KlapanList->SelectedIndex, klap);
			KlapanList->Items->Clear();
			fseek(FKlapan, 0, 0);
			while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
			{
				KlapanList->Items->Add((System::Object^)gcnew System::String(Klapan.Marka.c_str()));
			}
		}
	}
			bool Kla_change = false;
};
}
