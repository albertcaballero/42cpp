#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon weap;
public:
	HumanA(/* args */);
	~HumanA();
};

#endif