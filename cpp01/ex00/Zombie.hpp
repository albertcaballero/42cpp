#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iomanip>
#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string gname);
	~Zombie();
	std::string	get_name();
	void		Announce(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif //ZOMBIE_H