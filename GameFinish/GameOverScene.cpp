#include "GameOverScene.h"

GameOverScene::GameOverScene(Side Victor)
{
	WinningSide = Victor;
}

GameOverScene::~GameOverScene()
{
}

void GameOverScene::Init()
{

	switch (WinningSide)
	{
	case SIDE1:
		readimagefile("Enzan.jpg", 0, 0, 1366, 700);
		break;
	case SIDE2:
		readimagefile("MiKiNo.jpg", 0, 0, 1366, 700);
		break;
	}

	outtextxy(1366/2, 700/2, "Press enter to exit");

	PlaySound(TEXT("GameOverScene.wav"), NULL, SND_LOOP | SND_ASYNC);
}

void GameOverScene::Update()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_RETURN))
		{
			break;
		}
	}
}
