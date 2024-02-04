#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : _name(name), _weap(weap)
{

}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weap.getType() << std::endl;
}