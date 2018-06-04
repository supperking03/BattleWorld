#include "SlimLance.h"


SlimLance::SlimLance()
{
	WeaponName = strdup("SlimLance");

	iDurability = 30;
	iMight = 4;
	iAccuracy = 85;
	iCritical = 5;
	iRange = 1;
	iWeight = 4;
}


SlimLance::~SlimLance()
{
}
