#include "ShortSpear.h"


ShortSpear::ShortSpear()
{
	WeaponName = strdup("ShortSpear");

	iDurability = 18;
	iMight = 9;
	iAccuracy = 60;
	iCritical = 0;
	iRange = 2;
	iWeight = 12;
}


ShortSpear::~ShortSpear()
{
}
