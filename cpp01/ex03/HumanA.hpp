#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weap;
public:
	HumanA(std::string name, Weapon &weap);
	~HumanA();
	void attack(void);
};

#endif