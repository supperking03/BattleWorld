#pragma once

#include "Item.h"

class Weapon :
	public Item
{
protected:
	char* WeaponName;

	int iMight;
	int iAccuracy;
	int iCritical;
	int iRange;
	int iWeight;

	WeaponType TypeOfWeapon;
public:
	Weapon();
	~Weapon();

	WeaponType GetWeaponType();

	char* GetItemName();

	int GetMight();
	int GetAccuracy();
	int GetCritical();
	int GetRange();
	int GetWeight();
	int GetRecoverAmount();

	void SetMight(int Might);
	void SetAccuracy(int Accuracy);
	void SetCritical(int Critical);
	void SetRange(int Range);
	void SetWeight(int Weight);
	void SetRecoverAmount(int RecoverAmount);

	void PrintItemInfo();
};

