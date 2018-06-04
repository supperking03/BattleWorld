#include "Item.h"



Item::Item()
{
}


Item::~Item()
{
}

ItemType Item::GetItemType()
{
	return TypeOfItem;
}

void Item::SetDurability(int Durability)
{
	iDurability = Durability;
}

int Item::GetDurability()
{
	return iDurability;
}
