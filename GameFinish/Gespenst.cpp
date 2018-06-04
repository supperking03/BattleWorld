#include "Gespenst.h"


Gespenst::Gespenst()
{
	WeaponName = strdup("Gespenst");

	iDurability = 25;
	iMight = 23;
	iAccuracy = 80;
	iCritical = 0;
	iRange = 2;
	iWeight = 20;
}


Gespenst::~Gespenst()
{
}
