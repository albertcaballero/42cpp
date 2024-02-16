#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hp(10), ad(0), ep(10), name("Pedro"){
}

ClapTrap::ClapTrap(std::string _nam): hp(10), ad(0), ep(10), name(_nam) {
}

ClapTrap::~ClapTrap(){

}

ClapTrap::ClapTrap(ClapTrap const& old)
{
	hp = old.hp;
	ad = old.ad;
	ep = old.ep;
	name = old.name;
}

ClapTrap ClapTrap::operator=(ClapTrap const& old){
	ClapTrap n(old);
	return n;
}

