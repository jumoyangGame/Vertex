#include "Enemy.h"
#include <iostream>

//The base class part of the object must be fully constructed before the derived class can start construction.

Enemy::Enemy(int health, int attack, int defence, std::string name) : Character(health, attack, defence, name), RNG(std::random_device{}()),Distribution(0,2)
{

}

//Functions
std::string Enemy::ChooseAction()
{
	/*
	RNG = random power source (like a shuffled deck).

	Distribution = way to pick cards (e.g., only red ones, only even numbers).

	Calling Distribution(RNG) = “Pick a card from the deck using this method.”
	*/

    int action = Distribution(RNG);

	return GetActionFromInput(action);
        

}

void Enemy::IncreaseDifficulty(int roundNumber)
{
	switch (roundNumber)
	{
	case 1:
		return;
	case 2:
		health += 1;
		name = "Big Goblin";
		break;
	case 3:
		health += 1;
		attack += 1;
		name = "Skeleton";
		break;
	case 4:
		health += 2;
		attack += 1;
		name = "Knight Skeleton";
		break;
	case 5:
		health += 2;
		attack += 2;
		defence += 1;
		name = "Skeleton Champion";
		break;
	default:
		std::cout << "Invalid Difficulty Input" << std::endl;
		break;
	}
}
