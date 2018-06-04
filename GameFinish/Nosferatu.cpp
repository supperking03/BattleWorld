#include "Nosferatu.h"


Nosferatu::Nosferatu()
{
	WeaponName = strdup("Nosferatu");

	iDurability = 20;
	iMight = 10;
	iAccuracy = 70;
	iCritical = 0;
	iRange = 2;
	iWeight = 14;
}


Nosferatu::~Nosferatu()
{
}
