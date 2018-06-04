#include "IronLance.h"


IronLance::IronLance()
{
	WeaponName = strdup("IronLance");

	iDurability = 45;
	iMight = 7;
	iAccuracy = 80;
	iCritical = 0;
	iRange = 1;
	iWeight = 8;
}


IronLance::~IronLance()
{
}
