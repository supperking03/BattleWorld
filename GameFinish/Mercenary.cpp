#include "Mercenary.h"



Mercenary::Mercenary()
{
	iMaxHP = 18;
	iHP = iMaxHP;
	iStrength = 4;
	iMagic = 0;
	iSkill = 8;
	iSpeed = 8;
	iLuck = 0;
	iDefense = 4;
	iResistance = 0;
	iMovement = 5;

	iHPGrowth = 80;
	iStrengthGrowth = 40;
	iMagicGrowth = 0;
	iSkillGrowth = 40;
	iSpeedGrowth = 32;
	iLuckGrowth = 30;
	iDefenseGrowth = 18;
	iResistanceGrowth = 20;

	CharacterClass = MERCENARY;
	CharacterAbility = NONE;

	UsableWeapon.push_back(SWORD);

	CharacterImage = "Mercenary.jpg";
	CharacterFlippedImage = "Mercenary-flipped.jpg";
}


Mercenary::~Mercenary()
{
}
