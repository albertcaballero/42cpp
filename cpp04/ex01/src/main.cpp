#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* doog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* lion = new WrongCat();
	std::cout << std::endl;

	std::cout << "doog type: " << doog->getType() << std::endl;
	std::cout << "cat type: " << cat->getType() << std::endl;
	cat->makeSound(); //will output the cat sound!
	doog->makeSound();
	std::cout << "meta type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << "lion type: " << lion->getType() << std::endl;
	lion->makeSound();

	std::cout << std::endl;
	delete meta;
	delete doog;
	delete cat;
	delete lion;
	return 0;
}