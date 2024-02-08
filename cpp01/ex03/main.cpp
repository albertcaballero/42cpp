#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
club.setType("espadón");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack(); //segfaults cuando attack without setweapon
club.setType("some other type of club");
jim.attack();
club.setType("puñetazooooo");
jim.attack();
}
return 0;
}