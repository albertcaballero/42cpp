#include "Form.hpp"

Form::Form(std::string name, int signGrade, int exeGrade) : _name(name), _signed(false), _exeGrade(exeGrade) {
	if (signGrade> 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (signGrade< 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		_signGrade = signGrade;
}

Form::Form() : _name("form1"), _signed(false), _signGrade(92), _exeGrade(23) {
	// std::cout << "Form constructor called" << std::endl;
}

Form::~Form() {
	// std::cout << "Form destructor called" << std::endl;
}

Form::Form(Form const& old){
	this->_name = old._name;
	this->_signed = old._signed;
	this->_exeGrade = old._exeGrade;
	this->_signGrade = old._signGrade;
}

Form Form::operator=(Form const& old){
	this->_name = old._name;
	this->_signed = old._signed;
	this->_exeGrade = old._exeGrade;
	this->_signGrade = old._signGrade;
	return *this;
}

std::string Form::getName() const{
	return _name;
}
bool	Form::isSigned() const{
	return _signed;
}

int	Form::getSignGrade() const {
	return _signGrade;
}

int	Form::getExecGrade() const {
	return _exeGrade;
}

void Form::beSigned(Bureaucrat const& buro){
	if (buro.getGrade() <= this->_signGrade)
		_signed = true;
	else
		throw (Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &out, Form const &form){
	out << "Form " << form.getName() << ", sign Level: " << form.getSignGrade() << ", exec Level: " << form.getExecGrade();
	if (form.isSigned())
		out << ", is SIGNED;\n";
	else
		out << ", is NOT SIGNED;\n";
	return out;
}

const char *Form::GradeTooHighException::what() const throw(){
	return "Form too high";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "Form too low";
}
