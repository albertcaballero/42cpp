#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string gtype)
{
	type = gtype;
}