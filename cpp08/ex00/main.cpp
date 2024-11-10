#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
    std::vector <int> vec;
    std::list <int> lis;
    std::deque <int> deq;

    for (int i = 0; i < 7; ++i){
        vec.push_back(i);
        lis.push_back(i);
        deq.push_back(i);
    }
	std::cout << "cont. from 1 to 6"<<std::endl;

    try{
		std::cout << "=====finding: 12"<<std::endl;
        easyfind(vec, 12); //not find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
		std::cout << "=====finding: 123"<<std::endl;
        easyfind(lis, 123); //not find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
		std::cout << "=====finding: 7"<<std::endl;
        easyfind(deq, 7); //not find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
		std::cout << "=====finding: 6"<<std::endl;
        easyfind(vec, 6); //find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
		std::cout << "=====finding: 4"<<std::endl;
        easyfind(lis, 4); //find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
		std::cout << "=====finding: 4"<<std::endl;
        easyfind(deq, 1); //find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}