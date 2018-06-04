#include "Mage.h"



Mage::Mage()
{
	iMaxHP = 16;
	iHP = iMaxHP;
	iStrength = 0;
	iMagic = 1;
	iSkill = 2;
	iSpeed = 3;
	iLuck = 0;
	iDefense = 3;
	iResistance = 3;
	iMovement = 5;

	iHPGrowth = 55;
	iStrengthGrowth = 0;
	iMagicGrowth = 55;
	iSkillGrowth = 40;
	iSpeedGrowth = 35;
	iLuckGrowth = 20;
	iDefenseGrowth = 5;
	iResistanceGrowth = 30;

	CharacterClass = MAGE;
	CharacterAbility = NONE;

	UsableWeapon.push_back(ANIMA);

	CharacterImage = "Mage.jpg";
	CharacterFlippedImage = "Mage-flipped.jpg";
}


Mage::~Mage()
{
}
