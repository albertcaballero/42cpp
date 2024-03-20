#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}
AMateria::AMateria() : _type("ice") {}
AMateria::~AMateria(){}
AMateria::AMateria(AMateria const &old) {
	/*FALTA CODIGO*/
}


std::string const &AMateria::getType() const{
	return _type;
}