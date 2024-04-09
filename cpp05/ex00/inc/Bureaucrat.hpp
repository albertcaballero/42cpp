#ifndef BUREAUCRAT_H_
#define BUREAUCRAT_H_

#include <iostream>

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
};

class GradeTooHighException : public std::exception{
private:
	std::string _msg;
public:
	GradeTooHighException();
	~GradeTooHighException();
	std::string getMsg();
};

class GradeTooLowException : public std::exception{
private:
	std::string _msg;
public:
	GradeTooLowException();
	~GradeTooLowException();
	std::string getMsg();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &buro);

#endif
