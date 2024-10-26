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
    try{
        easyfind(vec, 12); //not find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(lis, 123); //not find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(deq, 7); //not find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(vec, 6); //find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(lis, 4); //find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(deq, 1); //find
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}