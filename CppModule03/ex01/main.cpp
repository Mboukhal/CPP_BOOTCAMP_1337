#include "ScavTrap.hpp"

int main( void ) {

	ScavTrap lio	("lios");

	lio.printStatus ();
	lio.guardGate ();
	// lio.attack ("heallo");
	// lio.takeDamage (0);
	// lio.beRepaired (5);

	return 0;
}