#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

class AAnimal{
protected:
	std::string type;
public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(AAnimal const& old);
	// Animal operator=(Animal const& old);
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif