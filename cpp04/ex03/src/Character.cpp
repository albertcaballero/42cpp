#include "Character.hpp"


Character::Character() : _name("Cloud"){
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	std::cout << "Character Default Constructor called\n";
}

Character::~Character() {
	std::cout << "Character Default Destructor called\n";
}

Character::Character(std::string const& name): _name(name){
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	std::cout << "Character String Constructor called\n";
}

Character::Character(Character const& old)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = old.inventory[i];
	std::cout << "Character copy constructor called\n";
}
Character &Character::operator=(Character const& old)
{
	if (this == &old)
		return *this;
	this->_name = old.getName();
	for (int i = 0; i < 4; ++i)
	{
		//delete this->inventory[] or take to trash/floor
		this->inventory[i] = old.inventory[i];
	}
	std::cout << "Character = constructor called\n";
	return *this;
}

std::string const& Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "cannot equip, no materia given" << std::endl;
		return;
	}
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
	{
		std::cout << "cannot use, index out of range" << std::endl;
		return;
	}
	if (inventory[idx] == NULL)
	{
		std::cout << "cannot use, slot not assigned" << std::endl;
		return;
	}
	std::cout << "(" << _name << ") ";
	inventory[idx]->use(target);
}