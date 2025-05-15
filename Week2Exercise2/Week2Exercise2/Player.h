#pragma once
#include "Characters.h"
#include <string>

//inherit from Character class

class Player : public Character
{

public:

	//Constructor
	Player(int health, int attack, int defence, std::string name);

	//Function
	std::string ChooseAction() override;

};


/*
Pubic members of Character remain public in Player
Protected members of Character remain protected in Player
Private members of Character remain inaccessible in Player (those Player can access them indirectly
through public or protected methods in Character)

If we use other Inheritance Type such as private or protected, the public members in Character class
will become private or protected in the Player class
*/
