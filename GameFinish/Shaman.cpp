#include "Shaman.h"



Shaman::Shaman()
{
	iMaxHP = 16;
	iHP = iMaxHP;
	iStrength = 2;
	iMagic = 2;
	iSkill = 1;
	iSpeed = 2;
	iLuck = 0;
	iDefense = 2;
	iResistance = 4;
	iMovement = 5;

	iHPGrowth = 50;
	iStrengthGrowth = 0;
	iMagicGrowth = 50;
	iSkillGrowth = 32;
	iSpeedGrowth = 30;
	iLuckGrowth = 20;
	iDefenseGrowth = 10;
	iResistanceGrowth = 30;

	CharacterClass = SHAMAN;
	CharacterAbility = NONE;

	UsableWeapon.push_back(DARK);

	CharacterImage = "Shaman.jpg";
	CharacterFlippedImage = "Shaman-flipped.jpg";
}


Shaman::~Shaman()
{
}
