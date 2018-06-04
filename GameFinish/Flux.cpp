#include "Flux.h"


Flux::Flux()
{
	WeaponName = strdup("Flux");

	iDurability = 45;
	iMight = 7;
	iAccuracy = 80;
	iCritical = 0;
	iRange = 2;
	iWeight = 8;
}


Flux::~Flux()
{
}
