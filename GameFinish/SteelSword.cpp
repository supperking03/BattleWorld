#include "SteelSword.h"


SteelSword::SteelSword()
{
	WeaponName = strdup("SteelSword");

	iDurability = 30;
	iMight = 8;
	iAccuracy = 75;
	iCritical = 0;
	iRange = 1;
	iWeight = 10;
}


SteelSword::~SteelSword()
{
}
