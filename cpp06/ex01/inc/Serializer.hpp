#ifndef SERIALIZER_H_
#define SERIALIZER_H_

#include <iostream>

typedef struct t_data{
	int i;
	char c;
} Data;

class Serializer{
private:
	Serializer(void);
	Serializer(Serializer &old);
	Serializer operator=(Serializer &old);
	~Serializer();
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif
