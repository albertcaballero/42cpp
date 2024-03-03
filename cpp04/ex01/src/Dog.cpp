#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog(){
	std::cout << "Dog destructor called\n";
	delete brain;
}

Dog::Dog(Dog const& old)
{
	this->type = old.type;
	this->brain = old.brain;
	std::cout << "Dog copy constructor called\n";
}

Dog Dog::operator=(Dog const& old)
{
	std::cout << "Dog = constructor called\n";
	Dog n(old);
	return n;
}

void Dog::makeSound() const
{
	std::cout << "woof woof\n";
}
