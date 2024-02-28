#ifndef DiamondTRAP_H_
#define DiamondTRAP_H_

#include <iomanip>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
public:
	DiamondTrap();
	DiamondTrap(std::string const& _name);
	~DiamondTrap();
	void attack(std::string const &target);
	DiamondTrap operator=(DiamondTrap const &old);
	DiamondTrap(DiamondTrap const &old);
	void guardGate();
private:
	int mode;
};

#endif
