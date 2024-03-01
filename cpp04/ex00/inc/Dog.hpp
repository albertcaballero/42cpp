#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"
#include <iostream>

class Dog: public Animal{
public:
	Dog();
	~Dog();
	Dog(Dog const& old);
	Dog operator=(Dog const& old);
	void makeSound() const;
};

#endif