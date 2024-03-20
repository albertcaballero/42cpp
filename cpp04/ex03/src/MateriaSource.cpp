#include "MateriaSource.hpp"

/* 	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const& old);
	MateriaSource operator=(MateriaSource const& old);
*/

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor called\n";
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource default destructor called\n";
}

MateriaSource::MateriaSource(MateriaSource const& old){
	std::cout << "MateriaSource copy constructor called\n";
}

MateriaSource MateriaSource::operator=(MateriaSource const& old){
	std::cout << "MateriaSource = constructor called\n";
}


void learnMateria(AMateria*);
AMateria* createMateria(std::string const & type); 
