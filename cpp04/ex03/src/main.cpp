#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"

void	subjectTest(void) {

	std::cout << "===========================================" << std::endl;
	std::cout << "Subject test" << std::endl;
	std::cout << "===========================================" << std::endl;

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	extraTests(void) {

	std::cout << "===========================================" << std::endl;
	std::cout << "Extra test" << std::endl;
	std::cout << "===========================================" << std::endl;

	IMateriaSource *	src = new MateriaSource();
	ICharacter *		mopo = new Character("Mopo");
	AMateria *			tmp;

	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	mopo->equip(tmp);
	mopo->equip(src->createMateria("icea"));

	tmp = src->createMateria("ice");
	mopo->equip(tmp);

	tmp = src->createMateria("cure");
	mopo->equip(tmp);

	tmp = src->createMateria("ice");
	mopo->equip(tmp);

	tmp = src->createMateria("cure");
	mopo->equip(tmp);
	delete tmp;
	mopo->unequip(0);

	Character *	ziski = new Character("Ziski");
	Character	ovi("Ovi");
	
	tmp = src->createMateria("cure");
	ziski->equip(tmp);
	tmp = src->createMateria("ice");
	ziski->equip(tmp);
	delete tmp;

	std::cout << "+++++++ Copy ovi = ziski +++++++" << std::endl;
	ovi = *ziski;

	std::cout << "+++++++ Testing interactions +++++++" << std::endl;
	mopo->use(0, *ziski);
	mopo->use(-1, *ziski);
	mopo->use(1, *ziski);
	mopo->use(2, *ziski);
	mopo->use(3, *ziski);
	mopo->use(4, *ziski);
	ovi.use(0, *mopo);
	ziski->use(1, ovi);

	delete src;
	delete mopo;
	delete ziski;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	AMateria* tmp;
	ICharacter* bob = new Character("bob");
	std::cout << "\n===============================" << std::endl << std::endl;

	Ice cold;
	AMateria* cura = new Cure();
	src->learnMateria(&cold);
	src->learnMateria(cura);
	delete cura;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(0, *me);

	std::cout << "\n==============Out of bounds=================" << std::endl << std::endl;
	src->learnMateria(NULL);
	bob->use(-1, *me);
	bob->use(1, *me); //has nothing assigned on 1
	bob->equip(NULL); //is NULL, nothing is assigned
	bob->use(1, *me); //still nothing assigned
	me->use(10, *me);

	std::cout << "\n============Test character deep copy==========" << std::endl << std::endl;
	ICharacter* cloud = new Character("clou");
	ICharacter* seph = new Character("seph");
	cloud->equip(tmp);
	cloud->use(0, *seph);
	seph->use(0, *cloud);
	delete cloud;
	delete seph;

	std::cout << std::endl << "==============================="  << std::endl;
	delete bob;
	delete me;
	delete src;
	delete tmp;
	return 0;
}

// si haces equip de 1 materia a 2 personajes segfault
// falta constructor asignacion y copia para Character