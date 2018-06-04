#include "SilverAxe.h"


SilverAxe::SilverAxe()
{
	WeaponName = strdup("SilverAxe");

	iDurability = 20;
	iMight = 15;
	iAccuracy = 70;
	iCritical = 0;
	iRange = 1;
	iWeight = 12;
}


SilverAxe::~SilverAxe()
{
}
