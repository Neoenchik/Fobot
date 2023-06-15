#include "KlapanSprav.h"
#include "KlapanProperty.h"

namespace Fobot
{
	System::Void KlapanSprav::Add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Kla_change = false;
		Klapan.Marka = "";
		Klapan.PPK = 0;
		Klapan.PPS = 0;
		Klapan.SPK = 0;
		KlapanProperty^ property = gcnew KlapanProperty(this);
		property->GetKlapanProp(Klapan);
	}
	System::Void KlapanSprav::Change_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Kla_change = true;
		//Material = ReadMaterial(MatList->SelectedIndex);
		KlapanProperty^ property = gcnew KlapanProperty(this);
		property->GetKlapanProp(ReadKlapan(KlapanList->SelectedIndex));
	}
}
