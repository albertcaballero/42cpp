#ifndef BRAIN_H_
#define BRAIN_H_

#include <iostream>

class Brain{
private:
	std::string ideas[100];
public:
	Brain();
	virtual ~Brain();
	Brain(Brain const& old);
	Brain operator=(Brain const& old);
	
	void fill_ideas();
	void print_ideas();
};

#endif
