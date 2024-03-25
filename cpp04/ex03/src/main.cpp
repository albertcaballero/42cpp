#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	AMateria* tmp;
	ICharacter* bob = new Character("bob");
	std::cout << "\n===============================" << std::endl << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());//leaks

	tmp = src->createMateria("ice"); //leaks
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *me);
	bob->use(3, *me); //no output bc it is not assigned

	std::cout << std::endl << "==============================="  << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}