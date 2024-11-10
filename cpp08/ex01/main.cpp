#include <iostream>
#include "Span.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	try{
		Span sp = Span(5);
		sp.addNumber(2);
		sp.addNumber(1);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "===========2,1,17,9,11=======================" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Span dos = Span(200);
		dos.addMany(9, 200);
		std::cout << "==============from 9 to 200====================" << std::endl;
		std::cout << dos.shortestSpan() << std::endl;
		std::cout << dos.longestSpan() << std::endl;
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		std::cout << "==============size 1====================" << std::endl;
		Span tres = Span(1);
		tres.addNumber(2);
		tres.addNumber(1);
		tres.addNumber(2);
		tres.addNumber(1);
		std::cout << tres.shortestSpan() << std::endl;
		std::cout << tres.longestSpan() << std::endl;
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}