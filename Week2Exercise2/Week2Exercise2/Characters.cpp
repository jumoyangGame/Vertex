#include "Characters.h"

//constructor
Character::Character(int health, int attack, int defence, std::string name) :health(health), attack(attack), defence(defence), name(name) {}



//getters
int Character::GetHealth() const
{
	return health;
}

int Character::GetAttack() const
{
	return attack;
}

std::string Character::GetName() const
{
	return name;
}

bool Character::isAlive() const
{
	return health > 0;
}

//functions
void Character::UpdateHealth(int amount)
{
	health += amount;

	if (health < 0)
	{
		health = 0;
	}
}

std::string Character::GetActionFromInput(int input)
{
	switch (input)
	{
	case 0:
		return "Attack";
	case 1:
		return "Parry";
	case 2:
		return "Defend";
	default:
		return "Unknown";
	}
}
