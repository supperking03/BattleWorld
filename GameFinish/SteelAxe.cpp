#include "SteelAxe.h"


SteelAxe::SteelAxe()
{
	WeaponName = strdup("SteelAxe");

	iDurability = 30;
	iMight = 11;
	iAccuracy = 65;
	iCritical = 0;
	iRange = 1;
	iWeight = 15;
}


SteelAxe::~SteelAxe()
{
}
