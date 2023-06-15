#include "TankProperty.h"
#include "MaterialReference.h"

namespace Fobot
{
	System::Void TankProperty::WallMaterial_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MaterialReference^ property = gcnew MaterialReference(this);
		property->Exit->Text = "Выбрать";
		property->Show();
	}
}
