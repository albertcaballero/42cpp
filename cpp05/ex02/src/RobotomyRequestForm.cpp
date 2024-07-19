#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRF_"+target, 72, 45), _target(target) {
	
}

void	RobotomyRequestForm::executeForm(void) const{
	std::cout << "Brrrrrr brrrrrr...\n";
	
}