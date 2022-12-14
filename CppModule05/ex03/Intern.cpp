#include "Intern.hpp"

Intern::Intern ( void ) {
	if (PRINT_CALLS)
		std::cout << "Intern constractor called" << std::endl;
	this->_res_allocated = false;
	return;
}

Intern::Intern ( Intern const& obj ) :
_formName( obj.getFName() ), _targetName( obj.getTName() )
{
	if (PRINT_CALLS)
		std::cout << "Intern copy constractor called" << std::endl;
	this->_res_allocated = false;
	return;
}

Intern::~Intern ( void ) {
	if ( this->_res_allocated ){
		delete this->_res;
		this->_res_allocated = false;
	}
	if (PRINT_CALLS)
		std::cout << "Intern deconstractor called" << std::endl;
	return;
}

Intern& Intern::operator = ( Intern const& obj ) {
	if (PRINT_CALLS)
		std::cout << "Intern copy assignment called" << std::endl;
	this->_formName = obj.getFName();
	this->_targetName = obj.getTName();
	this->_res = obj.getForm();
	this->_res_allocated = obj.getAlloc();
	return *this;
}

bool Intern::getAlloc ( void ) const {
	return this->_res_allocated;
}

Form* Intern::getForm ( void ) const {
	return this->_res;
}


std::string Intern::getFName ( void ) const {
	return this->_formName;
}

std::string Intern::getTName ( void ) const {
	return this->_targetName;
}

Form* Intern::makeForm ( std::string form, std::string target ) {
	if ( this->_res_allocated ) {
		delete this->_res;
		this->_res_allocated = false;
	}
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
		throw InternGenerate();
		std::cout << form << std::endl;
		return NULL;
	}
	this->_res = res;
	this->_res_allocated = true;
	std::cout << "Intern creates " << form << std::endl; 
	return res;
}

const char* Intern::InternGenerate::what() const throw () {
	return ("Can't create Intern  ");
}