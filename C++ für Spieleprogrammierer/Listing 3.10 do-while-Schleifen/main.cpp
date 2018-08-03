// Author: Aaron Machill
// Date: 5:15 PM || 03.08.2018
// Last edit: 5:45 PM || 03.08.2018
// 
// Project: Listing 3.10 do-while-Schleifen
// File: main.cpp

#include <iostream>

int main(int argc, char* argv[])
{
	int counter{};

	std::cout << "Please insert a start value: ";
	std::cin >> counter;

	do
	{
		std::cout << "Value of counter: " << counter << std::endl;
		counter--;
	}
	while (counter > 0);
	system("PAUSE");
	return 0;
}
