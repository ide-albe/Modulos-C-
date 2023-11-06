#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap random1("Goku");
	ClapTrap random2("Vegetta");


	//RANDOM 1 & 2. ATTACK_DMG
	random1.set_attackdmg(3);
	random2.set_attackdmg(2);

	//RANDOM 1 & 2. ATTACKS
	random1.attack("Vegetta");

	random2.attack("Goku");

	//RANDOM 2. TAKES DAMAGE BY RANDOM1
	random1.takeDamage(random2.get_attackdmg());
	random2.takeDamage(random1.get_attackdmg());


	//RANDOM 2. HEALS UP
	random2.beRepaired(3);
	random2.beRepaired(1);

}