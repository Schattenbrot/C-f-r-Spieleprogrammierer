/*
* C++ für Spieleprogrammierer
* Listing 2.6
* input of values with cin
*
* Author:	Aaron
* Date:	20.7.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	//Variables
	int round1{}, round2{};
	int totalScore{};

	// Input of values
	std::cout << "Insert points of the first round: ";
	std::cin >> round1;

	std::cout << "Insert points of the second round: ";
	std::cin >> round2;

	// Math out and output of totalScore
	totalScore = round1 + round2;
	std::cout << "Reached Score: " << totalScore << "\n";

	system("PAUSE");
	return 0;
}
