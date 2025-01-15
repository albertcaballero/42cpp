#include "PmergeMe.hpp"

bool	check_int(const std::string str){
	if (str.length() > 10)
		return false;
    for (size_t i = 0; i < str.length(); ++i){
        if (!isdigit(str[i]))
            return false;
    }
	long num = std::atol(str.c_str());
	if (num > 2147483647)
		return false;
    return true;
}

void	sortVec(std::vector<int> &cont, int beg, int end){
    int mid;

    if ((end - beg) > 5){
        mid = (beg+end)/2;  
        sortVec(cont, beg, mid);  
        sortVec(cont, mid+1, end);  
        mergeSort(cont, beg, mid, end);  
    }
    else
        insertionSort(cont);
}

void sortDeq(std::deque<int> &cont, int beg, int end){
    int mid;

    if ((end - beg) > 5){
        mid = (beg+end)/2;  
        sortDeq(cont, beg, mid);  
        sortDeq(cont, mid+1, end);  
        mergeSort(cont, beg, mid, end);  
    }
    else
        insertionSort(cont);
}