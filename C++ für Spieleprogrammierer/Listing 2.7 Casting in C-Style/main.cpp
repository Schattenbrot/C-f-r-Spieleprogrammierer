/*
* C++ für Spieleprogrammierer
* Listing 2.7
* Casting in C-Style
*
* Author:	Aaron
* Date:	20.7.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	// Variables
	int points{};
	float fFactor{ 2.5f };
	int score{};

	// Input of points
	std::cout << "Insert reached points: ";
	std::cin >> points;

	// Math out the score and cast result
	score = (int)(points*fFactor);

	// output of result
	std::cout << "Total score: " << score << "\n";

	system("PAUSE");
	return 0;
}
