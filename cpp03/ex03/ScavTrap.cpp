#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Lasaña"){
	hp = 100;
	ep = 50;
	ad = 20;
	mode = 0;
	std::cout << "Created a ScavTrap (default)\n";
}

ScavTrap::ScavTrap(std::string const& _name) : ClapTrap(_name){
	hp = 100;
	ep = 50;
	ad = 20;
	mode = 0;
	std::cout << "Created a ScavTrap (string)\n";
}

ScavTrap ScavTrap::operator=(ScavTrap const &old){
	std::cout << "Duplicated a ScavTrap (duplicate)\n";
	ScavTrap n(old);
	return n;
}

ScavTrap::ScavTrap(ScavTrap const &old){
	hp = old.hp;
	ad = old.ad;
	ep = old.ep;
	name = old.name;
	std::cout << "Copied a ScavTrap (copy)\n";
}

ScavTrap::~ScavTrap(){
	std::cout << "Destroyed a ScavTrap (destructor), poor thing :(\n";
}

void ScavTrap::guardGate()
{
	std::cout << name << " entering Gate Keeper mode\n";
	mode = 1;
}

void ScavTrap::attack(std::string const& target)
{
	if (mode == 1)
	{
		std::cout << name << " cannot attack because it is in guard mode\n";
		return ;
	}
	std::cout << "ScavTrap " << name << " attacked " << target << " dealing " << ad << " points of damage!";
	std::cout << " crazyy!\n";
}
