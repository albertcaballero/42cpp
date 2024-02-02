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
	std::cout << "Created Zombie\n";
}

Zombie::~Zombie()
{

}

Zombie* newZombie( std::string name );
//It creates a zombie, name it, and return it so you can use it outside of the function scope.
void randomChump( std::string name );
//It creates a zombie, name it, and the zombie announces itself.