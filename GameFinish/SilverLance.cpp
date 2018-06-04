#include "SilverLance.h"


SilverLance::SilverLance()
{
	WeaponName = strdup("SilverLance");

	iDurability = 20;
	iMight = 14;
	iAccuracy = 75;
	iCritical = 0;
	iRange = 1;
	iWeight = 10;
}


SilverLance::~SilverLance()
{
}
