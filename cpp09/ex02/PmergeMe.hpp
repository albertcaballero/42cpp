#ifndef PMERGE_HPP_
#define PMERGE_HPP_

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <iterator>

void sortVec(std::vector<int> &cont, int beg, int end);
void sortDeq(std::deque<int> &cont, int beg, int end);
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
void	printContainer(T & arr){
	for (typename T::iterator it = arr.begin(); it != arr.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename T>
void insertionSort(T &cont){
    for (unsigned int step = 0; step < cont.size(); step++){
        unsigned int key = cont[step];
        int j = step - 1;
        while (j >= 0 && key < cont[j]){
            cont[j + 1] = cont[j];
            j--;
        }
        cont[j + 1] = key;
    }
}

template <typename T>
void	mergeSort(T &cont, int left, int mid, int right)
{  
    T temp(right - left + 1);
    int i = left, j = mid+1, k = 0;
    while (i <= mid && j <= right) 
    {
        if (cont[i] <= cont[j])
            temp[k++] = cont[i++];
        else
            temp[k++] = cont[j++];
    }
    while (i <= mid)
        temp[k++] = cont[i++];
    while (j <= right)
        temp[k++] = cont[j++];
    for (int p = 0; p < k; p++)
    cont[left+p] = temp[p];
}

#endif