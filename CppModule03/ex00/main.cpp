#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap lio	("lios");

	lio.attack		("heallo");
	lio.printStatus	();
	lio.takeDamage	(0);
	lio.beRepaired	(5);
	lio.beRepaired	(0);
	lio.takeDamage	(20);

	return EXIT_SUCCESS;
}