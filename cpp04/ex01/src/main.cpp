#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int size = 10;
	const Animal* meta[size];
	std::cout << std::endl;
	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < size; ++i) {
        delete meta[i];
    }

	Dog test;
	Dog deep = test;
	std::cout << &test << " and " << &deep <<std::endl;
	return 0;
}

