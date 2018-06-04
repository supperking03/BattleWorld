#include "Thunder.h"


Thunder::Thunder()
{
	WeaponName = strdup("Thunder");

	iDurability = 35;
	iMight = 8;
	iAccuracy = 80;
	iCritical = 5;
	iRange = 2;
	iWeight = 6;
}


Thunder::~Thunder()
{
}
