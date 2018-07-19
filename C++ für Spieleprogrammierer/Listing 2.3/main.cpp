/*
 * C++ für Spieleprogrammierer
 * Listing 2.3
 * Math with variables
 * 
 * Author:	Aaron
 * Date:	20.7.2018
 */
#include <iostream>

int main(int argc, char* argv[])
{
	// Variables
	int bonuspoints{}, resttime{}, diamonds{};
	int timebonus{}, diamondbonus{};
	int pointsPerDiamond{}, pointsPerSecond{};
	
	// Declaration
	resttime = 12;
	diamonds = 16;
	pointsPerDiamond = 30;
	pointsPerSecond = 15;

	// Bonus for resttime
	timebonus = resttime * pointsPerSecond;
	std::cout << "Timebonus: " << timebonus << std::endl;

	// Bonus for diamonds
	diamondbonus = diamonds * pointsPerDiamond;
	std::cout << "Diamondbonus: " << diamondbonus << std::endl;

	// All bonuspoints
	bonuspoints = timebonus + diamondbonus;
	std::cout << "Total points: " << bonuspoints << std::endl;

	system("PAUSE");
	return 0;
}
