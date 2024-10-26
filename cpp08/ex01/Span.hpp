#ifndef SPAN_H_
#define SPAN_H_

#include <algorithm>
#include <vector>
#include <stdexcept>
#include <climits>

class Span{
private:
	size_t _n;
	std::vector<int> _vec;
public:
	Span();
	Span(size_t a);
	~Span();

	void addNumber(int a);
	void addMany(int a, int b);
	int	shortestSpan();
	int longestSpan();
};

#endif
