#include "SteelBlade.h"


SteelBlade::SteelBlade()
{
	WeaponName = strdup("SteelBlade");

	iDurability = 25;
	iMight = 11;
	iAccuracy = 65;
	iCritical = 0;
	iRange = 1;
	iWeight = 14;
}


SteelBlade::~SteelBlade()
{
}
