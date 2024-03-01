#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("Lasaña"){
	hp = 100;
	ep = 50;
	ad = 30;
	ClapTrap::name = "Lasaña_clap_name";
	std::cout << "Created a DiamondTrap (default)\n";
}

DiamondTrap::DiamondTrap(std::string const& _name) : name(_name){
	hp = 100;
	ep = 50;
	ad = 30;
	ClapTrap::name = _name + "_clap_name";
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

void DiamondTrap::whoAmI()
{
	std::cout << name << " or not " << ClapTrap::name << "? that is the question" << std::endl;
}

