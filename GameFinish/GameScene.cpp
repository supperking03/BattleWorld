#include "GameScene.h"

void GameScene::Draw()
{
	switch (Phase)
	{
	case SELECTCHARACTER:
		GameCursor.Draw();

		setviewport(702, 0, 1366, 700, 1);
		clearviewport();

		setviewport(0, 0, 1366, 700, 1);

		for (int i = 0; i < Side1Characters.size(); i++)
		{
			if (Side1Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side1Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side1Characters[i]->PrintInfo();
			}
		}

		for (int i = 0; i < Side2Characters.size(); i++)
		{
			if (Side2Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side2Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side2Characters[i]->PrintInfo();
			}
		}

		setcolor(LIGHTCYAN);

		switch (Turn)
		{
		case SIDE1:
			outtextxy(1000, 40, "SIDE 1 TURN");

			break;
		case SIDE2:
			outtextxy(1000, 40, "SIDE 2 TURN");

			break;
		}

		setcolor(WHITE);

		break;
	case MOVE:
		GameCursor.Draw();

		setviewport(702, 0, 1366, 700, 1);
		clearviewport();

		setviewport(0, 0, 1366, 700, 1);

		for (int i = 0; i < Side1Characters.size(); i++)
		{
			if (Side1Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side1Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side1Characters[i]->PrintInfo();
			}
		}

		for (int i = 0; i < Side2Characters.size(); i++)
		{
			if (Side2Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side2Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side2Characters[i]->PrintInfo();
			}
		}

		setcolor(LIGHTCYAN);

		switch (Turn)
		{
		case SIDE1:
			outtextxy(1000, 40, "SIDE 1 TURN");

			break;
		case SIDE2:
			outtextxy(1000, 40, "SIDE 2 TURN");

			break;
		}

		setcolor(WHITE);

		for (int i = 0; i < Side1Characters.size(); i++)
		{
			if (Side1Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side1Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side1Characters[i]->PrintInfo();
			}
		}

		for (int i = 0; i < Side2Characters.size(); i++)
		{
			if (Side2Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side2Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side2Characters[i]->PrintInfo();
			}
		}

		break;
	case ACT:
		setviewport(702, 0, 1366, 700, 1);
		clearviewport();

		setviewport(0, 0, 1366, 700, 1);

		for (int i = 0; i < PossibleActions.size(); i++)
		{
			if (i == iActOption)
			{
				setcolor(RED);
			}
			else
			{
				setcolor(WHITE);
			}
			
			switch (PossibleActions[i])
			{
			case ATTACK:
				outtextxy(1000, 40 + i * 40, "ATTACK");
				break;
			case USE_DANCE:
				outtextxy(1000, 40 + i * 40, "DANCE");
				break;
			case USE_HEAL:
				outtextxy(1000, 40 + i * 40, "HEAL");
				break;
			case USE_VULNERARY:
				outtextxy(1000, 40 + i * 40, "USE VULNERARY");
				break;
			case USE_ELIXIR:
				outtextxy(1000, 40 + i * 40, "USE ELIXIR");
				break;
			case WAIT:
				outtextxy(1000, 40 + i * 40, "WAIT");
				break;
			}
		}

		break;
	case SELECTTARGET:
		GameCursor.Draw();

		setviewport(702, 0, 1366, 700, 1);
		clearviewport();

		setviewport(0, 0, 1366, 700, 1);

		for (int i = 0; i < Side1Characters.size(); i++)
		{
			if (Side1Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side1Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side1Characters[i]->PrintInfo();
			}
		}

		for (int i = 0; i < Side2Characters.size(); i++)
		{
			if (Side2Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
				Side2Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY)
			{
				Side2Characters[i]->PrintInfo();
			}
		}

		setcolor(LIGHTCYAN);

		switch (Turn)
		{
		case SIDE1:
			outtextxy(1000, 40, "SIDE 1 TURN");

			break;
		case SIDE2:
			outtextxy(1000, 40, "SIDE 2 TURN");

			break;
		}

		setcolor(WHITE);

		break;
	}
}

