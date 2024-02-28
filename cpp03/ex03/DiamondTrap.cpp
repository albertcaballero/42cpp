#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Lasaña"){
	hp = 100;
	ep = 50;
	ad = 20;
	mode = 0;
	std::cout << "Created a DiamondTrap (default)\n";
}

DiamondTrap::DiamondTrap(std::string const& _name) : ClapTrap(_name){
	hp = 100;
	ep = 50;
	ad = 20;
	mode = 0;
	std::cout << "Created a DiamondTrap (string)\n";
}

DiamondTrap DiamondTrap::operator=(DiamondTrap const &old){
	std::cout << "Duplicated a DiamondTrap (default)\n";
	DiamondTrap n(old);
	return n;
}

DiamondTrap::DiamondTrap(DiamondTrap const &old){
	hp = old.hp;
	ad = old.ad;
	ep = old.ep;
	name = old.name;
	std::cout << "Copied a DiamondTrap (copy)\n";
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destroyed a DiamondTrap (destructor), poor thing :(\n";
}

void DiamondTrap::guardGate()
{
	std::cout << name << " entering Gate Keeper mode\n";
	mode = 1;
}

void DiamondTrap::attack(std::string const& target)
{
	if (mode == 1)
	{
		std::cout << name << " cannot attack because it is in guard mode\n";
		return ;
	}
	std::cout << "DiamondTrap " << name << " attacked " << target << " dealing " << ad << " points of damage!";
	std::cout << " crazyy!\n";
}
