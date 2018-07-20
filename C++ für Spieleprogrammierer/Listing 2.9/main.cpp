/*
* C++ für Spieleprogrammierer
* Listing 2.9
* Find mistakes in the code
*
* Author:	Aaron
* Date:	20.7.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	// Variables
	const int speedlimit{ 100 };
	float fSpeed{ 130.8f };
	int difference{};

	// Try to outsmart the speedchecker
	speedlimit = 150; //funktioniert nicht, weil const

	// difference
	difference = fSpeed - speedlimit;

	// output
	std::cout << "Here are " << speedlimit << "km/h tolerated.\n";
	std::cout << "You drove with " << fSpeed << "km/h.\n";
	std::cout << "You drove " << difference << "km/h too fast.\n";

	system("PAUSE");
	return 0;
}
