/*
* C++ für Spieleprogrammierer
* Listing 2.5
* Overflow of variables
*
* Author:	Aaron
* Date:	20.7.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	// Variable on max value
	unsigned short overflow{ 65535 };
	std::cout << "Before overflow: " << overflow << std::endl;

	// +1
	++overflow;
	std::cout << "After overflow: " << overflow << std::endl;

	// -10
	overflow -= 10;
	std::cout << "And back: " << overflow << std::endl;

	system("PAUSE");
	return 0;
}
