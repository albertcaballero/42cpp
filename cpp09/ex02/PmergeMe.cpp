#include "PmergeMe.hpp"

bool	check_int(const std::string str)
{
	if (str > "2147483647" || str.length() > 10)
		return false;
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

std::vector<int> sortVec(std::vector<int> unsorted){
	
}

std::deque<int> sortDeq(std::deque<int> unsorted){

}