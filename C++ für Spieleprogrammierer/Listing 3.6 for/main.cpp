/*
* C++ für Spieleprogrammierer
* Listing 3.6
* for
*
* Author:	Aaron
* Date:	1.8.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	int roundNumber{};
	int roundPoints{};
	int totalPoints{};

	std::cout << "How many rounds should the game have: ";
	std::cin >> roundNumber;

	for (auto i = 0; i < roundNumber; ++i)
	{
		std::cout << "Round " << i + 1 << " now" << std::endl;
		std::cout << "How many points got reached? ";
		std::cin >> roundPoints;

		totalPoints += roundPoints;

		std::cout << "Current standing: " << totalPoints << std::endl << std::endl;
	}

	std::cout << "\nAfter " << roundNumber << " rounds were " << totalPoints << " points reached." << std::endl;

	system("PAUSE");
	return 0;
}
