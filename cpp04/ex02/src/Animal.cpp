#include "Animal.hpp"

AAnimal::AAnimal() : type("Animal") {
	std::cout << "Animal default constructor called\n";
}

AAnimal::~AAnimal(){
	std::cout << "Animal destructor called\n";
}

AAnimal::AAnimal(AAnimal const& old)
{
	this->type = old.type;
	std::cout << "Animal copy constructor called\n";
}

// Animal Animal::operator=(Animal const& old)
// {
// 	std::cout << "Animal = constructor called\n";
// 	Animal n(old);
// 	return n;
// }

void AAnimal::makeSound() const
{
	std::cout << "..... [Silence] .....\n";
}

std::string AAnimal::getType() const
{
	return type;
}
