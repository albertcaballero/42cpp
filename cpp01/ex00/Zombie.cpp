#include "Zombie.hpp"

std::string Zombie::get_name()
{
	return (name);
}

void	Zombie::Announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string gname)
{
	name = gname;
	std::cout << "Zombie " << gname << " appeared!\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << get_name() << " Died :(\n";
}
