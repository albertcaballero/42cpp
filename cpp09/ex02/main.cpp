#include "PmergeMe.hpp"

int main(int argc, char** argv){
	if (argc < 2){
		std::cout << "Error: please provide arguments" << std::endl;
		return -1;
	}
	try{
		// std::cout << std::fixed; 
		clock_t	time = clock();
		std::vector<int> vec = parseInput<std::vector<int>>(&argv[1]);
		std::cout << "Before: "; printContainer<std::vector<int>>(vec);
		sortVec(vec, 0, vec.size());
		time = clock() - time;
		std::cout << "After: "; printContainer<std::vector<int>>(vec);
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << static_cast<double>(time)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

		time = clock();
		std::deque<int>	deq = parseInput<std::deque<int>>(&argv[1]);
		sortDeq(deq, 0, deq.size());
		time = clock() - time;
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << static_cast<double>(time)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

	}catch(std::exception &e){
		std::cout << "Error: " << e.what()<<std::endl;
	}
}