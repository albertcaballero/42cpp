#ifndef FORM_H_
#define FORM_H_

#include <iostream>
#include "Bureaucrat.hpp"

class Form{
private:
	std::string _name;
	bool		_signed;
	int			_signGrade;
	int			_exeGrade;
public:
	Form();
	Form(std::string name, int signGrade, int exeGrade);
	~Form();
	Form(Form const &old);
	Form operator=(Form const &old);

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