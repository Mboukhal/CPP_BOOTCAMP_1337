#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm ( void ) :
Form( "RobotomyRequestForm", 72, 45 ),
_target( "None" )
{
	if (PRINT_CALLS)
		std::cout << "RobotomyRequestForm constractor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm& obj ) :
Form( "RobotomyRequestForm", 72, 45 ),
_target( obj.getTarget() )
{
	if (PRINT_CALLS)
		std::cout << "RobotomyRequestForm copy constractor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm ( std::string target ) :
Form( "RobotomyRequestForm", 72, 45 ),
_target(target)
{
	if (PRINT_CALLS)
		std::cout << "RobotomyRequestForm primetrised constractor called" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm ( void ) {
	if (PRINT_CALLS)
		std::cout << "RobotomyRequestForm deconstractor called" << std::endl;
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator = ( RobotomyRequestForm& obj ) {
	this->_target = obj.getTarget();
	if (PRINT_CALLS)
		std::cout << "RobotomyRequestForm copy assignment called" << std::endl;
	return *this;
}

bool RobotomyRequestForm::execute ( Bureaucrat const& executor ) const {
	if ( this->getState() && this->getGradeRequiredExecution() >= executor.getGrade() ) {
		std::cout << "Makes some drilling noises. Then, informs that "
				  << this->_target
				  << " has been robotomized successfully 50\% of the time."
				  << "Otherwise, informs that the robotomy failed." << std::endl;
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

std::string RobotomyRequestForm::getTarget ( void ) const
{ return this->_target; }