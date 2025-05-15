#include <iostream>
#include "Player.h"
#include "Enemy.h"

void PrintHealth(const Player& hero, const Enemy& opponent)
{
	std::cout << hero.GetName() << "'s health: " << hero.GetHealth() << std::endl;
	std::cout << opponent.GetName() << "'s health: " << opponent.GetHealth() << std::endl;
}

int main()
{
	Player hero(5, 2, 2, "Hero");
	Enemy opponent(1, 1, 0,"Goblin");
	
	int roundNumber = 1;


	while (hero.isAlive())
	{
		std::string playerAction = hero.ChooseAction();
		std::string opponentAction = opponent.ChooseAction();

		std::cout << "Player " << playerAction << "s" << std::endl;
		std::cout << "Opponent " << opponentAction << "s" << std::endl;

		if (playerAction == "Attack" && opponentAction == "Attack")
		{
			std::cout << "It's a clash!" << std::endl;
		}
		else if (playerAction == "Attack" && opponentAction == "Parry")
		{
			hero.UpdateHealth(-(opponent.GetAttack()*2));
			std::cout << "The Opponent Parries! Player takes " << opponent.GetAttack() * 2 << " damage!" << std::endl;
			PrintHealth(hero, opponent);
		}
		else if (playerAction == "Attack" && opponentAction == "Defend")
		{
			opponent.UpdateHealth(-(hero.GetAttack() / 2));
			std::cout << "The Opponent Defend! They take " << hero.GetAttack()/2 << " damage!" << std::endl;
			PrintHealth(hero, opponent);
		}
		else if (playerAction == "Defend" && opponentAction == "Attack")
		{
			hero.UpdateHealth(-(opponent.GetAttack() / 2));
			std::cout << "The Opponent Attack! you take " << opponent.GetAttack() / 2 << " damage!" << std::endl;
			PrintHealth(hero, opponent);
		}
		else if (playerAction == "Parry" && opponentAction == "Attack")
		{
			opponent.UpdateHealth(-(hero.GetAttack()*2));
			std::cout << "The Opponent Attack on your parry! they take " << hero.GetAttack()*2 << " damage!" << std::endl;
			PrintHealth(hero, opponent);
		}
		else
		{
			std::cout << "Nothing happened" << std::endl;
		}
		if (!opponent.isAlive())
		{
			std::cout << "You've defeat the enemy, a stronger foe appears!" << std::endl;
			roundNumber += 1;
			if (roundNumber > 5)
			{
				std::cout << "You've deafeat all the opponents!" << std::endl;
				break;
			}
			opponent.IncreaseDifficulty(roundNumber);

		}

	}

	//std::cout << hero.GetName() << std::endl;
	//std::cout << opponent.GetName() << std::endl;
	//std::cout << opponent.GetHealth() << std::endl;

	//opponent.IncreaseDifficulty(2);
	//std::cout << opponent.GetName() << std::endl;
	//std::cout << opponent.GetHealth() << std::endl;

	if (!hero.isAlive())
	{
		std::cout << "You died" << std::endl;
	}


	std::cout << "Thanks for playing" << std::endl;

	return 0;
}
