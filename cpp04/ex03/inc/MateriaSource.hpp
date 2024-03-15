#ifndef MATERIASOURCE_H_
#define MATERIASOURCE_H_

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const& old);
	MateriaSource operator=(MateriaSource const& old);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif