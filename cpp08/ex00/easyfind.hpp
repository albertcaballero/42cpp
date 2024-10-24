#ifndef EASYFIND_H_
#define EASYFIND_H_

#include <iostream>

template <typename T>
void easyfind(T a, int b)
{
    for (size_t i = 0; i < a.size(); ++i){
		if (a[i] == b){
			std::cout << "FOUND: " << b << " in position " << i << std::endl;
			return;
		}
	}
	throw std::out_of_range("Not found");
}

#endif