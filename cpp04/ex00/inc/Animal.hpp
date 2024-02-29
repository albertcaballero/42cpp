#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

class Animal{
protected:
	std::string type;
public:
	Animal();
	~Animal();
	Animal(Animal const& old);
	Animal operator=(Animal const& old);
};

#endif