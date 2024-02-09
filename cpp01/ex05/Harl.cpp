#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "\
 "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	void (Harl::*fnts[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string complaints[4];
	{
		complaints[0] = "DEBUG";
		complaints[1] = "INFO";
		complaints[2] = "WARNING";
		complaints[3] = "ERROR";
	}
	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
		{
			fnts[i](); //esto es lo que queda
			return;
		}
	}
	std::cout << "JFKLJASKLFJKLAJKLSJKLFJLJFKL\n";
}