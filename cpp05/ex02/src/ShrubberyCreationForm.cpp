#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCF_"+target, 145, 137), _target(target) {
}

void	ShrubberyCreationForm::executeForm(void) const
{
	const std::string	name = this->_target + "_shrubbery";
	std::ofstream	file(name);

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