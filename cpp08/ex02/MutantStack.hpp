#ifndef MUTANT_H_
#define MUTANT_H_

template <typename T>
class MutantStack : public std::stack<T>{
private:
	std::vector<T> _a;
public:
	MutantStack();
	~MutantStack();


};

#include "MutantStack.tpp"

#endif
