#include "Base.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base * generate(void){
	srand(time(NULL));
    switch (rand() % 3)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return (new Base());
}

void identify(Base* p){
	std::string type = "None";
	if (dynamic_cast<A*>(p))
		type = "A";
	else if (dynamic_cast<B*>(p))
		type = "B";
	else if (dynamic_cast<C*>(p))
		type = "C";
	std::cout= "C";
	std::cout << "type: " << type << std::endl;
}

void identify(Base& p){
	try
	{
		A a = dynamic_cast< A& >( p );
		std::cout << "type: A" << std::endl;
		(void)a;
		return ;
	}
	catch ( std::exception& e ) {}
	try
	{
		B b = dynamic_cast< B& >( p );
		std::cout << "type: B" << std::endl;
		(void)b;
		return ;
	}
	catch ( std::exception& e ) {}
	try
	{	
		C c = dynamic_cast< C& >( p );
		std::cout << "type: C" << std::endl;
		(void)c;
		return ;
	}
	catch ( std::exception& e ) {}
	std::cout << "type: Unknown" << std::endl;
}

int main(void)
{
    Base	*base;

	base = generate();
	identify( base );
	identify( *base );
    delete base;
	return ( 0 );
}
