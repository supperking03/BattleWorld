#include "SteelBow.h"


SteelBow::SteelBow()
{
	WeaponName = strdup("SteelBow");

	iDurability = 30;
	iMight = 9;
	iAccuracy = 70;
	iCritical = 0;
	iRange = 2;
	iWeight = 9;
}


SteelBow::~SteelBow()
{
}
