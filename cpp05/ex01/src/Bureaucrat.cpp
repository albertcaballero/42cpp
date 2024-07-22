#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		_grade = grade;
	// std::cout << "Bureaucrat constructor called" << std::endl;
}
Bureaucrat::~Bureaucrat(){
	// std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& old){
	this->_grade = old._grade;
	this->_name = old._name;
}

Bureaucrat Bureaucrat::operator=(Bureaucrat const& old)
{
	this->_grade = old._grade;
	this->_name = old._name;
	return *this;
}

int	Bureaucrat::getGrade() const{
	return _grade;
}

std::string Bureaucrat::getName() const{
	return _name;
}

void Bureaucrat::increaseGrade(){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;	
}

void Bureaucrat::decreaseGrade(){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signForm(Form& form){
	if (this->_grade <= form.getSignGrade())
	{
		std::cout << this->_name << " signed " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	else{
		throw(Bureaucrat::GradeTooLowException());
		// std::cout << this->_name << " couldn't sign " << form.getName() << \
		// " because grade is too low" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &buro){
	out << buro.getName() << ", bureaucrat grade " << buro.getGrade() <<  std::endl;
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "Bureaucrat too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "Bureaucrat too low";
}
