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
	HumanB(std::string gname);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon gweap);
};

#endif