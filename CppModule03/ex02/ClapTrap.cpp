#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name) { 

	this->setSstatus();
	std::cout << "ClapTrap constructer called." << std::endl;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap destructer called." << std::endl;
}

void ClapTrap::setSstatus ( int hp, int ep, int ad ) {

	this->_hitPoints = hp;
	this->_energyPoints = ep;
	this->_attackDemage = ad;
}

void ClapTrap::printStatus ( void ){

	std::cout << "\nCalpTrap status > " << this->_name << " <" 
			 << "\n\thitPoints:\t" << this->_hitPoints
			  << "\n\tenergyPoints:\t" << this->_energyPoints
			  << "\n\tattackDemage:\t"<< this->_attackDemage << '\n' << std::endl;
}

void ClapTrap::attack ( const std::string& target ) {

	if (this->_energyPoints) {

		std::cout << "ClapTrap " << this->_name << " attack "
				<< target  << ", causing " << this->_attackDemage
				<< " points of damage!" << std::endl;
	this->_energyPoints--;
	}
	else
		std::cout << "No energy!" << std::endl;
}

void ClapTrap::takeDamage ( unsigned int amount ) {

	if ( amount ) {

		this->_hitPoints -= amount;
		if (this->_hitPoints >= 1){

			std::cout << "ClapTrap "<< this->_name
					  << " dameged: " << amount << std::endl;
		}
		else
			this->_hitPoints = 0;
	}
	else
		std::cout << "No damege to take (-_~)!" << std::endl;
	if ( !this->_hitPoints )
		std::cout << "ClapTrap death" << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount ) {

	if ( this->_energyPoints || this->_hitPoints ) {

			if ( amount >= 1 ) {

			this->_hitPoints += amount;
			this->_energyPoints--;
			std::cout << "ClapTrap new health state: "
					<< this->_hitPoints << std::endl;
			}
			else
				std::cout << "Can't add zero Braaa (\'_\') !" << std::endl;

			return;
			
	}
	if ( !this->_hitPoints ) {

		std::cout << "ClapTrap alredy death" << std::endl;
		return;
	}
	if ( !this->_energyPoints )
		std::cout << "No energy points" << std::endl;
}

std::string	ClapTrap::getName( void ) {

	return this->_name;
}

int	ClapTrap::getHp( void ) {

	return this->_hitPoints;
}

int	ClapTrap::getenergyPoints( void ) {

	return this->_energyPoints;
}

int	ClapTrap::getattackDemage( void ) {

	return this->_attackDemage;
}
