#include <iostream>
#include "Serializer.hpp"

int main( void )
{
    Data datas;
    
    std::cout << "Ptr to serializer " << &datas << std::endl;
    uintptr_t uptrs = Serializer::serialize(&datas);
    std::cout << "Uintptr_t  " << uptrs << std::endl;
    std::cout << "Ptr serializer " << Serializer::deserialize(uptrs) << std::endl;
}
