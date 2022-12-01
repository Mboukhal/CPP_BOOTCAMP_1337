#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm ( void ) :
Form( "ShrubberyCreationForm", 145, 137 ),
_target( "None" )
{
	if (PRINT_CALLS)
		std::cout << "ShrubberyCreationForm constractor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm& obj ) :
Form( "ShrubberyCreationForm", 145, 137 ),
_target( obj.getTarget() )
{
	if (PRINT_CALLS)
		std::cout << "ShrubberyCreationForm copy constractor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm ( std::string target ) :
Form( "ShrubberyCreationForm", 145, 137 ),
_target(target)
{
	if (PRINT_CALLS)
		std::cout << "ShrubberyCreationForm primetrised constractor called" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void ) {
	if (PRINT_CALLS)
		std::cout << "ShrubberyCreationForm deconstractor called" << std::endl;
	return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = ( ShrubberyCreationForm& obj ) {
	this->_target = obj.getTarget();
	if (PRINT_CALLS)
		std::cout << "ShrubberyCreationForm copy assignment called" << std::endl;
	return *this;
}

bool ShrubberyCreationForm::execute ( Bureaucrat const& executor ) const {
	if ( this->getState() && this->getGradeRequiredExecution() >= executor.getGrade() ) {
		std::cout << "Create a file "
				  << this->_target
				  << "_shrubbery in the working directory, and writes ASCII trees inside it." << std::endl;
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

std::string ShrubberyCreationForm::getTarget ( void ) const
{ return this->_target; }