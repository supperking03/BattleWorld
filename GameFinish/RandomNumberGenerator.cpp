#include "RandomNumberGenerator.h"

int RandomNumberGenerator::GenerateRandomNumber(int Min, int Max)
{
	return Min + rand() % (Max - Min + 1);
}

RandomNumberGenerator::RandomNumberGenerator()
{
}


RandomNumberGenerator::~RandomNumberGenerator()
{
}

bool RandomNumberGenerator::IsSucceeded(int Percent)
{
	int iRandom = GenerateRandomNumber(0, 100);

	if (iRandom > Percent)
	{
		return false;
	}
	else
	{
		return true;
	}
}
