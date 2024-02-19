#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap twoB("2B");
	ClapTrap nines("9S");
	ClapTrap adam("Adam");

	twoB.attack("Adam");
	twoB.takeDamage(5);
	twoB.beRepaired(2);
}