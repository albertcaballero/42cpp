#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap twoB("2B");
	ScavTrap nines("9S");
	ClapTrap adam("Adam");

	std::cout  << "\n================\n\n";
	adam.attack("2B");
	twoB.attack("Adam");
	adam.takeDamage(20);
	adam.attack("9S");
	twoB.takeDamage(5);
	twoB.beRepaired(2);
	nines.guardGate();
	nines.attack("Adam");
	std::cout  << "\n================\n\n";
}
