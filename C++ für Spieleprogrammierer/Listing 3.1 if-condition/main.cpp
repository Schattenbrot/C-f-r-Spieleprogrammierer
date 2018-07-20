/*
* C++ für Spieleprogrammierer
* Listing 3.1
* if-condition
*
* Author:	Aaron
* Date:	20.7.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	// Variables
	int highscore{ 32500 };
	int ownPoints{};

	// Show old highscore
	std::cout << "Highscore: " << highscore << std::endl;

	// Input reached points
	std::cout << "Reached points: ";
	std::cin >> ownPoints;

	// Check if highscore is higher or not
	if (ownPoints < highscore)
	{
		std::cout << "Sadly no new highscore." << std::endl;
	}
	if (ownPoints > highscore)
	{
		std::cout << "Gratulations. You ranked first." << std::endl;
	}
	if(ownPoints == highscore)
	{
		std::cout << "That was close." << std::endl;
	}

	system("PAUSE");
	return 0;
}
