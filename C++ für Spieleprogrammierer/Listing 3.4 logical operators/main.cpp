// Author: Aaron Machill
// Date: 8:52 PM || 01.08.2018
// Last edit: 5:45 PM || 03.08.2018
// 
// Project: Listing 3.4 logical operators
// File: main.cpp

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
