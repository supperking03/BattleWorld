#include "Fighter.h"



Fighter::Fighter()
{
	iMaxHP = 20;
	iHP = iMaxHP;
	iStrength = 5;
	iMagic = 0;
	iSkill = 2;
	iSpeed = 4;
	iLuck = 0;
	iDefense = 2;
	iResistance = 0;
	iMovement = 5;

	iHPGrowth = 85;
	iStrengthGrowth = 35;
	iMagicGrowth = 0;
	iSkillGrowth = 30;
	iSpeedGrowth = 20;
	iLuckGrowth = 15;
	iDefenseGrowth = 15;
	iResistanceGrowth = 10;

	CharacterClass = FIGHTER;
	CharacterAbility = NONE;

	UsableWeapon.push_back(AXE);

	CharacterImage = "Fighter.jpg";
	CharacterFlippedImage = "Fighter-flipped.jpg";
}


Fighter::~Fighter()
{
}
