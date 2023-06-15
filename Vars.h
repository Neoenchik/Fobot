#pragma once
#include "SUGSpr.h"
#include "TankSpr.h"
#include "KlapanSpr.h"
#include "SourceData.h"
#include <string>
#include "MainWin.h"
#include "FTypes.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Fobot;

const long double PI = 3.1415926535897932384626433832795;
const double Epsilon = 0.001;
const int maxKlapan = 20;

struct TmainData
{
	//Общие величины
	int PRR;
	double TW, ALF, PTANK, FF, QF, TauP, TKR, PKR;
	unsigned char NS;
	//СУГ
	TSUG SUG;
	double MSUG;
	//Цистерна
	TTank Tank;
	//Теплоизоляция
	bool IZ_Flag;
	double SIZ;
	double DIS;
	TMaterial IZ;
	//Огнезащитное покрытие
	bool ZP_Flag;
	double DZP;
	TMaterial ZP;
	//Клапаны
	TKlapan Klapans[maxKlapan];
	unsigned char NPKK;

	unsigned char NTK, NPK;
	double MMSUG;
	bool LP;
};

static TmainData MainData;
static TmainData* PMainData;
extern struct TSetup SetUp;
static bool EDD, NewPrj;
static std::string DataFileName;

inline std::string ConvertNum(double Num)
{
	bool noInt = false;
	std::string n = std::to_string(Num);
	int i = 0;
	for (int j = 0; j < n.size(); j++)
	{
		if (n[j] == '.')
		{
			noInt = true;
			break;
		}
		i++;
	}
	std::string newN = "";
	//newN += (std::string(4 - i,'0'));
	newN += n;
	i = 0;
	noInt = false;
	for (int j = 0; j < n.size(); j++)
	{
		if (n[j] == '.')
		{
			noInt = true;
			continue;
		}
		if (noInt)
			i++;
	}
	if (noInt == false)
		newN += '.';
	if (SetUp.Expres - i >= 0)
		newN += (std::string(SetUp.Expres - i, '0'));
	else
		for(int i=0;i<abs(SetUp.Expres - i);i++)
			newN.pop_back();
	return newN;
}

inline void ConvertDataToSI()
{
	MainData.QF *= 1000;
	MainData.TauP *= 3600;
	MainData.TW += 273.15;
	MainData.SUG.CpF *= 1000;
	MainData.SUG.CpG *= 1000;
	MainData.SUG.CKP *= 1000;
	Klapan.SPK /= 1000000;
	Klapan.PPK *= 1000000;
	MainData.DIS /= 1000;
	MainData.IZ.C *= 1000;
	MainData.ZP.C *= 1000;
	MainData.DZP /= 1000;
	MainData.Tank.DST /= 1000;
	MainData.Tank.Mat.C *= 1000;
	for (int i = 0; i < 50; i++)
		MainData.SUG.PS[i] *= 100000;
	for (int i = 0; i < 20; i++)
		MainData.SUG.PK[i] *= 100000;
}
inline void EditData(Fobot::SourceData^ EnterMainData)
{
	
	EnterMainData->ETW->Text = gcnew String(ConvertNum(MainData.TW).c_str());
	EnterMainData->EALF->Text = gcnew String(ConvertNum(MainData.ALF).c_str());
	EnterMainData->EPTank->Text = gcnew String(ConvertNum(MainData.PTANK).c_str());
	EnterMainData->EFF->Text = gcnew String(ConvertNum(MainData.FF).c_str());
	EnterMainData->EQF->Text = gcnew String(ConvertNum(MainData.QF).c_str());
	EnterMainData->ETauP->Text = gcnew String(ConvertNum(MainData.TauP).c_str());
	EnterMainData->EMSUG->Text = gcnew String(ConvertNum(MainData.MSUG).c_str());
	EnterMainData->ESIZ->Text = gcnew String(ConvertNum(MainData.SIZ).c_str());
	EnterMainData->EDIS->Text = gcnew String(ConvertNum(MainData.DIS).c_str());
	EnterMainData->EDZP->Text = gcnew String(ConvertNum(MainData.DZP).c_str());
	EnterMainData->EMZP->Text = gcnew String(MainData.ZP.Name.c_str());
	EnterMainData->ERZP->Text = gcnew String(ConvertNum(MainData.ZP.R).c_str());
	EnterMainData->ECZP->Text = gcnew String(ConvertNum(MainData.ZP.C).c_str());
	EnterMainData->ELZP->Text = gcnew String(ConvertNum(MainData.ZP.L).c_str());
	EnterMainData->KlapList->Items->Clear();
	for (int i = 0; i < MainData.NPKK;i++)
	{
		EnterMainData->KlapList->Items->Add((Object^)gcnew String(MainData.Klapans[i].Marka.c_str()));
	}
	EnterMainData->EMIS->Text = gcnew String(MainData.IZ.Name.c_str());
	EnterMainData->ERIS->Text = gcnew String(ConvertNum(MainData.IZ.R).c_str());
	EnterMainData->ECIS->Text = gcnew String(ConvertNum(MainData.IZ.C).c_str());
	EnterMainData->ELIS->Text = gcnew String(ConvertNum(MainData.IZ.L).c_str());
	EnterMainData->groupBox4->Text = "Свойство груза -" + gcnew String(MainData.SUG.Name.c_str());
	EnterMainData->ELF->Text = gcnew String(ConvertNum(MainData.SUG.LF).c_str());
	EnterMainData->ENuF->Text = gcnew String(ConvertNum(MainData.SUG.NuF).c_str());
	EnterMainData->ECpF->Text = gcnew String(ConvertNum(MainData.SUG.CpF).c_str());
	EnterMainData->ENuG->Text = gcnew String(ConvertNum(MainData.SUG.NuG).c_str());
	EnterMainData->ELG->Text = gcnew String(ConvertNum(MainData.SUG.LG).c_str());
	EnterMainData->ECpG->Text = gcnew String(ConvertNum(MainData.SUG.CpG).c_str());
	EnterMainData->ButtonTypeTank->Text = gcnew String(MainData.Tank.Name.c_str());
	EnterMainData->ED->Text = gcnew String(ConvertNum(MainData.Tank.D).c_str());
	EnterMainData->EV->Text = gcnew String(ConvertNum(MainData.Tank.V).c_str());
	EnterMainData->EMat->Text = gcnew String(MainData.Tank.Mat.Name.c_str());
	EnterMainData->EDST->Text = gcnew String(ConvertNum(MainData.Tank.DST).c_str());
	EnterMainData->Show();
}

