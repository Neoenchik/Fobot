#pragma once
#include <fstream>
#include <cliext/vector>
#include <algorithm>
#include "MaterialSpr.h"
namespace Fobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MaterialReferenceMain
	/// </summary>
	public ref class MaterialReferenceMain : public System::Windows::Forms::Form
	{
	public:
		MaterialReferenceMain(void)
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
		~MaterialReferenceMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ MatList;
	protected:
	public: System::Windows::Forms::Button^ Exit;
	private:
	private: System::Windows::Forms::Button^ Delete;
	public:
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
			this->MatList = (gcnew System::Windows::Forms::ListBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Change = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MatList
			// 
			this->MatList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MatList->FormattingEnabled = true;
			this->MatList->ItemHeight = 16;
			this->MatList->Location = System::Drawing::Point(12, 11);
			this->MatList->Name = L"MatList";
			this->MatList->Size = System::Drawing::Size(444, 244);
			this->MatList->TabIndex = 14;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(349, 269);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(107, 36);
			this->Exit->TabIndex = 13;
			this->Exit->Text = L"Закрыть";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MaterialReferenceMain::Exit_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(236, 269);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(107, 36);
			this->Delete->TabIndex = 12;
			this->Delete->Text = L"Удалить";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &MaterialReferenceMain::Delete_Click);
			// 
			// Change
			// 
			this->Change->Location = System::Drawing::Point(123, 269);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(107, 36);
			this->Change->TabIndex = 11;
			this->Change->Text = L"Изменить";
			this->Change->UseVisualStyleBackColor = true;
			this->Change->Click += gcnew System::EventHandler(this, &MaterialReferenceMain::Change_Click);
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(10, 269);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(107, 36);
			this->Add->TabIndex = 10;
			this->Add->Text = L"Добавить";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MaterialReferenceMain::Add_Click);
			// 
			// MaterialReferenceMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 317);
			this->Controls->Add(this->MatList);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Change);
			this->Controls->Add(this->Add);
			this->Name = L"MaterialReferenceMain";
			this->ShowIcon = false;
			this->Text = L"Список материалов";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MaterialReferenceMain::MaterialReferenceMain_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MaterialReferenceMain::MaterialReferenceMain_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MaterialReferenceMain_Load(System::Object^ sender, System::EventArgs^ e)
	{
		OpenMaterial();
		MatList->Items->Clear();
		fseek(FMaterial, 0, 0);
		while (fread((char*)&Material, sizeof(Material), 1, FMaterial) == 1)
		{
			MatList->Items->Add((System::Object^)gcnew System::String(Material.Name.c_str()));
		}
	}
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
			public: System::Void Add_Material(TMaterial Mat)
			{
				if (Mat_change == false)
				{
					AddMaterial(Mat);
					MatList->Items->Clear();
					CloseMaterial();
					OpenMaterial();
					fseek(FMaterial, 0, 0);
					while (fread((char*)&Material, sizeof(Material), 1, FMaterial) == 1)
					{
						MatList->Items->Add((System::Object^)gcnew System::String(Material.Name.c_str()));
					}
				}
				else
				{
					WriteMaterial(MatList->SelectedIndex, Mat);
					MatList->Items->Clear();
					fseek(FMaterial, 0, 0);
					while (fread((char*)&Material, sizeof(Material), 1, FMaterial) == 1)
					{
						MatList->Items->Add((System::Object^)gcnew System::String(Material.Name.c_str()));
					}
				}
			}
				  bool Mat_change = false;
	private: System::Void MaterialReferenceMain_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		CloseMaterial();
		fcloseall();
	}
	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DelMaterial(MatList->SelectedIndex);
		MatList->Items->Clear();
		fseek(FMaterial, 0, 0);
		while (fread((char*)&Material, sizeof(Material), 1, FMaterial) == 1)
		{
			MatList->Items->Add((System::Object^)gcnew System::String(Material.Name.c_str()));
		}
	}
};
}
