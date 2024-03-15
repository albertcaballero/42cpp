#include "Character.hpp"

	// Character(Character const& old);
	// Character operator=(Character const& old);

	// void equip(AMateria* m);
	// void unequip(int idx);
	// void use(int idx, ICharacter& target);

Character::Character() : _name("Cloud"){
	std::cout << "Character Default Constructor called\n";
}

Character::~Character() {
	std::cout << "Character Default Destructor called\n";
}

Character::Character(std::string const& name): _name(name){
	std::cout << "Character String Constructor called\n";
}

// Character::Character(Character const& old){
// 	std::cout << "Character Copy Constructor called\n";
// 	// UNFINISHED
// }

std::string const& Character::getName() const {
	return (_name);
}