inline void ClearMainData()
{
	MainData.SUG.Name = "";
	MainData.SUG.LF = 0;
	MainData.SUG.NuF = 0;
	MainData.SUG.CpF = 0;
	MainData.SUG.SigmaF = 0;
	MainData.SUG.NuG = 0;
	MainData.SUG.LG = 0;
	MainData.SUG.CpG = 0;
	MainData.SUG.LKR = 0;
	MainData.SUG.CKP = 0;
	MainData.SUG.NuKR = 0;
	for(int i = 0; i < NS; i++)
	{
		MainData.SUG.PS[i] = 0;
		MainData.SUG.RF[i] = 0;
		MainData.SUG.EF[i] = 0;
		MainData.SUG.RG[i] = 0;
		MainData.SUG.EG[i] = 0;
	}
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			MainData.SUG.RK[i][j] = 0;
			MainData.SUG.EK[i][j] = 0;
		}
		MainData.SUG.TK[i] = 0;
		MainData.SUG.PK[i] = 0;
	}
	for (int i = 0; i < maxKlapan; i++)
	{
		MainData.Klapans[i].Marka = "";
		MainData.Klapans[i].PPK = 0;
		MainData.Klapans[i].PPS = 0;
		MainData.Klapans[i].SPK = 0;
	}
	MainData.Tank.Name = "";
	MainData.Tank.D = 0;
	MainData.Tank.DST = 0;
	MainData.Tank.Mat.Name = "";
	MainData.Tank.Mat.C = 0;
	MainData.Tank.Mat.L = 0;
	MainData.Tank.Mat.R = 0;
	MainData.Tank.V = 0;
	MainData.IZ.Name = "";
	MainData.IZ.R = 0;
	MainData.IZ.C = 0;
	MainData.IZ.L = 0;
	MainData.ZP.Name = "";
	MainData.ZP.R = 0;
	MainData.ZP.C = 0;
	MainData.ZP.L = 0;
	MainData.NPKK = 0;
	MainData.NPK = 0;
	MainData.NTK = 0;
	MainData.TW = 0;
	MainData.TKR = 0;
	MainData.PKR = 0;
	MainData.ALF = 0;
	MainData.NS = 0;
	MainData.PTANK = 0;
	MainData.FF = 0;
	MainData.QF = 0;
	MainData.TauP = 0;
	MainData.MSUG = 0;
	MainData.SIZ = 0;
	MainData.DIS = 0;
	MainData.DZP = 0;
}
inline unsigned char GetMaxIndex(FS Data)
{
	for (int i = 0; i < 50; i++)
		if (Data[i] != 0)
			return i;
}

inline void AddEvent(std::string aTime, std::string aEvent, std::string aParams)
{
	MainWin^ Main = gcnew MainWin();
	int i= Main->Prot->Rows->Add();
	Main->Prot->Rows[i]->Cells[0]->Value = gcnew String(aTime.c_str());
	Main->Prot->Rows[i]->Cells[1]->Value = gcnew String(aEvent.c_str());
	Main->Prot->Rows[i]->Cells[2]->Value = gcnew String(aParams.c_str());
}

inline void AddPoint(double Tau, double P, double T)
{
	MainWin^ Main = gcnew MainWin();
	Main->chart1->Series[0]->Points->AddXY(Tau, P);
	Main->chart2->Series[0]->Points->AddXY(Tau, T);
}