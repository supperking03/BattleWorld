#pragma once

#include "Anima.h"
#include "Archer.h"
#include "Aura.h"
#include "Aureola.h"
#include "Axe.h"
#include "Bow.h"
#include "Cavalier.h"
#include "Character.h"
#include "Cleric.h"
#include "Cursor.h"
#include "Dancer.h"
#include "Dark.h"
#include "FireEmblemLib.h"
#include "Divine.h"
#include "Elfire.h"
#include "Elixir.h"
#include "Excalibur.h"
#include "Fennrir.h"
#include "Fighter.h"
#include "Fimbulvetr.h"
#include "Fire.h"
#include "Flux.h"
#include "Forblaze.h"
#include "Forest.h"
#include "Gespenst.h"
#include "HandAxe.h"
#include "IronAxe.h"
#include "IronBlade.h"
#include "IronBow.h"
#include "IronLance.h"
#include "IronSword.h"
#include "Item.h"
#include "Javelin.h"
#include "Knight.h"
#include "Lance.h"
#include "Light.h"
#include "Lightning.h"
#include "LongBow.h"
#include "Lord.h"
#include "Luce.h"
#include "Mage.h"
#include "Map.h"
#include "Mercenary.h"
#include "Monk.h"
#include "Myrmidon.h"
#include "Nomad.h"
#include "Nosferatu.h"
#include "PegasusKnight.h"
#include "Pirate.h"
#include "Plain.h"
#include "Potion.h"
#include "RandomNumberGenerator.h"
#include "Shaman.h"
#include "Shine.h"
#include "ShortBow.h"
#include "ShortSpear.h"
#include "SilverAxe.h"
#include "SilverBlade.h"
#include "SilverBow.h"
#include "SilverLance.h"
#include "SilverSword.h"
#include "SlimLance.h"
#include "SlimSword.h"
#include "Spear.h"
#include "SteelAxe.h"
#include "SteelBlade.h"
#include "SteelBow.h"
#include "SteelLance.h"
#include "SteelSword.h"
#include "Sword.h"
#include "Terrain.h"
#include "Thief.h"
#include "Thunder.h"
#include "Vulnerary.h"
#include "Weapon.h"
#include "WyvernRider.h"

class Scene
{
protected:
	
public:
	Scene();
	~Scene();

	virtual void Init() = 0;
	virtual void Update() = 0;
};

