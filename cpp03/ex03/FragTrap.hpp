#ifndef FragTRAP_H_
#define FragTRAP_H_

#include <iomanip>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
public:
	FragTrap();
	FragTrap(std::string const& _name);
	~FragTrap();
	FragTrap operator=(FragTrap const &old);
	FragTrap(FragTrap const &old);
	void highFivesGuys(void);
};

#endif
