/*
* C++ für Spieleprogrammierer
* Listing 3.4
* logical operators
*
* Author:	Aaron
* Date:	1.8.2018
*/
#include <iostream>

int main(int argc, char* argv[])
{
	char chChoice{};

	std::cout << "(f)ree for all or (t)eamplay? ";
	std::cin >> chChoice;

	if ((chChoice == 'f') || (chChoice == 'F'))
	{
		std::cout << "Free for all" << std::endl;
	}
	else if ((chChoice == 't') || (chChoice == 'T'))
	{
		std::cout << "Teamplay" << std::endl;
	}
	else
	{
		std::cout << "Wrong input" << std::endl;
	}

	system("PAUSE");
	return 0;
}
