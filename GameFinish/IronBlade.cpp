#include "IronBlade.h"


IronBlade::IronBlade()
{
	WeaponName = strdup("IronBlade");

	iDurability = 35;
	iMight = 9;
	iAccuracy = 70;
	iCritical = 0;
	iRange = 1;
	iWeight = 5;
}


IronBlade::~IronBlade()
{
}
