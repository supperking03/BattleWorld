#include "Thief.h"



Thief::Thief()
{
	iMaxHP = 16;
	iHP = iMaxHP;
	iStrength = 3;
	iMagic = 0;
	iSkill = 1;
	iSpeed = 9;
	iLuck = 0;
	iDefense = 2;
	iResistance = 0;
	iMovement = 6;

	iHPGrowth = 50;
	iStrengthGrowth = 5;
	iMagicGrowth = 0;
	iSkillGrowth = 45;
	iSpeedGrowth = 40;
	iLuckGrowth = 40;
	iDefenseGrowth = 5;
	iResistanceGrowth = 25;

	CharacterClass = THIEF;
	CharacterAbility = NONE;

	UsableWeapon.push_back(SWORD);

	CharacterImage = "Thief.jpg";
	CharacterFlippedImage = "Thief-flipped.jpg";
}


Thief::~Thief()
{
}