void GameScene::Attack(Character *Target)
{
	SelectedCharacter->Attack(Target);

	if (Target->IsDead() == true)
	{
		Target->Die(GameMap);

		switch (Turn)
		{
		case SIDE1:
			for (int i = 0; i < Side2Characters.size(); i++)
			{
				if (Side2Characters[i] == Target)
				{
					if (Target->GetCharacterClass() == LORD)
					{
						GameOver(SIDE1);

						return;
					}
					else
					{
						Side2Characters.erase(Side2Characters.begin() + i);
					}
				}
			}

			break;
		case SIDE2:
			for (int i = 0; i < Side1Characters.size(); i++)
			{
				if (Side1Characters[i] == Target)
				{
					if (Target->GetCharacterClass() == LORD)
					{
						GameOver(SIDE2);

						return;
					}
					else
					{
						Side1Characters.erase(Side1Characters.begin() + i);
					}
				}
			}

			break;
		}
	}

	if (SelectedCharacter->IsDead() == true)
	{
		SelectedCharacter->Die(GameMap);

		switch (Turn)
		{
		case SIDE1:
			for (int i = 0; i < Side1Characters.size(); i++)
			{
				if (Side1Characters[i] == SelectedCharacter)
				{
					if (SelectedCharacter->GetCharacterClass() == LORD)
					{
						GameOver(SIDE2);

						return;
					}
					else
					{
						Side1Characters.erase(Side1Characters.begin() + i);
					}
				}
			}

			break;
		case SIDE2:
			for (int i = 0; i < Side2Characters.size(); i++)
			{
				if (Side2Characters[i] == SelectedCharacter)
				{
					if (SelectedCharacter->GetCharacterClass() == LORD)
					{
						GameOver(SIDE1);

						return;
					}
					else
					{
						Side2Characters.erase(Side2Characters.begin() + i);
					}
				}
			}

			break;
		}
	}
}

void GameScene::GameOver(Side WinningSide)
{
	IsGameOver = true;
	Winner = WinningSide;
}

void GameScene::ProcessLeftArrow()
{
	switch (Phase)
	{
	case SELECTCHARACTER:
	case MOVE:
	case SELECTTARGET:
		GameCursor.Erase();

		GameCursor.MoveLeft();

		Draw();
		Sleep(100);
	}
}

void GameScene::ProcessRightArrow()
{
	switch (Phase)
	{
	case SELECTCHARACTER:
	case MOVE:
	case SELECTTARGET:
		GameCursor.Erase();

		GameCursor.MoveRight();

		Draw();
		Sleep(100);
	}
}

void GameScene::ProcessUpArrow()
{
	switch (Phase)
	{
	case SELECTCHARACTER:
	case MOVE:
	case SELECTTARGET:
		GameCursor.Erase();

		GameCursor.MoveUp();

		Draw();
		Sleep(100);
		break;
	case ACT:
		if (iActOption != 0)
		{
			iActOption--;

		}
		else
		{
			iActOption = PossibleActions.size() - 1;
		}

		Draw();
		Sleep(100);
		break;
	}
}

void GameScene::ProcessDownArrow()
{
	switch (Phase)
	{
	case SELECTCHARACTER:
	case MOVE:
	case SELECTTARGET:
		GameCursor.Erase();

		GameCursor.MoveDown();

		Draw();
		Sleep(100);
		break;
	case ACT:
		if (iActOption != PossibleActions.size() - 1)
		{
			iActOption++;
		}
		else
		{
			iActOption = 0;
		}

		Draw();
		Sleep(100);
		break;
	}
}

