#pragma once

#include "Item.h"

class Potion :
	public Item
{
protected:
	int iRecoverAmount;
	char* PotionName;
public:
	Potion();
	~Potion();

	char* GetItemName();

	WeaponType GetWeaponType();

	void SetMight(int Might);
	void SetAccuracy(int Accuracy);
	void SetCritical(int Critical);
	void SetRange(int Range);
	void SetWeight(int Weight);
	void SetRecoverAmount(int RecoverAmount);

	int GetMight();
	int GetAccuracy();
	int GetCritical();
	int GetRange();
	int GetWeight();
	int GetRecoverAmount();

	void PrintItemInfo();
};

