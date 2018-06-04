#include "LongBow.h"


LongBow::LongBow()
{
	WeaponName = strdup("LongBow");

	iDurability = 20;
	iMight = 5;
	iAccuracy = 65;
	iCritical = 0;
	iRange = 3;
	iWeight = 10;
}


LongBow::~LongBow()
{
}
