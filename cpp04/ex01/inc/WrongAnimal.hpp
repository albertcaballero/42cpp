#ifndef WRONGANIMAL_H_
#define WRONGANIMAL_H_

#include <iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const& old);
	WrongAnimal operator=(WrongAnimal const& old);
	void makeSound() const;
	std::string getType() const;
};

#endif