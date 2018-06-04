#include "SilverBlade.h"


SilverBlade::SilverBlade()
{
	WeaponName = strdup("SilverBlade");

	iDurability = 15;
	iMight = 14;
	iAccuracy = 60;
	iCritical = 0;
	iRange = 1;
	iWeight = 13;
}


SilverBlade::~SilverBlade()
{
}
