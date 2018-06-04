#include "ShortBow.h"


ShortBow::ShortBow()
{
	WeaponName = strdup("ShortBow");

	iDurability = 20;
	iMight = 5;
	iAccuracy = 65;
	iCritical = 0;
	iRange = 3;
	iWeight = 10;
}


ShortBow::~ShortBow()
{
}
