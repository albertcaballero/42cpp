#ifndef BUREAUCRAT_H_
#define BUREAUCRAT_H_

#include <iostream>
#include "Form.hpp"

class Bureaucrat{
private:
	std::string _name;
	int	_grade;
public:
	Bureaucrat(std::string const, int);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &old);
	Bureaucrat operator=(Bureaucrat const &old);

	int	getGrade() const;
	std::string getName() const;
	void increaseGrade();
	void decreaseGrade();
	void signForm(Form const& form);
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &buro);

#endif
