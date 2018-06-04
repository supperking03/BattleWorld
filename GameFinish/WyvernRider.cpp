#include "WyvernRider.h"



WyvernRider::WyvernRider()
{
	iMaxHP = 20;
	iHP = iMaxHP;
	iStrength = 7;
	iMagic = 0;
	iSkill = 3;
	iSpeed = 5;
	iLuck = 0;
	iDefense = 8;
	iResistance = 0;
	iMovement = 7;

	iHPGrowth = 80;
	iStrengthGrowth = 45;
	iMagicGrowth = 0;
	iSkillGrowth = 35;
	iSpeedGrowth = 30;
	iLuckGrowth = 25;
	iDefenseGrowth = 25;
	iResistanceGrowth = 15;

	CharacterClass = WYVERNRIDER;
	CharacterAbility = NONE;

	UsableWeapon.push_back(LANCE);

	CharacterImage = "WyvernRider.jpg";
	CharacterFlippedImage = "WyvernRider-flipped.jpg";
}


WyvernRider::~WyvernRider()
{
}
