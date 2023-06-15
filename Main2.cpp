#include "MainWin.h"
#include "Ftypes.h"
#include "SetupUnit.h"

struct TSetup SetUp;
namespace Fobot
{
	System::Void MainWin::setupData()
	{
		SetUp.Expres = ReadSetupData().Expres;
	}
}
