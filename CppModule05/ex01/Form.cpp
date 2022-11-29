#include "Form.hpp"

Form::Form ( void ) :
_name("None"),
_signed(false),
_gradeRequired( 1 ),
_gradeRequiredExecution( 1 ) {
	if (PRINT_CALLS)
		std::cout << "Form constractor called" << std::endl;
	return;
}

Form::Form ( Form const& obj ) :
_name(obj.getName()),
_signed(false),
_gradeRequired( obj.getGradeRequired() ),
_gradeRequiredExecution( obj.getGradeRequiredExecution() ) {
	if (PRINT_CALLS)
		std::cout << "Form copy constractor called" << std::endl;
	return;
}

Form::Form ( std::string name, int req, int exec ) :
_name(name),
_signed(false),
_gradeRequired( req ),
_gradeRequiredExecution( exec ) {
	if (PRINT_CALLS)
		std::cout << "Form set constractor called" << std::endl;
	return;
}

Form::~Form ( void ) {
	if (PRINT_CALLS)
		std::cout << "Form deconstractor called" << std::endl;
	return;
}

Form& Form::operator = ( Form& obj ) {
	if (PRINT_CALLS)
		std::cout << "Form copy assignment called" << std::endl;
	this->_signed = obj.getState();
	return *this;
}

void Form::beSigned ( Bureaucrat& obj ) 
{ this->_signed = obj.signForm( *this ); }

bool Form::getState ( void ) const
{ return this->_signed; }

std::string Form::getName ( void ) const
{ return this->_name; }

int Form::getGradeRequired ( void ) const
{ return this->_gradeRequired; }

int Form::getGradeRequiredExecution ( void ) const
{ return this->_gradeRequiredExecution; }

const char* Form::GradeTooLowException::what() const throw () 
{ return ("Grade Too Low!"); }

const char* Form::GradeTooHighException::what() const throw ()
{ return ("Grade Too High!"); }

std::ostream& operator << ( std::ostream& OUT, const Form& f ) {
	OUT << "Form name:\t\t" << f.getName() << '\n'
		<< "Grade required:\t\t" << f.getGradeRequired() << '\n'
		<< "Grade execution:\t" << f.getGradeRequiredExecution() << '\n'
		<< "Signed state:\t\t" << f.getState() << '\n'
		<< std::endl;
	return OUT;
}