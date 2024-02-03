#include "Zombie.hpp"

int	main(void)
{
	int	num = 5;
	Zombie *zzzz = zombieHorde(num, "Picasso");

	for (int i = 0; i < 5; i++)
	{
		zzzz[i].Announce();
	}
	delete[] zzzz;
	return 0;
}