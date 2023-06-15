#pragma once
#include <msclr/marshal.h>
#include "KlapanSpr.h"
#include "Vars.h"
#include "KlapanSprav.h"

namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для KlapanProperty
	/// </summary>
	public ref class KlapanProperty : public System::Windows::Forms::Form
	{
	private: KlapanSprav^  parentForm;
	public:
		KlapanProperty(KlapanSprav^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~KlapanProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Cancel;
	protected:
	private: System::Windows::Forms::Button^ OK;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ESPK;
	private: System::Windows::Forms::TextBox^ EPPS;
	private: System::Windows::Forms::TextBox^ EPPK;
	private: System::Windows::Forms::TextBox^ EMarka;

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
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ESPK = (gcnew System::Windows::Forms::TextBox());
			this->EPPS = (gcnew System::Windows::Forms::TextBox());
			this->EPPK = (gcnew System::Windows::Forms::TextBox());
			this->EMarka = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(257, 135);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(97, 30);
			this->Cancel->TabIndex = 41;
			this->Cancel->Text = L"Отмена";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &KlapanProperty::Cancel_Click);
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(154, 135);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(97, 30);
			this->OK->TabIndex = 40;
			this->OK->Text = L"ОК";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &KlapanProperty::OK_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(48, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 20);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Условный диаметр, мм";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(31, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 20);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Давление закрытия, Мпа";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(244, 20);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Давление срабатывая, МПа";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(184, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Марка:";
			// 
			// ESPK
			// 
			this->ESPK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ESPK->Location = System::Drawing::Point(257, 106);
			this->ESPK->Name = L"ESPK";
			this->ESPK->Size = System::Drawing::Size(160, 23);
			this->ESPK->TabIndex = 35;
			this->ESPK->Text = L"0";
			this->ESPK->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EPPS
			// 
			this->EPPS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EPPS->Location = System::Drawing::Point(257, 77);
			this->EPPS->Name = L"EPPS";
			this->EPPS->Size = System::Drawing::Size(160, 23);
			this->EPPS->TabIndex = 34;
			this->EPPS->Text = L"0";
			this->EPPS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EPPK
			// 
			this->EPPK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EPPK->Location = System::Drawing::Point(257, 48);
			this->EPPK->Name = L"EPPK";
			this->EPPK->Size = System::Drawing::Size(160, 23);
			this->EPPK->TabIndex = 33;
			this->EPPK->Text = L"0";
			this->EPPK->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->EPPK->WordWrap = false;
			// 
			// EMarka
			// 
			this->EMarka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EMarka->Location = System::Drawing::Point(257, 19);
			this->EMarka->Name = L"EMarka";
			this->EMarka->Size = System::Drawing::Size(160, 23);
			this->EMarka->TabIndex = 32;
			this->EMarka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// KlapanProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 175);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ESPK);
			this->Controls->Add(this->EPPS);
			this->Controls->Add(this->EPPK);
			this->Controls->Add(this->EMarka);
			this->Name = L"KlapanProperty";
			this->ShowIcon = false;
			this->Text = L"Свойства клапана";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		msclr::interop::marshal_context context;
		TKlapan Klap;
		//marshal_context^ marshal = gcnew marshal_context();
		Klap.Marka = context.marshal_as<const char*>(EMarka->Text);
		Klap.PPK = atof(context.marshal_as<const char*>(EPPK->Text));
		Klap.PPS = atof(context.marshal_as<const char*>(EPPS->Text));
		Klap.SPK = atof(context.marshal_as<const char*>(ESPK->Text));
		parentForm->Add_Klapan(Klap);
		Close();
	}
	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
	public: void GetKlapanProp(TKlapan Klap)
	{
		EMarka->Text = gcnew String(Klap.Marka.c_str());
		EPPK->Text = gcnew String(ConvertNum(Klap.PPK).c_str());
		EPPS->Text = gcnew String(ConvertNum(Klap.PPS).c_str());
		ESPK->Text = gcnew String(ConvertNum(Klap.SPK).c_str());
		Show();
	}
};
}
