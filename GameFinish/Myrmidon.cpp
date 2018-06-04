#include "Myrmidon.h"



Myrmidon::Myrmidon()
{
	iMaxHP = 16;
	iHP = iMaxHP;
	iStrength = 4;
	iMagic = 0;
	iSkill = 9;
	iSpeed = 9;
	iLuck = 0;
	iDefense = 2;
	iResistance = 0;
	iMovement = 5;

	iHPGrowth = 70;
	iStrengthGrowth = 35;
	iMagicGrowth = 0;
	iSkillGrowth = 40;
	iSpeedGrowth = 40;
	iLuckGrowth = 30;
	iDefenseGrowth = 15;
	iResistanceGrowth = 20;

	CharacterClass = MYRMIDON;
	CharacterAbility = NONE;

	UsableWeapon.push_back(SWORD);

	CharacterImage = "Myrmidon.jpg";
	CharacterFlippedImage = "Myrmidon-flipped.jpg";
}


Myrmidon::~Myrmidon()
{
}
