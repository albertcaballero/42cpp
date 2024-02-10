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
	if (_weap->getType() == "")
		std::cout << _name << " can't attack without a weapon!!" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
	_weap = &weap;
}