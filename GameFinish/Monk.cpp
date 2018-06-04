#include "Monk.h"



Monk::Monk()
{
	iMaxHP = 18;
	iHP = iMaxHP;
	iStrength = 0;
	iMagic = 1;
	iSkill = 1;
	iSpeed = 2;
	iLuck = 0;
	iDefense = 1;
	iResistance = 5;
	iMovement = 5;

	iHPGrowth = 50;
	iStrengthGrowth = 0;
	iMagicGrowth = 30;
	iSkillGrowth = 35;
	iSpeedGrowth = 32;
	iLuckGrowth = 45;
	iDefenseGrowth = 8;
	iResistanceGrowth = 40;

	CharacterClass = MONK;
	CharacterAbility = NONE;

	UsableWeapon.push_back(LIGHT);

	CharacterImage = "Monk.jpg";
	CharacterFlippedImage = "Monk-flipped.jpg";
}


Monk::~Monk()
{
}
