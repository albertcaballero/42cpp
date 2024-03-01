#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

class Animal{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(Animal const& old);
	Animal operator=(Animal const& old);
	virtual void makeSound() const;
	std::string getType() const;
};

#endif