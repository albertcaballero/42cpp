#include "Character.hpp"


Character::Character() : _name("Cloud"){
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	std::cout << "Character Default Constructor called\n";
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "Character Default Destructor called\n";
}

Character::Character(std::string const& name): _name(name){
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	std::cout << "Character String Constructor called\n";
}

// Character(Character const& old);
// Character operator=(Character const& old);

std::string const& Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return;
		}
		if (i == 3){
			std::cout << "inventory is full!\n";
			return;
		}
	}
	return;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	// floor[idx] = inventory[idx];
	inventory[idx] = NULL;
	return;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return;
	if (inventory[idx] == NULL)
		return;
	std::cout << "(" << _name << ") ";
	inventory[idx]->use(target);
}