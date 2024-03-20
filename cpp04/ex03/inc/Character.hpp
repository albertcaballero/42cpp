#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria *inventory[4];
	std::string _name;
public:
	Character();
	Character(std::string const& name);
	~Character();
	Character(Character const& old);
	Character operator=(Character const& old);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif