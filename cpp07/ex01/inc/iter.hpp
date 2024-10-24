#ifndef ITER_H_
#define ITER_H_

#include <iostream>

template <typename T>
void iter(T *a, size_t len, void(*func)(T))
{
	try{
		for (size_t i = 0; i < len; ++i){
			func(a[i]);
		}
	}catch ( std::exception& e ) {
		std::cout << "Out of bounds" << std::endl;
	}
}

template <typename T>
void printElement(T a)
{
	std::cout << a << std::endl;
}

#endif
