#pragma once
#include "Scene.h"

class GameOverScene :
	public Scene
{
private:
	Side WinningSide;
public:
	GameOverScene(Side Victor);
	~GameOverScene();

	void Init();
	void Update();
};

