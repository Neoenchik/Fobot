#include "MaterialReference.h"
#include "MaterialProperty.h"
#include <string>


namespace Fobot
{
    System::Void MaterialReference::Add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Mat_change = false;
		Material.Name = "";
		Material.R = 0;
		Material.C = 0;
		Material.L = 0;
		MaterialProperty^ property = gcnew MaterialProperty(this);
		property->GetMaterProp(Material);
    }
	System::Void MaterialReference::Change_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Mat_change = true;
		//Material = ReadMaterial(MatList->SelectedIndex);
		MaterialProperty^ property = gcnew MaterialProperty(this);
		property->GetMaterProp(ReadMaterial(MatList->SelectedIndex));
	}
}