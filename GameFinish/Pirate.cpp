#include "Pirate.h"



Pirate::Pirate()
{
	iMaxHP = 19;
	iHP = iMaxHP;
	iStrength = 4;
	iMagic = 0;
	iSkill = 2;
	iSpeed = 6;
	iLuck = 0;
	iDefense = 3;
	iResistance = 0;
	iMovement = 5;

	iHPGrowth = 75;
	iStrengthGrowth = 50;
	iMagicGrowth = 0;
	iSkillGrowth = 35;
	iSpeedGrowth = 25;
	iLuckGrowth = 15;
	iDefenseGrowth = 10;
	iResistanceGrowth = 13;

	CharacterClass = PIRATE;
	CharacterAbility = NONE;

	UsableWeapon.push_back(AXE);

	CharacterImage = "Pirate.jpg";
	CharacterFlippedImage = "Pirate-flipped.jpg";
}


Pirate::~Pirate()
{
}
