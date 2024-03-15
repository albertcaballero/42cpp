#ifndef AMATERIA_H_
#define AMATERIA_H_

#include <iostream>
#include "Character.hpp"

class AMateria
{
protected:
	// [...]
public:
	AMateria(std::string const & type);
	// [...]
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif