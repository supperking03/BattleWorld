#include "PegasusKnight.h"



PegasusKnight::PegasusKnight()
{
	iMaxHP = 14;
	iHP = iMaxHP;
	iStrength = 4;
	iMagic = 0;
	iSkill = 5;
	iSpeed = 5;
	iLuck = 0;
	iDefense = 3;
	iResistance = 2;
	iMovement = 7;

	iHPGrowth = 65;
	iStrengthGrowth = 35;
	iMagicGrowth = 0;
	iSkillGrowth = 40;
	iSpeedGrowth = 40;
	iLuckGrowth = 35;
	iDefenseGrowth = 12;
	iResistanceGrowth = 35;

	CharacterClass = PEGASUSKNIGHT;
	CharacterAbility = NONE;

	UsableWeapon.push_back(LANCE);

	CharacterImage = "PegasusKnight.jpg";
	CharacterFlippedImage = "PegasusKnight-flipped.jpg";
}


PegasusKnight::~PegasusKnight()
{
}
