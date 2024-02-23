#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hp(10), ad(0), ep(10), name("Pedro"){
	std::cout << "Constructed a ClapTrap (default)\n";
}

ClapTrap::ClapTrap(std::string _nam): hp(10), ad(0), ep(10), name(_nam) {
	std::cout << "Constructed a ClapTrap (string)\n";
}

ClapTrap::~ClapTrap(){
	std::cout << "Deconstructed a ClapTrap (dest)\n";
}

ClapTrap::ClapTrap(ClapTrap const& old)
{
	hp = old.hp;
	ad = old.ad;
	ep = old.ep;
	name = old.name;
	std::cout << "Copied a ClapTrap (copy)\n";
}

ClapTrap ClapTrap::operator=(ClapTrap const& old){
	std::cout << "Duplicated a ClapTrap (default)\n";
	ClapTrap n(old);
	return n;
}

void ClapTrap::attack(const std::string& target)
{
	if (ep <= 0 || hp <= 0)
		std::cout << "ClapTrap " << name<< " cannot attack because it has no energy!";
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing "\
			<< this->ad << " point of damage!\n";
		ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap took " << amount << " of damage!\n";
	hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ep < 0 || hp <= 0)
		std::cout << "ClapTrap " << name<< " cannot attack because it has no energy!";
	else
	{
		std::cout << "beepboop, ClapTrap is reparing for " << amount << " health points!\n";
		ep--;
	}
}