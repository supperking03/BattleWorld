#pragma once

#include <iostream>

class RandomNumberGenerator
{
public:
	RandomNumberGenerator();
	~RandomNumberGenerator();

	static int GenerateRandomNumber(int Min, int Max);

	static bool IsSucceeded(int Percent);
};

