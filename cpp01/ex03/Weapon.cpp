#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string weaponname)
{
	setType(weaponname);
}

Weapon::~Weapon()
{
}

std::string &Weapon::getType()
{
	std::string &tipooo = type;
	return (tipooo);
}

void	Weapon::setType(std::string gtype)
{
	type = gtype;
}