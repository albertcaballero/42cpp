#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPF_"+target, 25, 5), _target(target) {
	
}

void	PresidentialPardonForm::executeForm(void) const{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
