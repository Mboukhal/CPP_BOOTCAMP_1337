#include "FragTrap.hpp"

int main( void ) {

	FragTrap lio	("lios");

	lio.highFivesGuys	();
	lio.printStatus 	();
	lio.attack			("heallo");
	lio.takeDamage		(0);
	lio.beRepaired		(5);

	return 0;
}