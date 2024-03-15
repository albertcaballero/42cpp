#ifndef CURE_H_
#define CURE_H_

#include <iostream>
#include <AMateria.hpp>

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const& old);
	Cure operator=(Cure const& old);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif