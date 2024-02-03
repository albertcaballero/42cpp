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
	Zombie();
	~Zombie();
	void		setName(std::string name);
	std::string	get_name();
	void		Announce(void);
};

Zombie* zombieHorde(int N, std::string name );

#endif //ZOMBIE_H