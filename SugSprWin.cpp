#include "SugSprWin.h"
#include "LPGProperty.h"

namespace Fobot
{
	System::Void SugSprWin::Add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SUG_change = false;
		SUG.Name = "";
		SUG.LF = 0;
		SUG.NuF = 0;
		SUG.CpF = 0;
		SUG.SigmaF = 0;
		SUG.NuG = 0;
		SUG.LG = 0;
		SUG.CpG = 0;
		SUG.LKR = 0;
		SUG.CKP = 0;
		SUG.NuKR = 0;
		for (int i = 0; i < NS; i++)
		{
			SUG.PS[i] = 0;
			SUG.RF[i] = 0;
			SUG.EF[i] = 0;
			SUG.RG[i] = 0;
			SUG.EG[i] = 0;
		}
		for(int i=0; i< 50;i++)
			for (int j = 0; j < 50; j++)
			{
				SUG.RK[i][j] = 0;
				SUG.EK[i][j] = 0;
			}
		for (int i = 0; i < 50; i++)
		{
			SUG.TK[i] = 0;
			SUG.PK[i] = 0;
		}
		LPGProperty^ property = gcnew LPGProperty(this);
		property->GetSUGProp(SUG);
	}
	System::Void SugSprWin::Change_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SUG_change = true;
		LPGProperty^ property = gcnew LPGProperty(this);
		property->GetSUGProp(ReadSUG(SUGList->SelectedIndex));
	}
}
