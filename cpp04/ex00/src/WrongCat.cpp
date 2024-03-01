#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(WrongCat const& old)
{
	this->type = old.type;
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat WrongCat::operator=(WrongCat const& old)
{
	std::cout << "WrongCat = constructor called\n";
	WrongCat n(old);
	return n;
}

void WrongCat::makeSound() const
{
	std::cout << "Meooooow\n";
}
