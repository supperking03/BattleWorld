#include "Knight.h"



Knight::Knight()
{
	iMaxHP = 17;
	iHP = iMaxHP;
	iStrength = 5;
	iMagic = 0;
	iSkill = 2;
	iSpeed = 0;
	iLuck = 0;
	iDefense = 9;
	iResistance = 0;
	iMovement = 4;

	iHPGrowth = 80;
	iStrengthGrowth = 40;
	iMagicGrowth = 0;
	iSkillGrowth = 30;
	iSpeedGrowth = 15;
	iLuckGrowth = 25;
	iDefenseGrowth = 28;
	iResistanceGrowth = 20;

	CharacterClass = KNIGHT;
	CharacterAbility = NONE;

	UsableWeapon.push_back(LANCE);

	CharacterImage = "Knight.jpg";
	CharacterFlippedImage = "Knight-flipped.jpg";
}


Knight::~Knight()
{
}
