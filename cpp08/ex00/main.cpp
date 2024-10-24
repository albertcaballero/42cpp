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
        easyfind(vec, 12);
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(lis, 123);
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(deq, 7);
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(vec, 6);
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(lis, 6);
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    try{
        easyfind(deq, 6);
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}