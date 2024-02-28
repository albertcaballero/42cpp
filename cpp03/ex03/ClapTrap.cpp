#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hp(10), ad(0), ep(10), name("Pedro"){
	std::cout << "Constructed a ClapTrap (default)\n";
}

ClapTrap::ClapTrap(std::string _nam): hp(10), ad(0), ep(10), name(_nam) {
	std::cout << "Constructed a ClapTrap (string) " << name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Deconstructed a ClapTrap (dest) " << name << std::endl;
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
	if (ep <= 0)
		std::cout << "ClapTrap " << name<< " cannot attack because it has no energy!\n";
	else if (hp <= 0)
		std::cout << "ClapTrap " << name<< " cannot attack because it has no health!\n";
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing "\
			<< this->ad << " point of damage!\n";
		ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name <<" took " << amount << " of damage!\n";
	hp -= amount;
	if (hp <= 0)
		std::cout << name << " was defeated!!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ep <= 0)
		std::cout << "ClapTrap " << name<< " cannot be repaired because it has no energy!\n";
	if (hp <= 0)
		std::cout << "ClapTrap " << name<< " cannot be repaired because it has no health!\n";
	else
	{
		std::cout << "beepboop, ClapTrap " << name << " is reparing for " << amount << " health points!\n";
		hp += amount;
		ep--;
	}
}