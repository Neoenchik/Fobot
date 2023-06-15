#include "MaterialReferenceMain.h"
#include "MaterialPropertyMain.h"
#include <string>


namespace Fobot
{
	System::Void MaterialReferenceMain::Add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Mat_change = false;
		Material.Name = "";
		Material.R = 0;
		Material.C = 0;
		Material.L = 0;
		MaterialPropertyMain^ property = gcnew MaterialPropertyMain(this);
		property->GetMaterProp(Material);
	}
	System::Void MaterialReferenceMain::Change_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Mat_change = true;
		//Material = ReadMaterial(MatList->SelectedIndex);
		MaterialPropertyMain^ property = gcnew MaterialPropertyMain(this);
		property->GetMaterProp(ReadMaterial(MatList->SelectedIndex));
	}
}
