#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat(){
	std::cout << "Cat destructor called\n";
}

Cat::Cat(Cat const& old)
{
	this->type = old.type;
	std::cout << "Cat copy constructor called\n";
}

Cat Cat::operator=(Cat const& old)
{
	std::cout << "Cat = constructor called\n";
	Cat n(old);
	return n;
}

void Cat::makeSound() const
{
	std::cout << "Meooooow\n";
}
