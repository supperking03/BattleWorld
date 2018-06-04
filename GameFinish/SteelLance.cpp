#include "SteelLance.h"


SteelLance::SteelLance()
{
	WeaponName = strdup("SteelLance");

	iDurability = 30;
	iMight = 10;
	iAccuracy = 70;
	iCritical = 0;
	iRange = 1;
	iWeight = 13;
}


SteelLance::~SteelLance()
{
}
