#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weap;
public:
	HumanA(std::string gname, Weapon gweap);
	~HumanA();
	void attack(void);
};

#endif