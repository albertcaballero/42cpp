#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout  << "_____2B_______\n";
	DiamondTrap twoB("2B");
	std::cout  << "_____9S_______\n";
	DiamondTrap nines; //default name = Lasaña
	std::cout  << "_____1A_______\n";
	ClapTrap pod("042");

	std::cout  << "\n\033[38;5;190m================\033[0m\n\n";
	twoB.whoAmI();
	twoB.attack("Pietro");
	twoB.highFivesGuys();
	nines.whoAmI();
	nines.beRepaired(2);
	nines.takeDamage(4);
	std::cout << std::endl;
	for (int i=0; i<11; ++i)
		pod.attack("2B");
	std::cout  << "\n\033[38;5;190m================\033[0m\n\n";
}
