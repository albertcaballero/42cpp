#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Lasaña"){
	hp = 100;
	ep = 50;
	ad = 20;
	std::cout << "Created a FragTrap (default)\n";
}

FragTrap::FragTrap(std::string const& _name) : ClapTrap(_name){
	hp = 100;
	ep = 50;
	ad = 20;
	std::cout << "Created a FragTrap (string)\n";
}

FragTrap FragTrap::operator=(FragTrap const &old){
	std::cout << "Duplicated a FragTrap (default)\n";
	FragTrap n(old);
	return n;
}

FragTrap::FragTrap(FragTrap const &old){
	hp = old.hp;
	ad = old.ad;
	ep = old.ep;
	name = old.name;
	std::cout << "Copied a FragTrap (copy)\n";
}

FragTrap::~FragTrap(){
	std::cout << "Destroyed a FragTrap (destructor), poor thing :(\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << name << " high five!!\n";
}
