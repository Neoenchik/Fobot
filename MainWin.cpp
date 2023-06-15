#include <Windows.h>
#include "MainWin.h"
#include "SourceData.h"
#include "Vars.h"
#include "MathUnit.h"
#include "options.h"
#include "TankReference.h"
using namespace Fobot;



namespace Fobot {
	System::Void MainWin::N16_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TankReference^ tankreference = gcnew TankReference();
		tankreference->Show();
	}
    System::Void MainWin::CheckPrj()
    {
		if (DataFileName.size() > 0)
			Text = "FOBOT 1.0 - " + gcnew String(DataFileName.c_str());
		else
			Text = "FOBOT 1.0";
		NewBtn->Enabled = !NewPrj;
		OpenBtn->Enabled = !NewPrj;
		SaveBtn->Enabled = NewPrj;
		CloseBtn->Enabled = NewPrj;
		PrintBtn->Enabled = NewPrj;
		CalcBtn->Enabled = (NewPrj && EDD);
		ErrBtn->Enabled = (NewPrj && EDD);
		MDBtn->Enabled = NewPrj;
    }
	System::Void MainWin::MainWin_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
		NewPrj = false;
		EDD = false;
		CheckPrj();
		ClearMainData();
	}
	System::Void MainWin::NewBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DataFileName = "project";
		if (DataFileName.size() > 0)
		{
			NewPrj = true;
			CheckPrj();
			ClearMainData();
		}
	}
	System::Void MainWin::CalcBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ConvertDataToSI();
		chart1->Series[0]->Points->Clear();
		chart2->Series[0]->Points->Clear();
		Prot->Rows->Clear();
		Prot->Refresh();
		MainMath();
		chart1->Update();
		chart2->Update();
		Update();
	}
	System::Void MainWin::CloseBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DataFileName = "";
		NewPrj = false;
		EDD = false;
		CheckPrj();
		ClearMainData();
		Close();
	}
	System::Void MainWin::N12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		options^ Optiosns = gcnew options();
		Optiosns->Show();
	}
	struct TmainData md;
	System::Void MainWin::closesourcedata()
	{
		EDD = true;
		CheckPrj();
	}
	System::Void MainWin::MDBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MainData = md;
		SourceData^ data = gcnew SourceData(this);
		EditData(data);
	}
	System::Void MainWin::N21_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MainData = md;
		SourceData^ data = gcnew SourceData(this);
		EditData(data);
	}
}
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MainWin);
    return 0;
}
