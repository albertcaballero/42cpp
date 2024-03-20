#ifndef MATERIASOURCE_H_
#define MATERIASOURCE_H_

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;
class IMateriaSource;

class MateriaSource : public IMateriaSource
{
private:
	AMateria *inventory[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const& old);
	MateriaSource operator=(MateriaSource const& old);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif