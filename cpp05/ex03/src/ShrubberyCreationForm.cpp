#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCF_"+target, 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	AForm::operator=(other);
	return (*this);
}

void	ShrubberyCreationForm::execution() const
{
	const std::string	name = this->_target + "_shrubbery";
	std::ofstream	file(name.c_str());

    std::cout << "executed shrubbery" << std::endl;
	if (file.fail())
		std::cerr << "Error opening file." << std::endl;
	else
	{
		file << "          &&& &&  & &&\n"
             "      && &\\/&&\\|& ()|/ @, &&\n"
             "      &\\/(/&/&||/& /_/)_&/_&\n"
             "   &() &\\/&|()|/&\\/ '%' & ()\n"
             "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
             "&&   && & &| &| /& & % ()& /&&\n"
             " ()&_---()&\\&\\|&&-&&--%---()~\n"
             "     &&     \\|||\n"
             "             |||\n"
             "             |||\n"
             "             |||\n"
             "       , -=-~  .-^- _\"" << std::endl;
		file.close();
	}
}
