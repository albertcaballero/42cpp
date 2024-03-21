#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria type constructor called\n";
}

AMateria::AMateria() : _type("ice") {
	std::cout << "AMateria default constructor called\n";
}

AMateria::~AMateria(){
	std::cout << "AMateria default destructor called\n";
}

AMateria::AMateria(AMateria const &old) {
	std::cout << "AMateria copy constructor called\n";
	this->_type = old._type;
}

std::string const &AMateria::getType() const{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "used raw materia at " << target.getName() << std::endl;
}