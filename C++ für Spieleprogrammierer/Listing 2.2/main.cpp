/*
 * C++ für Spieleprogrammierer
 * Listing 2.2
 * Declaration and definition of variables part 2.
 * 
 * Author:	Aaron
 * Date:	20.7.2018
 */
#include <iostream>

int main(int argc, char* argv[])
{
	// Variables
	int xPos{ 50 };
	int yPos{ xPos };
	int speed{ 100 };


	std::cout << "Position x: " << xPos << std::endl;
	std::cout << "Position y: " << yPos << std::endl;

	system("PAUSE");
	return 0;
}
