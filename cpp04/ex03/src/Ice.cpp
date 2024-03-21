#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor called\n";
}
Ice::~Ice() {
	std::cout << "Ice default destructor called\n";
}
Ice::Ice(Ice const& old){
	std::cout << "Ice copy constructor called\n";
	this->_type = old._type;
}

Ice Ice::operator=(Ice const& old){
	std::cout << "Ice = constructor called\n";
	Ice n(old);
	return n;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const
{
	return new Ice();
}