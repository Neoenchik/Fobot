#include "TankReference.h"
#include "TankProperty.h"

namespace Fobot
{
	System::Void TankReference::Add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Tan_change = false;
		Tank.Name = "";
		Tank.D = 0;
		Tank.DST = 0;
		Tank.V = 0;
		Tank.Mat.Name = "";
		Tank.Mat.C = 0;
		Tank.Mat.R = 0;
		Tank.Mat.L = 0;
		TankProperty^ property = gcnew TankProperty(this);
		property->GetTank(Tank);
	}
	System::Void TankReference::Change_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Tan_change = true;
		//Material = ReadMaterial(MatList->SelectedIndex);
		TankProperty^ property = gcnew TankProperty(this);
		property->GetTank(ReadTank(TankList->SelectedIndex));
	}
}