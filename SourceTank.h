#pragma once
#include <msclr/marshal.h>
#include "TankSpr.h"
#include "SourceData.h"
#include "Vars.h"
namespace Fobot {
	//extern TmainData CurData;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SourceTank
	/// </summary>
	public ref class SourceTank : public System::Windows::Forms::Form
	{
	private: SourceData^ parentform;
	public:
		SourceTank(SourceData^ parent)
		{
			InitializeComponent();
			parentform = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SourceTank()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ TankList;
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
			this->TankList = (gcnew System::Windows::Forms::ListBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->choose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TankList
			// 
			this->TankList->FormattingEnabled = true;
			this->TankList->ItemHeight = 16;
			this->TankList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"что то", L"кто то", L"чем то", L"зачем то" });
			this->TankList->Location = System::Drawing::Point(11, 12);
			this->TankList->Name = L"TankList";
			this->TankList->Size = System::Drawing::Size(285, 228);
			this->TankList->TabIndex = 7;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(302, 69);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(107, 36);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Закрыть";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &SourceTank::Exit_Click);
			// 
			// choose
			// 
			this->choose->Location = System::Drawing::Point(304, 27);
			this->choose->Name = L"choose";
			this->choose->Size = System::Drawing::Size(107, 36);
			this->choose->TabIndex = 5;
			this->choose->Text = L"Выбрать";
			this->choose->UseVisualStyleBackColor = true;
			this->choose->Click += gcnew System::EventHandler(this, &SourceTank::choose_Click);
			// 
			// SourceTank
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 253);
			this->Controls->Add(this->TankList);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->choose);
			this->Name = L"SourceTank";
			this->ShowIcon = false;
			this->Text = L"Цистерна";
			this->Load += gcnew System::EventHandler(this, &SourceTank::SourceTank_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SourceTank_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		FTank=fopen(FNTank.c_str(), "a+");
		TankList->Items->Clear();
		fseek(FTank, 0, 0);
		while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
		{
			TankList->Items->Add((System::Object^)gcnew System::String(Tank.Name.c_str()));
		}
	}
	private: System::Void choose_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//extern struct TmainData CurData;
		msclr::interop::marshal_context context;
		parentform->ButtonTypeTank->Text = TankList->SelectedItem->ToString();
		fcloseall();
		parentform->gettank(TankList->SelectedIndex);
		Close();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		fcloseall();
		Close();
	}
};
}
