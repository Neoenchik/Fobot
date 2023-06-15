#include "SourceData.h"
#include "SourceTank.h"
#include "SourceMat.h"
#include "SourceKlap.h"
#include "SourceSUG.h"
#include "Vars.h"

namespace Fobot
{
	TmainData CurData;
	System::Void SourceData::ButtonTypeTank_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SourceTank^ tankreference = gcnew SourceTank(this);
		tankreference->Show();
	}
	System::Void SourceData::button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SourceSUG^ tankreference = gcnew SourceSUG(this);
		tankreference->Show();
	}
	System::Void SourceData::getSUG(int index)
	{
		CurData.SUG = ReadSUG(index);
		groupBox4->Text = "Свойство груза - " + gcnew String(CurData.SUG.Name.c_str());
		ELF->Text = gcnew String(ConvertNum(CurData.SUG.LF).c_str());
		ENuF->Text = gcnew String(ConvertNum(CurData.SUG.NuF).c_str());
		ECpF->Text = gcnew String(ConvertNum(CurData.SUG.CpF).c_str());
		ESigmaF->Text = gcnew String(ConvertNum(CurData.SUG.SigmaF).c_str());
		ENuG->Text = gcnew String(ConvertNum(CurData.SUG.NuG).c_str());
		ELG->Text = gcnew String(ConvertNum(CurData.SUG.LG).c_str());
		ECpG->Text = gcnew String(ConvertNum(CurData.SUG.CpG).c_str());
	}
	System::Void SourceData::button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SourceKlap^ tankreference = gcnew SourceKlap(this);
		tankreference->Show();
	}
	System::Void SourceData::button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TKlapan Kl[maxKlapan];
		int j = 0;
		for (int i = 0; i < CurData.NPKK; i++)
		{
			if (i != KlapList->SelectedIndex)
			{
				Kl[j] = CurData.Klapans[i];
				j++;
			}
		}
		for (int i = 0; i < maxKlapan; i++)
		{
			CurData.Klapans[i].Marka = "";
			CurData.Klapans[i].PPK = 0;
			CurData.Klapans[i].PPS = 0;
			CurData.Klapans[i].SPK = 0;
		}
		CurData.NPKK--;
		for (int i = 0; i < maxKlapan; i++)
		{
			CurData.Klapans[i] = Kl[i];
		}
		KlapList->Items->Clear();
		for (int i = 0; i < CurData.NPKK; i++)
			KlapList->Items->Add(gcnew String(CurData.Klapans[i].Marka.c_str()));
	}
	System::Void SourceData::getklap(int index)
	{
		CurData.NPKK++;
		CurData.Klapans[CurData.NPKK-1] = ReadKlapan(index);
		KlapList->Items->Add(gcnew String(CurData.Klapans[CurData.NPKK-1].Marka.c_str()));
	}
	System::Void SourceData::gettank(int index)
	{
		CurData.Tank = ReadTank(index);
		ED->Text = gcnew String(ConvertNum(CurData.Tank.D).c_str());
		EV->Text = gcnew String(ConvertNum(CurData.Tank.V).c_str());
		EMat->Text = gcnew String(CurData.Tank.Mat.Name.c_str());
		EDST->Text = gcnew String(ConvertNum(CurData.Tank.DST).c_str());
		ERST->Text = gcnew String(ConvertNum(CurData.Tank.Mat.R).c_str());
		ELST->Text = gcnew String(ConvertNum(CurData.Tank.Mat.L).c_str());
		ECST->Text = gcnew String(ConvertNum(CurData.Tank.Mat.C).c_str());
	}
	System::Void SourceData::button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		isMatFire = false;
		SourceMat^ reference = gcnew SourceMat(this);
		reference->Show();
	}
	System::Void SourceData::button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		isMatFire = true;
		SourceMat^ reference = gcnew SourceMat(this);
		reference->Show();
	}
	System::Void SourceData::getmat(int index)
	{
		if (isMatFire)
		{
			CurData.ZP = ReadMaterial(index);
			EMZP->Text = gcnew String(CurData.ZP.Name.c_str());
			ERZP->Text = gcnew String(ConvertNum(CurData.ZP.R).c_str());
			ECZP->Text = gcnew String(ConvertNum(CurData.ZP.C).c_str());
			ELZP->Text = gcnew String(ConvertNum(CurData.ZP.L).c_str());
		}
		else
		{
			CurData.IZ = ReadMaterial(index);
			EMIS->Text = gcnew String(CurData.IZ.Name.c_str());
			ERIS->Text = gcnew String(ConvertNum(CurData.IZ.R).c_str());
			ECIS->Text = gcnew String(ConvertNum(CurData.IZ.C).c_str());
			ELIS->Text = gcnew String(ConvertNum(CurData.IZ.L).c_str());
		}
	}
	extern struct TmainData md;
	System::Void SourceData::SourceData_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		msclr::interop::marshal_context context;
		CurData.TW = atof(context.marshal_as<const char*>(ETW->Text));
		CurData.ALF = atof(context.marshal_as<const char*>(EALF->Text));
		CurData.PTANK = atof(context.marshal_as<const char*>(EPTank->Text));
		if (EFF->Text == "Вся поверхность")
			CurData.FF = -1;
		else
			CurData.FF = atof(context.marshal_as<const char*>(EFF->Text));
		CurData.QF = atof(context.marshal_as<const char*>(EQF->Text));
		CurData.TauP = atof(context.marshal_as<const char*>(ETauP->Text));
		CurData.MSUG = atof(context.marshal_as<const char*>(EMSUG->Text));
		CurData.MMSUG = atof(context.marshal_as<const char*>(EMMSUG->Text));
		if (CurData.IZ.Name.size() > 0)
			CurData.IZ_Flag = true;
		else
			CurData.IZ_Flag = false;
		if (CurData.ZP.Name.size() > 0)
			CurData.ZP_Flag = true;
		else
			CurData.ZP_Flag = false;
		CurData.SIZ= atof(context.marshal_as<const char*>(ESIZ->Text));
		CurData.DIS = atof(context.marshal_as<const char*>(EDIS->Text));
		CurData.DZP = atof(context.marshal_as<const char*>(EDZP->Text));
		CurData.LP = LightProtect->Checked;
		md = CurData;
		parents->closesourcedata();
	}
}