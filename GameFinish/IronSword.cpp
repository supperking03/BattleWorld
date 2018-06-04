#include "IronSword.h"


IronSword::IronSword()
{
	WeaponName = strdup("IronSword");

	iDurability = 46;
	iMight = 5;
	iAccuracy = 90;
	iCritical = 0;
	iRange = 1;
	iWeight = 5;
}


IronSword::~IronSword()
{
}
