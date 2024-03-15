#ifndef ICE_H_
#define ICE_H_

#include <iostream>
#include <AMateria.hpp>

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const& old);
	Ice operator=(Ice const& old);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif