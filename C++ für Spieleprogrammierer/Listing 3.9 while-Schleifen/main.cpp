// Author: Aaron Machill
// Date: 5:09 PM || 03.08.2018
// Last edit: 5:41 PM || 03.08.2018
// 
// Project: Listing 3.9 while-Schleifen
// File: main.cpp

#include <iostream>

int main(int argc, char* argv[])
{
	int choice{};

	while (choice != 3)
	{
		std::cout << "Menue: " << std::endl;
		std::cout << "-------" << std::endl;
		std::cout << "1: start game" << std::endl;
		std::cout << "2: options" << std::endl;
		std::cout << "3: close" << std::endl;

		std::cout << "Your choice: ";
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == 1)
		{
			std::cout << "> The game got started";
		}
		else if (choice == 2)
		{
			std::cout << "> Options will be configured";
		}
		else if (choice == 3)
		{
			std::cout << "The game will be closed";
		}
		else
		{
			std::cout << "Wrong input";
		}

		std::cout << "\n\n\n";
	}

	system("PAUSE");
	return 0;
}
