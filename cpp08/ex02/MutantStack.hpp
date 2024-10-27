#ifndef MUTANT_H_
#define MUTANT_H_

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack();
	~MutantStack();

	typedef typename std::stack< T >::container_type::iterator iterator;
	iterator begin();
	iterator end();

};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack< T >::iterator MutantStack<T>::begin(){
   return this->c.begin();
}

template <typename T>
typename MutantStack< T >::iterator MutantStack<T>::end(){
	return this->c.end();
}

#endif
