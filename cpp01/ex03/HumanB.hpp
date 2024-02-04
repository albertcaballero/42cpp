#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weap;
public:
	HumanB(std::string name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon weap);
};

#endif