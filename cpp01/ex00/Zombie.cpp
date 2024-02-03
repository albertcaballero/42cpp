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

//It creates a zombie, name it, and return it so you can use it outside of the function scope.
Zombie* newZombie( std::string name )
{
	Zombie *zomzom = new Zombie(name);
	return (zomzom);
}


//It creates a zombie, name it, and the zombie announces itself.
void randomChump( std::string name )
{
	Zombie zooomie(name);
	zooomie.Announce();
	return;
}