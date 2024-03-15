#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int size = 10;
	const AAnimal* meta[size];
	std::cout << std::endl;
	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << std::endl << std::endl;
	for (int i = 0; i < size; ++i) {
        delete meta[i];
		std::cout << "=====" << i << std::endl;
    }
	Dog test;
	Dog deep = test;
	std::cout << &test << " and " << &deep <<std::endl;
	Cat tiesto;
	Cat prof = tiesto;
	std::cout << &tiesto << " and " << &prof <<std::endl;
	std::cout << std::endl << std::endl;
	return 0;
}

