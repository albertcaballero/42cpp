#ifndef AMATERIA_H_
#define AMATERIA_H_

#include <iostream>
#include "Character.hpp"

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria();
	~AMateria();
	AMateria(AMateria const &old);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif