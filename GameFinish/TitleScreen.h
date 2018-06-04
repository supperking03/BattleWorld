#pragma once

#include "Scene.h"
#include "DeployScreen.h"

class TitleScreen:
	public Scene
{
private:
	int iCursor;

	void Draw();
public:
	TitleScreen();
	~TitleScreen();

	void Init();
	void Update();
};

