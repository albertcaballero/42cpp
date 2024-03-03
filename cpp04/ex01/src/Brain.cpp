#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called\n";
	fill_ideas();
}

Brain::~Brain(){
	std::cout << "Brain destructor called\n";
}

Brain::Brain(Brain const& old)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = old.ideas[i];
	std::cout << "Brain copy constructor called\n";
}

Brain Brain::operator=(Brain const& old)
{
	std::cout << "Brain = constructor called\n";
	Brain n(old);
	return n;
}

void	Brain::fill_ideas()
{
	for (int i = 0; i < 100; ++i)
	{
		if (i % 5 == 0)
			ideas[i] = "I want to eat";
		else if (i % 2 == 0)
			ideas[i] = "I want to sleep";
		else
			ideas[i] = "I want to play!";
	}
}

void Brain::print_ideas()
{
	for (int i = 0; i < 100; ++i)
}