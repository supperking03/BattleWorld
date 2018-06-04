#include "IronAxe.h"


IronAxe::IronAxe()
{
	WeaponName = strdup("IronAxe");

	iDurability = 45;
	iMight = 8;
	iAccuracy = 75;
	iCritical = 0;
	iRange = 1;
	iWeight = 10;
}


IronAxe::~IronAxe()
{
}
