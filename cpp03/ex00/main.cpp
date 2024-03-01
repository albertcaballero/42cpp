#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap twoB("2B");
	ClapTrap nines("9S");

	std::cout  << "\n\033[38;5;190m================\033[0m\n\n";
	for (int i = 0; i < 11; ++i)
		twoB.attack("Adam");

	std::cout  << std::endl;
	nines.takeDamage(9);
	nines.attack("2B");
	nines.takeDamage(7);
	nines.attack("2B");
	nines.beRepaired(2);
	std::cout  << std::endl;

	twoB.beRepaired(2);
	std::cout  << "\n\033[38;5;190m================\033[0m\n\n";
}