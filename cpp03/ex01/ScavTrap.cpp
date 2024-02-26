#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : name("Lasaña"), hp(100), ep(50), ad(20), mode(0) {}
ScavTrap::ScavTrap(std::string const& _name) : name(_name), hp(100), ep(50), ad(20), mode(0){}

ScavTrap ScavTrap::operator=(ScavTrap const &old){

}

ScavTrap::ScavTrap(ScavTrap const &old){

}

void ScavTrap::guardGate()
{
	std::clog << "entering Gate Keeper mode\n";
	mode = 1;
}