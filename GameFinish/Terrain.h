#pragma once

#include "FireEmblemLib.h"

enum TerrainType{PLAIN, FOREST};

class Terrain
{
protected:
	TerrainType Type;

	Coordinate TerrainCoordinate;

	int iMovementCost;

	char* TerrainImage;
public:
	Terrain();
	~Terrain();

	int GetMovementCost();

	void SetX(int X);
	void SetY(int Y);

	void SetCoordinate(int X, int Y);

	int GetX();
	int GetY();

	Coordinate GetCoordinate();

	TerrainType GetTerrainType();

	void Draw();
};

