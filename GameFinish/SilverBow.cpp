#include "SilverBow.h"


SilverBow::SilverBow()
{
	WeaponName = strdup("SilverBow");

	iDurability = 20;
	iMight = 13;
	iAccuracy = 75;
	iCritical = 0;
	iRange = 2;
	iWeight = 6;
}


SilverBow::~SilverBow()
{
}
