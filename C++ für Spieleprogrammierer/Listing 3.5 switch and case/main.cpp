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

	std::cout << "(I)ntro, (P)lay, (O)ptions, (C)lose: ";
	std::cin >> chChoice;

	switch (chChoice)
	{
	case ('i'):
		{
	    	std::cout << "Play intro!" << std::endl;
		} break;
    case ('s'):
		{
	    	std::cout << "Game will be started!" << std::endl;
		} break;
	case ('o'):
		{
		    std::cout << "Configuring of options!" << std::endl;
		} break;
	case('c'):
		{
			std::cout << "Close game!" << std::endl;
		} break;
	default:
		{
			std::cout << "wrong input" << std::endl;
		}
	}

	std::cout << "Game closes" << std::endl;

	system("PAUSE");
	return 0;

}
