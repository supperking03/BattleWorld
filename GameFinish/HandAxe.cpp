#include "HandAxe.h"


HandAxe::HandAxe()
{
	WeaponName = strdup("HandAxe");

	iDurability = 20;
	iMight = 7;
	iAccuracy = 60;
	iCritical = 0;
	iRange = 2;
	iWeight = 12;
}


HandAxe::~HandAxe()
{
}
