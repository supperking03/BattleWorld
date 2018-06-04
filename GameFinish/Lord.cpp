#include "Lord.h"



Lord::Lord()
{
	iMaxHP = 16;
	iHP = iMaxHP;
	iStrength = 4;
	iMagic = 0;
	iSkill = 7;
	iSpeed = 9;
	iLuck = 0;
	iDefense = 2;
	iResistance = 0;
	iMovement = 5;

	iHPGrowth = 90;
	iStrengthGrowth = 45;
	iMagicGrowth = 0;
	iSkillGrowth = 40;
	iSpeedGrowth = 45;
	iLuckGrowth = 45;
	iDefenseGrowth = 15;
	iResistanceGrowth = 20;

	CharacterClass = LORD;
	CharacterAbility = NONE;

	UsableWeapon.push_back(SWORD);

	CharacterImage = "Lord.jpg";
	CharacterFlippedImage = "Lord-flipped.jpg";
}


Lord::~Lord()
{
}
