#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zumba = new Zombie[N];
	for (int i = 0; i < N; i++)
		zumba[i].setName(name);
	return zumba;
}