#pragma once
#include <string>

class Character
{

public:
	//constructor
	Character(int health, int attack, int defence, std::string name);
	
	//Getters
	int GetHealth() const;
	int GetAttack() const;
	std::string GetName() const;
	bool isAlive() const;

	//Setters
	

	//Functions
	void UpdateHealth(int amount);

	std::string GetActionFromInput(int input);

	virtual std::string ChooseAction() = 0;


protected:
	std::string name;
	int health;
	int attack;
	int defence;
};