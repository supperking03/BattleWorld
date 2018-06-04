#include "SlimSword.h"


SlimSword::SlimSword()
{
	WeaponName = strdup("SlimSword");

	iDurability = 30;
	iMight = 3;
	iAccuracy = 100;
	iCritical = 5;
	iRange = 1;
	iWeight = 2;
}


SlimSword::~SlimSword()
{
}
