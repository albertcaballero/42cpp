#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPF_"+target, 25, 5), _target(target) {
	
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::execution() const{
    // std::cout << "executed pardon" << std::endl;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

