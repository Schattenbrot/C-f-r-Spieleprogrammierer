// Author: Aaron Machill
// Date: 9:20 PM || 01.08.2018
// Last edit: 5:42 PM || 03.08.2018
// 
// Project: Listing 3.7 modulo
// File: main.cpp

#include <iostream>

int main(int argc, char* argv[])
{
	int number{};
	int divisor{};

	std::cout << "Please insert a number: ";
	std::cin >> number;

	std::cout << "Please insert a divisor: ";
	std::cin >> divisor;

	std::cout << "Result: " << number / divisor << std::endl;
	std::cout << "Rest: " << number % divisor << std::endl;

	system("PAUSE");
	return 0;
}
