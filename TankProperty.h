#pragma once
#include <msclr/marshal.h>
#include "TankSpr.h"
#include "Vars.h"
#include "MaterialSpr.h"
#include "TankReference.h"

namespace Fobot {
	
	/// <summary>
	/// Сводка для TankProperty
	/// </summary>
	public ref class TankProperty : public System::Windows::Forms::Form
	{
	private: TankReference^ parentForm;
	public:
		TankProperty(TankReference^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TankProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OK;
	protected:
	private: System::Windows::Forms::Button^ Cancel;
	private: System::Windows::Forms::TextBox^ EType;
	private: System::Windows::Forms::TextBox^ ED;
	private: System::Windows::Forms::TextBox^ EV;
	private: System::Windows::Forms::TextBox^ EDST;




	public: System::Windows::Forms::Button^ WallMaterial;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;

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
			this->OK = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->EType = (gcnew System::Windows::Forms::TextBox());
			this->ED = (gcnew System::Windows::Forms::TextBox());
			this->EV = (gcnew System::Windows::Forms::TextBox());
			this->EDST = (gcnew System::Windows::Forms::TextBox());
			this->WallMaterial = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(115, 191);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(97, 30);
			this->OK->TabIndex = 0;
			this->OK->Text = L"ОК";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &TankProperty::OK_Click);
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(218, 191);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(97, 30);
			this->Cancel->TabIndex = 1;
			this->Cancel->Text = L"Отмена";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &TankProperty::Cancel_Click);
			// 
			// EType
			// 
			this->EType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EType->Location = System::Drawing::Point(310, 12);
			this->EType->Name = L"EType";
			this->EType->Size = System::Drawing::Size(160, 23);
			this->EType->TabIndex = 2;
			this->EType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ED
			// 
			this->ED->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ED->Location = System::Drawing::Point(310, 41);
			this->ED->Name = L"ED";
			this->ED->Size = System::Drawing::Size(160, 23);
			this->ED->TabIndex = 3;
			this->ED->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EV
			// 
			this->EV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EV->Location = System::Drawing::Point(310, 70);
			this->EV->Name = L"EV";
			this->EV->Size = System::Drawing::Size(160, 23);
			this->EV->TabIndex = 4;
			this->EV->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EDST
			// 
			this->EDST->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EDST->Location = System::Drawing::Point(310, 128);
			this->EDST->Name = L"EDST";
			this->EDST->Size = System::Drawing::Size(160, 23);
			this->EDST->TabIndex = 5;
			this->EDST->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// WallMaterial
			// 
			this->WallMaterial->BackColor = System::Drawing::SystemColors::ControlDark;
			this->WallMaterial->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->WallMaterial->Location = System::Drawing::Point(310, 99);
			this->WallMaterial->Name = L"WallMaterial";
			this->WallMaterial->Size = System::Drawing::Size(160, 23);
			this->WallMaterial->TabIndex = 6;
			this->WallMaterial->Text = L"Сталь";
			this->WallMaterial->UseVisualStyleBackColor = false;
			this->WallMaterial->Click += gcnew System::EventHandler(this, &TankProperty::WallMaterial_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(260, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Тип:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(90, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Внутренний диаметр, м:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(53, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Полная вместимость, куб. м:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(143, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Материал стенки:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(120, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Толщина стенки, мм:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// TankProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(482, 233);
			this->ControlBox = false;
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->WallMaterial);
			this->Controls->Add(this->EDST);
			this->Controls->Add(this->EV);
			this->Controls->Add(this->ED);
			this->Controls->Add(this->EType);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->OK);
			this->Name = L"TankProperty";
			this->Text = L"Свойства цистерны";
			this->Load += gcnew System::EventHandler(this, &TankProperty::TankProperty_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WallMaterial_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TankProperty_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		EType->Focus();
	}

	private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		msclr::interop::marshal_context context;
		TTank AA;
		//marshal_context^ marshal = gcnew marshal_context();
		AA.Name = context.marshal_as<const char*>(EType->Text);
		AA.D = atof(context.marshal_as<const char*>(ED->Text));
		AA.V = atof(context.marshal_as<const char*>(ED->Text));
		TMaterial asd;
		asd.Name = context.marshal_as<const char*>(label6->Text);
		asd.R = atof(context.marshal_as<const char*>(label7->Text));
		asd.C = atof(context.marshal_as<const char*>(label8->Text));
		asd.L = atof(context.marshal_as<const char*>(label9->Text));
		AA.Mat = asd;
		AA.DST = atof(context.marshal_as<const char*>(EDST->Text));
		parentForm->Add_Tank(AA);
		Close();
	}
	public: void GetTank(TTank aTanK)
	{
		TTank AA;
		AA = aTanK;
		EType->Text = gcnew String(AA.Name.c_str());
		ED->Text = gcnew String(ConvertNum(AA.D).c_str());
		EV->Text = gcnew String(ConvertNum(AA.V).c_str());
		WallMaterial->Text = gcnew String(AA.Mat.Name.c_str());
		EDST->Text = gcnew String(ConvertNum(AA.DST).c_str());
		label6->Text = gcnew String(AA.Mat.Name.c_str());
		label7->Text = gcnew String(ConvertNum(AA.Mat.R).c_str());
		label8->Text = gcnew String(ConvertNum(AA.Mat.C).c_str());
		label9->Text = gcnew String(ConvertNum(AA.Mat.L).c_str());
		Show();
	}
	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
};
}
