#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRF_"+target, 72, 45), _target(target) {
	
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::execution() const{
    // std::cout << "executed robotomy" << std::endl;
	std::cout << "Brrrrrr brrrrrr...\n";
}
