#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal{
public:
	Dog();
	~Dog();
	Dog(Dog const& old);
	Dog operator=(Dog const& old);
	virtual void makeSound() const;
	void think();
private:
	Brain *brain;
};

#endif
