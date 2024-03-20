#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor called\n";
}

Cure::~Cure() {
	std::cout << "Cure default destructor called\n";
}
Cure::Cure(Cure const& old){
	std::cout << "Cure copy constructor called\n";
	this->_type = old._type;
}

Cure Cure::operator=(Cure const& old){
	std::cout << "Cure = constructor called\n";
	Cure n(old);
	return n;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria* Cure::clone() const{
	return new Cure();
}
