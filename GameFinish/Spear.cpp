#include "Spear.h"


Spear::Spear()
{
	WeaponName = strdup("Spear");

	iDurability = 15;
	iMight = 12;
	iAccuracy = 70;
	iCritical = 5;
	iRange = 2;
	iWeight = 10;
}


Spear::~Spear()
{
}
