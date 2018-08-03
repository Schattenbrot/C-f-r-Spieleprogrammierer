#include <iostream>
#include <emmintrin.h>

int main(int argc, char* argv[])
{
	int timer{};

	std::cout << "Please insert a timer: ";
	std::cin >> timer;

	if(!timer%2)
	{
		std::cout << "The inserted timer was even. We can't find it's mid.";
	}
	else {
		for (auto i = timer; i >= 0; --i)
		{
			std::cout << "Countdown: " << i;

			if ((timer / 2 + 1) == i)
			{
				std::cout << "\tTimer reached half.";
			}
			std::cout << std::endl;
		}
	}

	system("PAUSE");
	return 0;	
}
