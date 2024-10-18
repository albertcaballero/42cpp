#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>

template <class T>
class Array {
private:
	T* arr;
public:
	Array();
	Array(size_t n);
	Array(Array &old);
	~Array( void );
	Array operator=(Array &old);
	size_t size();
	T& operator[](size_t n) const;
};

#endif