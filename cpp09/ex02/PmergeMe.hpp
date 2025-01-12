#ifndef PMERGE_HPP_
#define PMERGE_HPP_

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <iterator>

std::vector<int> sortVec(std::vector<int> unsortedVec);
std::deque<int> sortDeq(std::deque<int> unsortedDeq);
bool check_int(const std::string value);

template <typename T>
T	parseInput(char **argv){
	int	num;
	T	cont;

	for (size_t i = 0; argv[i]; i++){
		if (!check_int(argv[i]))
			throw std::runtime_error("Non valid number -> " + argv[i]);
		num = atoi(argv[i]);
		for (typename T::iterator it = cont.begin(); it != cont.end(); it++){
			if (num == *it)
				throw std::runtime_error("Duplicate number -> "+num);
		}
		cont.push_back(num);	
	}
	return (cont);
}

template <typename T>
void	printContainer(T & arr)
{
	for (typename T::iterator it = arr.begin(); it != arr.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

#endif