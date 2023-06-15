#pragma once
#include <msclr/marshal.h>
#include "MaterialSpr.h"
#include "Vars.h"
#include "MaterialReferenceMain.h"
namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MaterialPropertyMain
	/// </summary>
	public ref class MaterialPropertyMain : public System::Windows::Forms::Form
	{
	private: MaterialReferenceMain^ parentForm;
	public:
		MaterialPropertyMain(MaterialReferenceMain^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MaterialPropertyMain()
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
	private: System::Windows::Forms::TextBox^ ELambda;
	private: System::Windows::Forms::TextBox^ EC;
	private: System::Windows::Forms::TextBox^ ERO;
	private: System::Windows::Forms::TextBox^ EMarka;

	protected:










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
			this->ELambda = (gcnew System::Windows::Forms::TextBox());
			this->EC = (gcnew System::Windows::Forms::TextBox());
			this->ERO = (gcnew System::Windows::Forms::TextBox());
			this->EMarka = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(288, 137);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(97, 30);
			this->Cancel->TabIndex = 31;
			this->Cancel->Text = L"Отмена";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &MaterialPropertyMain::Cancel_Click);
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(185, 137);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(97, 30);
			this->OK->TabIndex = 30;
			this->OK->Text = L"ОК";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &MaterialPropertyMain::OK_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(24, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(384, 20);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Коэффициент теплопроводности, Вт/(м.*К):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(176, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 20);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Теплоемкость, кДж/(кг.*К):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(224, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 20);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Плотность, кг/куб.м.:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(341, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Марка:";
			// 
			// ELambda
			// 
			this->ELambda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ELambda->Location = System::Drawing::Point(414, 102);
			this->ELambda->Name = L"ELambda";
			this->ELambda->Size = System::Drawing::Size(160, 23);
			this->ELambda->TabIndex = 25;
			this->ELambda->Text = L"0";
			this->ELambda->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EC
			// 
			this->EC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EC->Location = System::Drawing::Point(414, 73);
			this->EC->Name = L"EC";
			this->EC->Size = System::Drawing::Size(160, 23);
			this->EC->TabIndex = 24;
			this->EC->Text = L"0";
			this->EC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ERO
			// 
			this->ERO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ERO->Location = System::Drawing::Point(414, 44);
			this->ERO->Name = L"ERO";
			this->ERO->Size = System::Drawing::Size(160, 23);
			this->ERO->TabIndex = 23;
			this->ERO->Text = L"0";
			this->ERO->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ERO->WordWrap = false;
			// 
			// EMarka
			// 
			this->EMarka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EMarka->Location = System::Drawing::Point(414, 15);
			this->EMarka->Name = L"EMarka";
			this->EMarka->Size = System::Drawing::Size(160, 23);
			this->EMarka->TabIndex = 22;
			this->EMarka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MaterialPropertyMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 183);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ELambda);
			this->Controls->Add(this->EC);
			this->Controls->Add(this->ERO);
			this->Controls->Add(this->EMarka);
			this->Name = L"MaterialPropertyMain";
			this->ShowIcon = false;
			this->Text = L"Свойства материала";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		msclr::interop::marshal_context context;
		TMaterial Mat;
		//marshal_context^ marshal = gcnew marshal_context();
		Mat.Name = context.marshal_as<const char*>(EMarka->Text);
		Mat.R = atof(context.marshal_as<const char*>(ERO->Text));
		Mat.C = atof(context.marshal_as<const char*>(EC->Text));
		Mat.L = atof(context.marshal_as<const char*>(ELambda->Text));
		parentForm->Add_Material(Mat);
		Close();
	}
	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
	public: void GetMaterProp(TMaterial Mat)
	{
		EMarka->Text = gcnew String(Mat.Name.c_str());
		ERO->Text = gcnew String(ConvertNum(Mat.R).c_str());
		EC->Text = gcnew String(ConvertNum(Mat.C).c_str());
		ELambda->Text = gcnew String(ConvertNum(Mat.L).c_str());
		Show();
	}
};
}
