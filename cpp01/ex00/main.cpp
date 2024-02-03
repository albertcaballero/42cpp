#include "Zombie.hpp"

int main(void)
{
	Zombie *zumbi;

	randomChump("Pedro");
	zumbi = newZombie("Miguelito");
	zumbi->Announce();
	delete(zumbi);
	return 0;
}