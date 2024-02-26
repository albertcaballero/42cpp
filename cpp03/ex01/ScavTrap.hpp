#ifndef SCAVTRAP_H_
#define SCAVTRAP_H_

#include <iomanip>
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string const& _name);
	~ScavTrap();
	ScavTrap operator=(ScavTrap const &old);
	ScavTrap(ScavTrap const &old);
	void guardGate();
private:
	int mode;
};

#endif
