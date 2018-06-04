#pragma once

#include "Terrain.h"
#include "Plain.h"
#include "Forest.h"

class Map
{
private:
	Terrain* pTerrainList[MAP_WIDTH][MAP_HEIGHT];

	char* MapImage;
public:
	Map();
	~Map();

	void SetImage(char* StageMap);

	Terrain* GetTerrain(int X, int Y);

	void SetTerrain(TerrainType TYPE, int X, int Y);

	void Draw();
};

