/*
* C++ für Spieleprogrammierer
* Listing 3.3
* else if encapsulated
*
* Author:	Aaron
* Date:	1.8.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	// Variables
	int PlayerNumber{};
	char chChoice{};

	// Find out Player Number
	std::cout << "How many players: ";
	std::cin >> PlayerNumber;

	//wrong input
	if (PlayerNumber == 0)
	{
		std::cout << "Wrong input" << std::endl;
	}

	// Singleplayer or Multiplayer
	if (PlayerNumber == 1)
	{
		std::cout << "You are playing against the AI" << std::endl;
	}
	else
	{
		std::cout << "Multiplayer game" << std::endl << std::endl;
		std::cout << "(a)ll vs all or (t)eamplay? ";
		std::cin >> chChoice;

		// Free for all
		if(chChoice == 'a')
		{
			std::cout << "Free for all!" << std::endl;
		}
		else if (chChoice == 't')
		{
			std::cout << "Teamplay!" << std::endl;
		}
		else
		{
			std::cout << "Wroing Input" << std::endl;
		}
	}

	system("PAUSE");
	return 0;
}
