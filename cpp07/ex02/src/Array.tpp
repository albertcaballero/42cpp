#ifndef ARRAY_T_
#define ARRAY_T_
#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	arr = NULL;
}

template <typename T>
Array<T>::Array(size_t n) {
	arr = new T[n];
}

template <typename T>
Array<T>::Array(Array &old){

}

template <typename T>
Array<T> Array<T>::operator=(Array &old){

}

template <typename T>
Array<T>::~Array( void )
{
    if (_arr)
        delete[] _arr;
}

template <typename T>
T Array<T>::size(size_t n){
	try{
		T val = arr[i];
	}catch(std::exception &e){
		std::cout << "index out of range" << std::endl;
	}
	return val;
}

template <typename T>
T Array::operator[](size_t n) const{
	return DynamicArray+size;
}

#endif