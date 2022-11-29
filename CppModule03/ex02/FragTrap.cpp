#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap::ClapTrap(name) {

	ClapTrap::setSstatus( 100, 100, 30 );

	std::cout << "FragTrap constaractor called!" << std::endl;
	return;
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap deconstaractor called!" << std::endl;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "Let's go FragTraps!" << std::endl;
}