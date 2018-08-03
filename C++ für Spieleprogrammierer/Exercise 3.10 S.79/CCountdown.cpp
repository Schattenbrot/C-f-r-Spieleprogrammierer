#include "CCountdown.h"

CCountdown::CCountdown(const int length) : length_{length}
{
}

CCountdown::~CCountdown()
{
}

int CCountdown::get_length() const
{
	return length_;
}

std::string CCountdown::start_countdown() const
{
	
	for (auto i = length_ - 1; i >= 0; --i)
	{
		if ((i / 2) + 1 == length_ / 2)
		{
			return "The countdown reached half of it";
		}
	}
}
