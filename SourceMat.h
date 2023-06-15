#pragma once
#include <msclr/marshal.h>
#include "MaterialSpr.h"
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
	/// Сводка для SourceMat
	/// </summary>
	public ref class SourceMat : public System::Windows::Forms::Form
	{
	private: SourceData^ parentform;
	public:
		SourceMat(SourceData^ parent)
		{
			InitializeComponent();
			parentform = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SourceMat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ MatList;
	protected:
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ choose;

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
			this->choose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MatList
			// 
			this->MatList->FormattingEnabled = true;
			this->MatList->ItemHeight = 16;
			this->MatList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"что то", L"кто то", L"чем то", L"зачем то" });
			this->MatList->Location = System::Drawing::Point(11, 12);
			this->MatList->Name = L"MatList";
			this->MatList->Size = System::Drawing::Size(285, 228);
			this->MatList->TabIndex = 10;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(302, 69);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(107, 36);
			this->Exit->TabIndex = 9;
			this->Exit->Text = L"Закрыть";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &SourceMat::Exit_Click);
			// 
			// choose
			// 
			this->choose->Location = System::Drawing::Point(304, 27);
			this->choose->Name = L"choose";
			this->choose->Size = System::Drawing::Size(107, 36);
			this->choose->TabIndex = 8;
			this->choose->Text = L"Выбрать";
			this->choose->UseVisualStyleBackColor = true;
			this->choose->Click += gcnew System::EventHandler(this, &SourceMat::choose_Click);
			// 
			// SourceMat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 253);
			this->Controls->Add(this->MatList);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->choose);
			this->Name = L"SourceMat";
			this->ShowIcon = false;
			this->Text = L"материал";
			this->Load += gcnew System::EventHandler(this, &SourceMat::SourceMat_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SourceMat_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		FMaterial = fopen(FNMat.c_str(), "a+");
		MatList->Items->Clear();
		fseek(FMaterial, 0, 0);
		while (fread((char*)&Material, sizeof(Material), 1, FMaterial) == 1)
		{
			MatList->Items->Add((System::Object^)gcnew System::String(Material.Name.c_str()));
		}
	}
	private: System::Void choose_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		parentform->getmat(MatList->SelectedIndex);
		fcloseall();
		Close();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	};
}
