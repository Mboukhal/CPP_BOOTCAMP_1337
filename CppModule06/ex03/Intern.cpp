#include "Intern.hpp"

Intern::Intern ( void ) {
	if (PRINT_CALLS)
		std::cout << "Intern constractor called" << std::endl;
	return;
}

Intern::Intern ( Intern const& obj ) :
_formName( obj.getFName() ), _targetName( obj.getTName() )
{
	if (PRINT_CALLS)
		std::cout << "Intern copy constractor called" << std::endl;
	return;
}

Intern::~Intern ( void ) {
	if (PRINT_CALLS)
		std::cout << "Intern deconstractor called" << std::endl;
	return;
}

Intern& Intern::operator = ( Intern const& obj ) {
	if (PRINT_CALLS)
		std::cout << "Intern copy assignment called" << std::endl;
	this->_formName = obj.getFName();
	this->_targetName = obj.getTName();
	return *this;
}

std::string Intern::getFName ( void ) const {
	return this->_formName;
}

std::string Intern::getTName ( void ) const {
	return this->_targetName;
}


Form* Intern::makeForm ( std::string form, std::string target ) {
	Form* res = NULL;

	std::string quiry[3] = { 
							"presidential pardon",
							"robotomy request",
							"shrubbery creation"
							};
	int i = 0;
	while ( i != 3 ) {
		if ( quiry[i] == form )
				break;
		i++;
	}
	switch ( i )
	{
	case 0:
		res = new PresidentialPardonForm( target );
		break;
	case 1:
		res = new RobotomyRequestForm( target );
		break;
	case 2:
		res = new ShrubberyCreationForm( target );
		break;
	default:
		std::cout << "Can't create Intern  " << form << std::endl; 
		return res;
	}
	std::cout << "Intern creates " << form << std::endl; 
	return res;
}