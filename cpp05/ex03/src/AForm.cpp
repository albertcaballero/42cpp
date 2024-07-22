#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int exeGrade) : _name(name), _signed(false), _exeGrade(exeGrade) {
	if (signGrade> 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (signGrade< 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		_signGrade = signGrade;
}

AForm::AForm() : _name("form1"), _signed(false), _signGrade(92), _exeGrade(23) {
	// std::cout << "AForm constructor called" << std::endl;
}

AForm::~AForm() {
	// std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(AForm const& old){
	this->_name = old._name;
	this->_signed = old._signed;
	this->_exeGrade = old._exeGrade;
	this->_signGrade = old._signGrade;
}

AForm &AForm::operator=(AForm const& old){
	this->_name = old._name;
	this->_signed = old._signed;
	this->_exeGrade = old._exeGrade;
	this->_signGrade = old._signGrade;
	return *this;
}

std::string AForm::getName() const{
	return _name;
}
bool	AForm::isSigned() const{
	return _signed;
}

int	AForm::getSignGrade() const {
	return _signGrade;
}

int	AForm::getExecGrade() const {
	return _exeGrade;
}

void AForm::beSigned(Bureaucrat const& buro){
	if (buro.getGrade() <= this->_signGrade)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, AForm const &form){
	out << "Form " << form.getName() << ", sign Level: " << form.getSignGrade() << ", exec Level: " << form.getExecGrade();
	if (form.isSigned())
		out << ", is SIGNED;\n";
	else
		out << ", is NOT SIGNED;\n";
	return out;
}

const char *AForm::GradeTooHighException::what() const throw(){
	return "Form too high";
}
const char *AForm::GradeTooLowException::what() const throw(){
	return "Form too low";
}
const char *AForm::FormNotSignedException::what() const throw(){
	return "Form not signed";
}

void		AForm::execute(Bureaucrat const & executor) const{
	if (!isSigned()){
		throw (AForm::FormNotSignedException());
	}
	if (executor.getGrade() > getExecGrade()){
		throw (AForm::GradeTooHighException());
	}
	execution();
}

void	AForm::execution() const{
	std::cout << "Default execution" << std::endl;
}
