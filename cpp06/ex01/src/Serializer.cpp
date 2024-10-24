#include "Serializer.hpp"

Serializer::Serializer(void){
    std::cout << "Default Constructor" << std::endl;
}

Serializer::Serializer(Serializer &old){
    std::cout << "Copy Constructor" << std::endl;
    *this = old;
}

Serializer Serializer::operator=(Serializer &old){
    (void)old;
    std::cout << "Copy Operator" << std::endl;
    return (*this);
}

Serializer::~Serializer(){
    std::cout << "Default Destructor" << std::endl;    
}

Data *Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
uintptr_t Serializer::serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}
