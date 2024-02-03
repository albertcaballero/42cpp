#include "HumanB.hpp"

HumanB::HumanB(std::string gname)
{
	name = gname;
}

HumanB::~HumanB()
{

}

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}

void HumanB::setWeapon(Weapon gweap)
{
	weap = gweap;
}