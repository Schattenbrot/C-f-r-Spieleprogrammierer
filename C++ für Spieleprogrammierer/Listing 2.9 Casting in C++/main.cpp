/*
* C++ für Spieleprogrammierer
* Listing 2.8
* Casting in C++
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

	// Input
	std::cout << "Input reached points: ";
	std::cin >> points;

	// Math out score and cast result
	score = static_cast<int> (points*fFactor);

	// output score
	std::cout << "Total score: " << score << std::endl;

	system("PAUSE");
	return 0;
}
