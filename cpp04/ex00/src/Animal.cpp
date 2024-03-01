#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor called\n";
}

Animal::~Animal(){
	std::cout << "Animal destructor called\n";
}

Animal::Animal(Animal const& old)
{
	this->type = old.type;
	std::cout << "Animal copy constructor called\n";
}

Animal Animal::operator=(Animal const& old)
{
	std::cout << "Animal = constructor called\n";
	Animal n(old);
	return n;
}

void Animal::makeSound() const
{
	std::cout << "..... [Silence] .....\n";
}

std::string Animal::getType() const
{
	return type;
}
