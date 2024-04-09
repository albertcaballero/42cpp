#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
	try {
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException);
		else if (grade < 1)
			throw (Bureaucrat::GradeTooHighException);
		else
			_grade = grade;
	}
	catch (int exception){
		if (exception == Bureaucrat::GradeTooHighException)
			std::cout << "Grade is too high" << std::endl;
		if (exception == Bureaucrat::GradeTooLowException)
			std::cout << "Grade is too low" << std::endl;
	}
	std::cout << "Bureaucrat constructor called" << std::endl;
}
Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& old){
	this->_grade = old._grade;
	this->_name = old._name;
}

Bureaucrat Bureaucrat::operator=(Bureaucrat const& old)
{
	this->_grade = old._grade;
	this->_name = old._name;
}

int	Bureaucrat::getGrade() const{
	return _grade;
}

std::string Bureaucrat::getName() const{
	return _name;
}

void Bureaucrat::increaseGrade(){
	_grade--;
}

void Bureaucrat::decreaseGrade(){
	_grade++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &buro){
	out << buro.getName() << ", bureaucrat grade " << buro.getGrade() <<  std::endl;
	return out;
}
