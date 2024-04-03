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
	Character* cloud = new Character("clou");
	Character seph("seph");
	seph = *cloud;
	cloud->equip(tmp);
	cloud->use(0, seph);
	seph.use(0, *cloud);

	std::cout << std::endl << "============= DELETES =================="  << std::endl;
	delete cloud;
	delete bob;
	delete me;
	delete src;
	delete tmp;
	return 0;
}
