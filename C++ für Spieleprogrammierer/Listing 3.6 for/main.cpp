/*
* C++ für Spieleprogrammierer
* Listing 3.6
* logical operators
*
* Author:	Aaron
* Date:	1.8.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	int RoundNumber{};
	int RoundPoints{};
	int TotalPoints{};

	std::cout << "How many rounds should the game have: ";
	std::cin >> RoundNumber;

	for (int i = 0; i < RoundNumber; ++i)
	{
		std::cout << "Round " << i + 1 << " now" << std::endl;
		std::cout << "How many points got reached? ";
		std::cin >> RoundPoints;

		TotalPoints += RoundPoints;

		std::cout << "Current standing: " << TotalPoints << std::endl << std::endl;
	}

	std::cout << "\nAfter " << RoundNumber << " rounds were " << TotalPoints << " points reached." << std::endl;

	system("PAUSE");
	return 0;
}
