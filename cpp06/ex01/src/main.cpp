#include <iostream>
#include "Serializer.hpp"

int main( void )
{
    Data testing;
    
    std::cout << "Ptr no serializer " << &testing << std::endl;
    uintptr_t hola = Serializer::serialize(&testing);
    std::cout << "Uintptr_t  " << hola << std::endl;
    std::cout << "Ptr serializer " << Serializer::deserialize(hola) << std::endl;
}