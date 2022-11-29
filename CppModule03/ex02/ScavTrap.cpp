#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap::ClapTrap(name) {

	ClapTrap::setSstatus( 100, 50, 20 );
	std::cout << "ScavTrap constaractor called!" << std::endl;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap deconstaractor called!" << std::endl;
}

void ScavTrap::guardGate	( void ) {

	std::cout << "ScavTrap " << ClapTrap::getName()
			  << " is now in Gate keeper mode."  << std::endl;
}