#ifndef EASYFIND_H_
#define EASYFIND_H_

#include <algorithm>
#include <exception>

template <typename T>
void easyfind(T a, int b)
{
    if (std::find(a.begin(), a.end(), b) == a.end())
		throw (std::out_of_range("Not found"));
	std::cout << "found the number " << b << std::endl;
}

#endif