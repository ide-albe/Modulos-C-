#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap random1("Lee Sin");
	ScavTrap random2("Homeless");

	//RANDOM 1 & 2. ATTACKS
	random1.attack("Homeless");
	random1.guardGate();

	random2.attack("Lee Sin");
	random1.guardGate();

	//RANDOM 2. TAKES DAMAGE BY RANDOM1
	random1.takeDamage(random2.get_attackdmg());
	random1.guardGate();
	random2.takeDamage(random1.get_attackdmg());
	random1.guardGate();

	//RANDOM 2. HEALS UP
	random2.beRepaired(34);
	random1.guardGate();
	random2.beRepaired(1);
	random1.guardGate();
}