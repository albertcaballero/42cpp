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
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(0, *me);
	bob->use(3, *me); //no output bc it is not assigned
	me->use(10, *me); //no output bc outside of range

	std::cout << std::endl << "==============================="  << std::endl;
	std::cout << "=========DELETE BOB==========\n";
	delete bob;
	std::cout << "=======DELETE ME===========\n";
	delete me;
	std::cout << "==========DELETE SRC=========\n";
	delete src;
	return 0;
}

// si haces equip de 1 materia a 2 personajes segfault
// falta constructor asignacion y copia para Character