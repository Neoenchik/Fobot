#pragma once
//#include "TankProperty.h"
#include <fstream>
#include "TankSpr.h"
namespace Fobot {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TankReference
	/// </summary>
	public ref class TankReference : public System::Windows::Forms::Form
	{
	public:
		TankReference(void)
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
		~TankReference()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ Change;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ Exit;
	protected:

	protected:



	private: System::Windows::Forms::ListBox^ TankList;


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
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Change = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->TankList = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(305, 27);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(107, 36);
			this->Add->TabIndex = 0;
			this->Add->Text = L"Добавить";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &TankReference::Add_Click);
			// 
			// Change
			// 
			this->Change->Location = System::Drawing::Point(303, 69);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(107, 36);
			this->Change->TabIndex = 1;
			this->Change->Text = L"Изменить";
			this->Change->UseVisualStyleBackColor = true;
			this->Change->Click += gcnew System::EventHandler(this, &TankReference::Change_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(303, 111);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(107, 36);
			this->Delete->TabIndex = 2;
			this->Delete->Text = L"Удалить";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &TankReference::Delete_Click);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(305, 153);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(107, 36);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Закрыть";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &TankReference::Exit_Click);
			// 
			// TankList
			// 
			this->TankList->FormattingEnabled = true;
			this->TankList->ItemHeight = 16;
			this->TankList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"что то", L"кто то", L"чем то", L"зачем то" });
			this->TankList->Location = System::Drawing::Point(12, 12);
			this->TankList->Name = L"TankList";
			this->TankList->Size = System::Drawing::Size(285, 228);
			this->TankList->TabIndex = 4;
			// 
			// TankReference
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(422, 253);
			this->Controls->Add(this->TankList);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Change);
			this->Controls->Add(this->Add);
			this->Name = L"TankReference";
			this->ShowIcon = false;
			this->Text = L"Справочник цистерн";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TankReference::TankReference_FormClosing);
			this->Load += gcnew System::EventHandler(this, &TankReference::Reference_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
	bool Tan_change = false;
	public: System::Void Add_Tank(TTank Tan)
	{
		if (Tan_change == false)
		{
			AddTank(Tan);
			TankList->Items->Clear();
			CloseTank();
			OpenTank();
			fseek(FTank, 0, 0);
			while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
			{
				TankList->Items->Add((Object^)gcnew System::String(Tank.Name.c_str()));
			}
		}
		else
		{
			WriteTank(TankList->SelectedIndex, Tan);
			TankList->Items->Clear();
			fseek(FTank, 0, 0);
			while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
			{
				TankList->Items->Add((System::Object^)gcnew System::String(Tank.Name.c_str()));
			}
		}
	}
	private: System::Void Reference_Load(System::Object^ sender, System::EventArgs^ e)
	{
		OpenTank();
		TankList->Items->Clear();
		fseek(FTank, 0,0);
		while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
		{
			TankList->Items->Add((System::Object^)gcnew System::String(Tank.Name.c_str()));
		}
	}
	private: System::Void TankReference_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
	{
		CloseTank();

		fcloseall();
	}
	private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DelTank(TankList->SelectedIndex);
		TankList->Items->Clear();
		fseek(FTank, 0, 0);
		while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
		{
			TankList->Items->Add((System::Object^)gcnew System::String(Tank.Name.c_str()));
		}
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
};
}
