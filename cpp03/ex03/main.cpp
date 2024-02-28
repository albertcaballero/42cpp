#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap twoB("2B");
	FragTrap nines("9S");
	ClapTrap adam("Adam");

	std::cout  << "\n================\n\n";
	adam.attack("2B");
	adam.beRepaired(12);
	twoB.attack("Adam");
	adam.takeDamage(20);
	adam.attack("9S");
	nines.attack("Adam");
	adam.takeDamage(20);
	adam.attack("9S");
	twoB.highFivesGuys();
	nines.highFivesGuys();
	std::cout  << "\n================\n\n";
}
