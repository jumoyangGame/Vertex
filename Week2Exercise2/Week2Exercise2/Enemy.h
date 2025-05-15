#pragma once
#include "Characters.h"
#include <string>
#include <random>

class Enemy : public Character
{
public:

	//Constructor
	Enemy(int health, int attack, int defence, std::string name);

	//Function
	std::string ChooseAction() override;

	void IncreaseDifficulty(int roundNumber);

private:

	std::mt19937 RNG;

	std::uniform_int_distribution<> Distribution;

};

