#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character();
	~Character();
	Character(Character const& old);
	Character operator=(Character const& old);
	
};

#endif