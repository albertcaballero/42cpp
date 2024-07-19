#ifndef AFORM_H_
#define AFORM_H_

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm{
private:
	std::string _name;
	bool		_signed;
	int			_signGrade;
	int			_exeGrade;
public:
	AForm();
	AForm(std::string name, int signGrade, int exeGrade);
	~AForm();
	AForm(AForm const &old);
	AForm operator=(AForm const &old);

	std::string getName() const;
	bool		isSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	void		beSigned(Bureaucrat const& bruo);
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
