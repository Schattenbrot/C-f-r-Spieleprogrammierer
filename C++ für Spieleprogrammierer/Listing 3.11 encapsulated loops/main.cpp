// Author: Aaron Machill
// Date: 5:51 PM || 03.08.2018
// Last edit: 5:52 PM || 03.08.2018
// 
// Project: Listing 3.11 encapsulated loops
// File: main.cpp

#include <iostream>

int main(int argc, char* argv[])
{
	int width{}, height{};

	std::cout << "Width: ";
	std::cin >> width;

	std::cout << "Height: ";
	std::cin >> height;

	for (auto i = 0; i < height; ++i)
	{
		for (auto y= 0; y < width; ++y)
		{
			std::cout << "X";
		}

		std::cout << std::endl;
	}

	system("PAUSE");
	return 0;
}