void GameScene::ProcessEnter()
{
	switch (Phase)
	{
	case SELECTCHARACTER:
	{
		switch (Turn)
		{
		case SIDE1:
			for (int i = 0; i < Side1Characters.size(); i++)
			{
				if (Side1Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
					Side1Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY &&
					Side1Characters[i]->IsActive() == true)
				{
					SelectedCharacter = Side1Characters[i];

					InitMove();
				}
			}

			break;
		case SIDE2:
			for (int i = 0; i < Side2Characters.size(); i++)
			{
				if (Side2Characters[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
					Side2Characters[i]->GetPosition().iY == GameCursor.GetPostion().iY &&
					Side2Characters[i]->IsActive() == true)
				{
					SelectedCharacter = Side2Characters[i];

					InitMove();
				}
			}

			break;
		}

		break;

	case MOVE:
		for (int i = 0; i < MovablePositions.size(); i++)
		{
			if (MovablePositions[i].iX == GameCursor.GetPostion().iX &&
				MovablePositions[i].iY == GameCursor.GetPostion().iY)
			{
				SelectedCharacter->MoveTo(MovablePositions[i], GameMap, Turn);

				InitAct();

				break;

			}
		}

		break;
	case ACT:
		switch (PossibleActions[iActOption])
		{
		case WAIT:
			InitSelectCharacter();

			break;
		case ATTACK:
			SelectedAction = ATTACK;

			InitSelectTarget();

			break;
		case USE_DANCE:
			SelectedAction = USE_DANCE;

			InitSelectTarget();

			break;
		case USE_HEAL:
			SelectedAction = USE_HEAL;

			InitSelectTarget();

			break;
		case USE_VULNERARY:
			SelectedCharacter->UseVulnerary();

			InitSelectCharacter();
			break;
		case USE_ELIXIR:
			SelectedCharacter->UseElixir();

			InitSelectCharacter();
			break;
		}

		break;
	case SELECTTARGET:
		switch (SelectedAction)
		{
		case ATTACK:
			for (int i = 0; i < AttackableEnemies.size(); i++)
			{
				if (AttackableEnemies[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
					AttackableEnemies[i]->GetPosition().iY == GameCursor.GetPostion().iY)
				{
					Attack(AttackableEnemies[i]);

					break;
				}
			}

			break;
		case USE_DANCE:
			for (int i = 0; i < DancableAllies.size(); i++)
			{
				if (DancableAllies[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
					DancableAllies[i]->GetPosition().iY == GameCursor.GetPostion().iY)
				{
					SelectedCharacter->Dance(DancableAllies[i]);
					
					break;
				}
			}

			break;
		case USE_HEAL:
			for (int i = 0; i < HealableAllies.size(); i++)
			{
				if (HealableAllies[i]->GetPosition().iX == GameCursor.GetPostion().iX &&
					HealableAllies[i]->GetPosition().iY == GameCursor.GetPostion().iY)
				{
					SelectedCharacter->Heal(HealableAllies[i]);

					break;
				}
			}

			break;
		}

		InitSelectCharacter();

		break;
	}
	}
}

void GameScene::InitSelectCharacter()
{
	SelectedCharacter->EndTurn();

	bool IsAllUnitsMoved = true;

	switch (Turn)
	{
	case SIDE1:
		for (int i = 0; i < Side1Characters.size(); i++)
		{
			if (Side1Characters[i]->IsMoved() == false)
			{
				IsAllUnitsMoved = false;
			}
		}
		break;
	case SIDE2:
		for (int i = 0; i < Side2Characters.size(); i++)
		{
			if (Side2Characters[i]->IsMoved() == false)
			{
				IsAllUnitsMoved = false;
			}
		}
		break;
	}

	if (IsAllUnitsMoved == true)
	{
		if (Turn == SIDE1)
		{
			Turn = SIDE2;

			for (int i = 0; i < Side2Characters.size(); i++)
			{
				Side2Characters[i]->NewTurn(SIDE2);
			}

			GameCursor.SetPosition(Side2Characters[0]->GetPosition().iX, Side2Characters[0]->GetPosition().iY);
		}
		else
		{
			Turn = SIDE1;

			for (int i = 0; i < Side1Characters.size(); i++)
			{
				Side1Characters[i]->NewTurn(SIDE1);
			}

			GameCursor.SetPosition(Side1Characters[0]->GetPosition().iX, Side1Characters[0]->GetPosition().iY);
		}
	}

	for (int i = 0; i < Side1Characters.size(); i++)
	{
		Side1Characters[i]->Draw(SIDE1);
	}

	for (int i = 0; i < Side2Characters.size(); i++)
	{
		Side2Characters[i]->Draw(SIDE2);
	}

	Phase = SELECTCHARACTER;

	Draw();
	Sleep(100);
}

void GameScene::InitMove()
{
	switch (Turn)
	{
	case SIDE1:
		MovablePositions = SelectedCharacter->GetMovableCoordinates(Side2Characters, Side1Characters, GameMap);

		AttackableEnemies = SelectedCharacter->GetAttackableEnemies(Side2Characters, Side1Characters, GameMap, MovablePositions);
		HealableAllies = SelectedCharacter->GetHealableAllies(Side2Characters, Side1Characters, GameMap, MovablePositions);
		DancableAllies = SelectedCharacter->GetDancableAllies(Side2Characters, Side1Characters, GameMap, MovablePositions);

		break;
	case SIDE2:
		MovablePositions = SelectedCharacter->GetMovableCoordinates(Side1Characters, Side2Characters, GameMap);

		AttackableEnemies = SelectedCharacter->GetAttackableEnemies(Side1Characters, Side2Characters, GameMap, MovablePositions);
		HealableAllies = SelectedCharacter->GetHealableAllies(Side1Characters, Side2Characters, GameMap, MovablePositions);
		DancableAllies = SelectedCharacter->GetDancableAllies(Side1Characters, Side2Characters, GameMap, MovablePositions);

		break;
	}

	Phase = MOVE;

	for (int i = 0; i < MovablePositions.size(); i++)
	{
		if (MovablePositions[i].iX != SelectedCharacter->GetPosition().iX ||
			MovablePositions[i].iY != SelectedCharacter->GetPosition().iY)
		{
			//fillellipse(MovablePositions[i].iX * 35 - 17, MovablePositions[i].iY * 35 - 17, 12, 12);

			readimagefile("Blue.jpg", (MovablePositions[i].iX * 35 - 17.5) - 32 / 2.0, (MovablePositions[i].iY * 35 - 17.5) - 32 / 2.0, (MovablePositions[i].iX * 35 - 17.5) + 32 / 2.0, (MovablePositions[i].iY * 35 - 17.5) + 32 / 2.0);
		}
	}

	for (int i = 0; i < AttackableEnemies.size(); i++)
	{
		setcolor(RED);
		circle(AttackableEnemies[i]->GetPosition().iX * 35 - 17.5, AttackableEnemies[i]->GetPosition().iY * 35 - 17.5, 17);
		setcolor(WHITE);
	}

	for (int i = 0; i < HealableAllies.size(); i++)
	{
		setcolor(RED);
		circle(HealableAllies[i]->GetPosition().iX * 35 - 17.5, HealableAllies[i]->GetPosition().iY * 35 - 17.5, 17);
		setcolor(WHITE);
	}

	for (int i = 0; i < DancableAllies.size(); i++)
	{
		setcolor(RED);
		circle(DancableAllies[i]->GetPosition().iX * 35 - 17.5, DancableAllies[i]->GetPosition().iY * 35 - 17.5, 17);
		setcolor(WHITE);
	}

	Draw();
	Sleep(100);
}

void GameScene::InitAct()
{
	PossibleActions.clear();

	PossibleActions.push_back(WAIT);

	for (int i = 0; i < AttackableEnemies.size(); i++)
	{
		if (SelectedCharacter->IsAttackable(AttackableEnemies[i]) == false)
		{
			AttackableEnemies.erase(AttackableEnemies.begin() + i);
			i--;
		}
	}

	if (AttackableEnemies.size() != 0)
	{
		PossibleActions.push_back(ATTACK);
	}

	for (int i = 0; i < HealableAllies.size(); i++)
	{
		if (SelectedCharacter->IsHealable(HealableAllies[i]) == false)
		{
			HealableAllies.erase(HealableAllies.begin() + i);
			i--;
		}
	}

	if (HealableAllies.size() != 0)
	{
		PossibleActions.push_back(USE_HEAL);
	}

	for (int i = 0; i < DancableAllies.size(); i++)
	{
		if (SelectedCharacter->IsDancable(DancableAllies[i]) == false)
		{
			DancableAllies.erase(DancableAllies.begin() + i);
			i--;
		}
	}

	if (DancableAllies.size() != 0)
	{
		PossibleActions.push_back(USE_DANCE);
	}

	if (SelectedCharacter->IsUseElixirPossible() == true)
	{
		PossibleActions.push_back(USE_ELIXIR);
	}

	if (SelectedCharacter->IsUseVulneraryPossible() == true)
	{
		PossibleActions.push_back(USE_VULNERARY);
	}

	Phase = ACT;

	iActOption = 0;

	GameCursor.Erase();

	for (int i = 0; i < MovablePositions.size(); i++)
	{
		if (MovablePositions[i].iX != SelectedCharacter->GetPosition().iX ||
			MovablePositions[i].iY != SelectedCharacter->GetPosition().iY)
		{
			GameMap.GetTerrain(MovablePositions[i].iX, MovablePositions[i].iY)->Draw();
		}
	}

	for (int i = 0; i < Side1Characters.size(); i++)
	{
		Side1Characters[i]->Draw(SIDE1);
	}

	for (int i = 0; i < Side2Characters.size(); i++)
	{
		Side2Characters[i]->Draw(SIDE2);
	}

	Draw();
	Sleep(100);
}

void GameScene::InitSelectTarget()
{
	Phase = SELECTTARGET;

	switch (SelectedAction)
	{
	case ATTACK:
		for (int i = 0; i < AttackableEnemies.size(); i++)
		{
			setcolor(RED);
			circle(AttackableEnemies[i]->GetPosition().iX * 35 - 17.5, AttackableEnemies[i]->GetPosition().iY * 35 - 17.5, 17);
			setcolor(WHITE);
		}

		break;
	case USE_HEAL:
		for (int i = 0; i < HealableAllies.size(); i++)
		{
			setcolor(RED);
			circle(HealableAllies[i]->GetPosition().iX * 35 - 17.5, HealableAllies[i]->GetPosition().iY * 35 - 17.5, 17);
			setcolor(WHITE);
		}

		break;
	case USE_DANCE:
		for (int i = 0; i < DancableAllies.size(); i++)
		{
			setcolor(RED);
			circle(DancableAllies[i]->GetPosition().iX * 35 - 17.5, DancableAllies[i]->GetPosition().iY * 35 - 17.5, 17);
			setcolor(WHITE);
		}

		break;
	}

	Draw();
	Sleep(100);
}

GameScene::GameScene(vector<Character*> vSide1Characters, vector<Character*> vSide2Characters, Map StageMap)
{
	Side1Characters = vSide1Characters;
	Side2Characters = vSide2Characters;

	IsGameOver = false;

	GameMap = StageMap;
}

GameScene::~GameScene()
{
}

void GameScene::Init()
{
	Phase = SELECTCHARACTER;

	Turn = SIDE1;

	GameCursor.SetLimit(1, 20, 1, 20);

	GameCursor.SetPosition(20, 10);

	GameCursor.Draw();

	GameMap.Draw();

	for (int i = 0; i < Side1Characters.size(); i++)
	{
		Side1Characters[i]->Draw(SIDE1);
	}

	for (int i = 0; i < Side2Characters.size(); i++)
	{
		Side2Characters[i]->Draw(SIDE2);
		Side2Characters[i]->EndTurn();
	}

	Draw();
	Sleep(100);

	PlaySound(TEXT("GameScene.wav"), NULL, SND_LOOP | SND_ASYNC);
}

void GameScene::Update()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			ProcessLeftArrow();
		}

		if (GetAsyncKeyState(VK_RIGHT))
		{
			ProcessRightArrow();
		}

		if (GetAsyncKeyState(VK_UP))
		{
			ProcessUpArrow();
		}

		if (GetAsyncKeyState(VK_DOWN))
		{
			ProcessDownArrow();
		}

		if (GetAsyncKeyState(VK_RETURN))
		{
			ProcessEnter();
		}

		if (IsGameOver == true)
		{
			Sleep(500);

			Scene *GameOver = new GameOverScene(Winner);
			
			GameOver->Init();
			GameOver->Update();

			return;
		}
	}
}
