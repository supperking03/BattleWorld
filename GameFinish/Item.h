#pragma once

#include "FireEmblemLib.h"

class Item
{
protected:
	int iDurability;
	ItemType TypeOfItem;
public:
	Item();
	~Item();

	virtual char* GetItemName() = 0;

	ItemType GetItemType();
	virtual WeaponType GetWeaponType() = 0;

	void SetDurability(int Durability);
	virtual void SetMight(int Might) = 0;
	virtual void SetAccuracy(int Accuracy) = 0;
	virtual void SetCritical(int Critical) = 0;
	virtual void SetRange(int Range) = 0;
	virtual void SetWeight(int Weight) = 0;
	virtual void SetRecoverAmount(int RecoverAmount) = 0;

	int GetDurability();
	virtual int GetMight() = 0;
	virtual int GetAccuracy() = 0;
	virtual int GetCritical() = 0;
	virtual int GetRange() = 0;
	virtual int GetWeight() = 0;
	virtual int GetRecoverAmount() = 0;

	virtual void PrintItemInfo() = 0;
};
