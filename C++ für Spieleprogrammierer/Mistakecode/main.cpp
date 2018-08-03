// Author: Aaron Machill
// Date: 5:57 PM || 03.08.2018
// Last edit: 6:02 PM || 03.08.2018
// 
// Project: Mistakecode
// File: main.cpp

#include <iostream>

int main(int argc, char* argv[])
{
	int width{}, height{};

	do
	{
		std::cout << "Width: ";
		std::cin >> width;

		std::cout << "Height: ";
		std::cin >> height;
	} while ((width % 2 == 0) || (height % 2 == 0));

	for (auto i = 0; i < height; ++i)
	{
		for (auto y = 0; y < width; ++y)
		{
			if((y == width / 2) || (i == height / 2))
			{
				std::cout << "-";
			}
			else
			{
				std::cout << "X";
			}
			
		}
		std::cout << std::endl;
	}
	system("PAUSE");
	return 0;
}
