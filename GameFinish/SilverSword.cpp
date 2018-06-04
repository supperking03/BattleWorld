#include "SilverSword.h"


SilverSword::SilverSword()
{
	WeaponName = strdup("SilverSword");

	iDurability = 20;
	iMight = 13;
	iAccuracy = 80;
	iCritical = 0;
	iRange = 1;
	iWeight = 8;
}


SilverSword::~SilverSword()
{
}
