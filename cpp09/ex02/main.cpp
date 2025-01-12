#include "PmergeMe.hpp"

int main(int argc, char** argv){
	if (argc < 2){
		std::cout << "Error: please provide arguments" << std::endl;
		return -1;
	}
	try{
		// std::cout << std::fixed; 
		clock_t	time = clock();
		std::vector<int> inputVec = parseInput<std::vector<int>>(&argv[1]);
		std::vector<int> sortedVec = sortVec(inputVec);
		time = clock() - time;
		std::cout << "Time to process a range of " << inputVec.size() << " elements with std::vector : " << static_cast<double>(time)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

		time = clock();
		std::deque<int>	inputDeq = parseInput<std::deque<int>>(&argv[1]);
		std::deque<int>	sortedDeq = sortDeq(inputDeq);
		time = clock() - time;
		std::cout << "Time to process a range of " << inputDeq.size() << " elements with std::deque : " << static_cast<double>(time)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

	}catch(std::exception &e){
		std::cout << "Error: " << e.what()<<std::endl;
	}
}