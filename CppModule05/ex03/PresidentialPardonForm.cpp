#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( void ) :
Form( "PresidentialPardonForm", 25, 5 ),
_target( "None" )
{
	if (PRINT_CALLS)
		std::cout << "PresidentialPardonForm constractor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm& obj ) :
Form( "PresidentialPardonForm", 25, 5 ),
_target( obj.getTarget() )
{
	if (PRINT_CALLS)
		std::cout << "PresidentialPardonForm copy constractor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm ( std::string target ) :
Form( "PresidentialPardonForm", 25, 5 ),
_target(target)
{
	if (PRINT_CALLS)
		std::cout << "PresidentialPardonForm primetrised constractor called" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm ( void ) {
	if (PRINT_CALLS)
		std::cout << "PresidentialPardonForm deconstractor called" << std::endl;
	return;
}

PresidentialPardonForm& PresidentialPardonForm::operator = ( PresidentialPardonForm& obj ) {
	this->_target = obj.getTarget();
	if (PRINT_CALLS)
		std::cout << "PresidentialPardonForm copy assignment called" << std::endl;
	return *this;
}

bool PresidentialPardonForm::execute ( Bureaucrat const& executor ) const {
	if ( this->getState() && this->getGradeRequiredExecution() >= executor.getGrade() ) {
		std::cout << "Informs that "
				  << this->_target
				  << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		return true;
	} else {
		if ( !this->getState() && this->getGradeRequired() > executor.getGrade() ){
			std::cerr << executor.getName() << " Not signed to "
					<< this->getName() << std::endl;
		}
		else
			throw Form::ExecutionException();
	}
	return false;
}

std::string PresidentialPardonForm::getTarget ( void ) const
{ return this->_target; }