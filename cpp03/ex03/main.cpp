#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout  << "_____2B_______\n";
	DiamondTrap twoB("2B");
	std::cout  << "_____9S_______\n";
	DiamondTrap nines; //default name = Lasaña

	std::cout  << "\n\033[38;5;190m================\033[0m\n\n";
	twoB.whoAmI();
	twoB.attack("Pietro");
	twoB.highFivesGuys();
	nines.whoAmI();
	nines.beRepaired(2);
	nines.takeDamage(4);
	std::cout  << "\n\033[38;5;190m================\033[0m\n\n";
}
