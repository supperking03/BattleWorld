#include "Lightning.h"


Lightning::Lightning()
{
	WeaponName = strdup("Lightning");

	iDurability = 35;
	iMight = 4;
	iAccuracy = 95;
	iCritical = 5;
	iRange = 2;
	iWeight = 6;
}


Lightning::~Lightning()
{
}
