#ifndef WEAPON_H
#define WEAPON_H

#include <iomanip>
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(/* args */);
	~Weapon();
	std::string getType();
	void	setType(std::string);
};

#endif