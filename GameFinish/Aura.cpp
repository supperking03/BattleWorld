#include "Aura.h"


Aura::Aura()
{
	WeaponName = strdup("Aura");

	iDurability = 20;
	iMight = 12;
	iAccuracy = 85;
	iCritical = 15;
	iRange = 2;
	iWeight = 15;
}


Aura::~Aura()
{
}
