#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{

}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
	_weap = &weap;
}