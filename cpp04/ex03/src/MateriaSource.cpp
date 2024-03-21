#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor called\n";
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource default destructor called\n";
}

MateriaSource::MateriaSource(MateriaSource const& old){
	for (int i = 0; i < 4; ++i)
		inventory[i] = old.inventory[i];
	std::cout << "MateriaSource copy constructor called\n";
}

MateriaSource MateriaSource::operator=(MateriaSource const& old){
	MateriaSource creat;
	for (int i = 0; i < 4; ++i)
		creat.inventory[i] = old.inventory[i];
	std::cout << "MateriaSource = constructor called\n";
	return creat;
}

void MateriaSource::learnMateria(AMateria* old)
{
	if (!old)
		return;
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = old;
			return;
		}
		if (i == 3){
			std::cout << "Materia inventory is full!\n";
			return;
		}
	}
	return;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *creat;
	if (type == "ice")
		creat = new Ice();
	else if (type == "cure")
		creat = new Cure();
	else
		creat = new Ice();
	return creat;
}
