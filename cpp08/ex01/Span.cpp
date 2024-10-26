#include "Span.hpp"

Span::Span():_n(0){}
Span::~Span(){}
Span::Span(size_t a) : _n(a){}

void Span::addNumber(int a){
	if (_vec.size() >= _n)
		throw std::out_of_range("Too many elements");
	_vec.push_back(a);
}

void Span::addMany(int start, int last){
	int i = start;
	if (start > last){
		i = last;
		last = start;
	}
	for (; i < last+1; ++i){
		if (_vec.size() >= _n)
			throw std::out_of_range("Too many elements");
		_vec.push_back(i);
	}
}

int myDiff(int a, int b){
	if (a > b)
		return a - b;
	return b -a;
}

int Span::shortestSpan(){
	if (_vec.size() < 2)
		throw std::out_of_range("Not enough elements to perform Span");
	std::vector<int>::iterator it=_vec.begin();
	std::vector<int>::iterator it2;
	int diff = INT_MAX;
	while(it < _vec.end()){
		it2=_vec.begin();
		while (it2 < _vec.end()){
			if (it2 == it)
				++it2;
			if (myDiff(*it2, *it) < diff)
				diff = myDiff(*it2, *it);
			++it2;
		}
		++it;
	}

	return diff;
}

int Span::longestSpan(){
	if (_vec.size() < 2)
		throw std::out_of_range("Not enough elements to perform Span");
	std::vector<int>::iterator minIt = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::iterator maxIt = std::max_element(_vec.begin(), _vec.end());
	return *maxIt - *minIt;
}