#pragma once
#include <msclr/marshal.h>
#include "MaterialSpr.h"
#include "Vars.h"
#include "MaterialReference.h"
namespace Fobot {

	/// <summary>
	/// Сводка для MaterialProperty
	/// </summary>
	public ref class MaterialProperty : public System::Windows::Forms::Form
	{
	private: MaterialReference^ parentForm;
	public:
		MaterialProperty(MaterialReference^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MaterialProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;

	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ELambda;

	private: System::Windows::Forms::TextBox^ EC;


	private: System::Windows::Forms::TextBox^ ERO;


	private: System::Windows::Forms::TextBox^ EMarka;



	private: System::Windows::Forms::Button^ Cancel;
	private: System::Windows::Forms::Button^ OK;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ELambda = (gcnew System::Windows::Forms::TextBox());
			this->EC = (gcnew System::Windows::Forms::TextBox());
			this->ERO = (gcnew System::Windows::Forms::TextBox());
			this->EMarka = (gcnew System::Windows::Forms::TextBox());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(36, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(384, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Коэффициент теплопроводности, Вт/(м.*К):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(188, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Теплоемкость, кДж/(кг.*К):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(236, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Плотность, кг/куб.м.:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(353, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Марка:";
			// 
			// ELambda
			// 
			this->ELambda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ELambda->Location = System::Drawing::Point(426, 106);
			this->ELambda->Name = L"ELambda";
			this->ELambda->Size = System::Drawing::Size(160, 23);
			this->ELambda->TabIndex = 15;
			this->ELambda->Text = L"0";
			this->ELambda->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EC
			// 
			this->EC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EC->Location = System::Drawing::Point(426, 77);
			this->EC->Name = L"EC";
			this->EC->Size = System::Drawing::Size(160, 23);
			this->EC->TabIndex = 14;
			this->EC->Text = L"0";
			this->EC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ERO
			// 
			this->ERO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ERO->Location = System::Drawing::Point(426, 48);
			this->ERO->Name = L"ERO";
			this->ERO->Size = System::Drawing::Size(160, 23);
			this->ERO->TabIndex = 13;
			this->ERO->Text = L"0";
			this->ERO->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ERO->WordWrap = false;
			// 
			// EMarka
			// 
			this->EMarka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EMarka->Location = System::Drawing::Point(426, 19);
			this->EMarka->Name = L"EMarka";
			this->EMarka->Size = System::Drawing::Size(160, 23);
			this->EMarka->TabIndex = 12;
			this->EMarka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(300, 141);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(97, 30);
			this->Cancel->TabIndex = 21;
			this->Cancel->Text = L"Отмена";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &MaterialProperty::Cancel_Click);
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(197, 141);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(97, 30);
			this->OK->TabIndex = 20;
			this->OK->Text = L"ОК";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &MaterialProperty::OK_Click);
			// 
			// MaterialProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 183);
			this->ControlBox = false;
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
			this->Name = L"MaterialProperty";
			this->Text = L"Свойства материала";
			this->Load += gcnew System::EventHandler(this, &MaterialProperty::MaterialProperty_Load);
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
	private: System::Void MaterialProperty_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		EMarka->Focus();
	}
};
}
