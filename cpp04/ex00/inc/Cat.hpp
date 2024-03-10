#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{
public:
	Cat();
	~Cat();
	Cat(Cat const& old);
	Cat operator=(Cat const& old);
	virtual void makeSound() const;
};

#endif
