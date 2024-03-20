#include "Cure.hpp"

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}