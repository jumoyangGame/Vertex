#include "Player.h"
#include <iostream>

//The base class part of the object must be fully constructed before the derived class can start construction.

Player::Player(int health, int attack, int defence,std::string name): Character(health,attack,defence,name)
{

}

//Functions
std::string Player::ChooseAction()
{
	int input;

	//let player choose input
	//cin into input
	//if input is invalid, clear input and let them re-input again untile it's right
	while (true)
	{
		std::cout << "Choose your action: 1) Attack, 2)Parry, 3)Defend" << std::endl;

		std::cin >> input;

		if (std::cin.fail() || input < 1 || input > 3)
		{
			// removes error flag 
			std::cin.clear(); 
			//discards the rest of the input from the buffer, so you can start fresh.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Input Invalid, Choose your action: 1) Attack, 2)Parry, 3)Defend" << std::endl;
		}
		else
		{
			break;
		}
	}

	input -= 1;

	return GetActionFromInput(input);

}
