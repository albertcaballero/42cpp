#ifndef CLAPTRAP_H_
#define CLAPTRAP_H_

#include <iostream>
#include <iomanip>

class ClapTrap{
protected:
	int hp;
	int ad;
	int ep;
	std::string name;
public:
	ClapTrap();
	ClapTrap(std::string _name);
	~ClapTrap();
	ClapTrap operator=(ClapTrap const& old);
	ClapTrap(ClapTrap const& old);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
