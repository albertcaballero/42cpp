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
	virtual ~AForm();
	AForm &operator=(AForm const& old);
	AForm(AForm const &old);

	std::string getName() const;
	bool		isSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	void		beSigned(Bureaucrat const& buro);
	void		execute(Bureaucrat const & executor) const;	
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
	class FormNotSignedException : public std::exception{
		const char* what() const throw();
	};
	virtual void execution() const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif
