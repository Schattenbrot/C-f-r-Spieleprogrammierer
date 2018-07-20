/*
* C++ für Spieleprogrammierer
* Listing 3.2
* if and else
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

	// Show old highscore and points
	std::cout << "Current highscore: " << highscore << "\n";
	std::cout << "Current points: " << ownPoints << std::endl;

	// Highscore comparison with only if
	std::cout << "Comparison with only if used:" << std::endl;
	if (ownPoints <= highscore)
	{
		std::cout << "Highscore not broken!" << std::endl;
	}
	if(ownPoints > highscore)
	{
		std::cout << "Highscore broken!" << std::endl;
	}

	// Highscore comparison with if and else
	std::cout << "\nComparison with if and else:" << std::endl;
	if (ownPoints <= highscore)
	{
		std::cout << "Highscore not broken" << std::endl;
	}
	else
	{
		std::cout << "Highscore broken!" << std::endl;
	}

	system("PAUSE");
	return 0;
}
