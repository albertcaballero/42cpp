#include "MutantStack.hpp"

#include <iostream>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top is " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size is " << mstack.size() << std::endl;
	std::cout << "Is empty? " << mstack.empty() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
	std::cout << "Full Content => ";
    for (; it != mstack.end(); ++it){
		std::cout << *it << ", ";
    }
	std::cout << std::endl;
    return 0;
}