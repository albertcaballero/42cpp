#ifndef DIAMONDTRAP_H_
#define DIAMONDTRAP_H_

#include <iomanip>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
public:
	DiamondTrap();
	DiamondTrap(std::string const& _name);
	~DiamondTrap();
	DiamondTrap operator=(DiamondTrap const &old);
	DiamondTrap(DiamondTrap const &old);
	void whoAmI();
private:
	std::string name;
};

#endif
