#ifndef BASE_H_
#define BASE_H_

#include <iostream>

class Base{
public:
	virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

#endif