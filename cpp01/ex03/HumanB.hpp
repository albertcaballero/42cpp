#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon weap;
public:
	HumanB(/* args */);
	~HumanB();
};

#endif