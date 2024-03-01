#ifndef WRONGCAT_H_
#define WRONGCAT_H_

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const& old);
	WrongCat operator=(WrongCat const& old);
	void makeSound() const;
};

#endif