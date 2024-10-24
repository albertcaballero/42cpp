#ifndef ARRAY_T_
#define ARRAY_T_

#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	arr = NULL;
	_len = 0;
}

template <typename T>
Array<T>::Array(size_t n) {
	arr = new T[n]();
	_len = n;
}

template <typename T>
Array<T>::Array(Array &old){
	this->_size = old.size;
	arr = new T[this->_size]();
	for (int i = 0; i< this->size; ++i)
		arr[i] = old.arr[i];
}

template <typename T>
Array<T> Array<T>::operator=(Array &old){
	this->_size = old.size;
	if (this->_size != 0)
        delete [] _arr;
	arr = new T[this->_size]();
	for (int i = 0; i< this->size; ++i)
		arr[i] = old.arr[i];
	return *this;
}

template <typename T>
Array<T>::~Array( void )
{
    if (_arr)
        delete[] _arr;
}

template <typename T>
T Array<T>::size(){
	return _len;
}

template <typename T>
T Array::operator[](size_t n) const{
	if (n >= _len)
		throw std::out_of_range("Index out of range");
	return arr[n];
}

#endif