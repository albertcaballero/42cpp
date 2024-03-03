#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int size = 50;
	const Animal* meta = new Animal[size];
	std::cout << std::endl;
	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
			meta[i] = Dog();
		else
			meta[i] = Cat();
	}

	std::cout << std::endl;
	delete[] meta;
	return 0;
}