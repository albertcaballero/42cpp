#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zomzom = new Zombie(name);
	return (zomzom);
}
