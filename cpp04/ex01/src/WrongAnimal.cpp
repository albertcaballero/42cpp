#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const& old)
{
	this->type = old.type;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal WrongAnimal::operator=(WrongAnimal const& old)
{
	std::cout << "WrongAnimal = constructor called\n";
	WrongAnimal n(old);
	return n;
}

void WrongAnimal::makeSound() const
{
	std::cout << "..... [Silence] .....\n";
}

std::string WrongAnimal::getType() const
{
	return type;
}
