#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void )
: _name("None"), _grade(150) {
	std::cout << "Bureaucrat constractor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat ( Bureaucrat const& obj )
: _name(obj._name ), _grade(obj._grade) {
	if (PRINT_CALLS)
		std::cout << "Bureaucrat copy constractor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat ( std::string name, int grade )
: _name(name) {
	if (PRINT_CALLS)
		std::cout << "Bureaucrat copy constractor called" << std::endl;
	if ( grade > LOW_GRADE )
		throw GradeTooLowException();
	if ( grade < HIGH_GRADE )
		throw GradeTooHighException();
	this->_grade = grade;
	return;
}

Bureaucrat::~Bureaucrat ( void ) {
	if (PRINT_CALLS)
		std::cout << "Bureaucrat deconstractor called" << std::endl;
	return;
}

Bureaucrat& Bureaucrat::operator =	( const Bureaucrat& obj ) {
	this->_grade =  obj.getGrade();
	return *this;
}

std::string Bureaucrat::getName ( void ) const
{ return this->_name; }

int Bureaucrat::getGrade (void) const
{return this->_grade; }

void Bureaucrat::incGrade ( void ) {
	if ( (this->_grade - 1) >= HIGH_GRADE )
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade ( void ) {
	if ( (this->_grade + 1) <= LOW_GRADE )
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator << ( std::ostream& OUT, const Bureaucrat& b ) {
	OUT << "\e[34m" 
		<< b.getName() << ", bureaucrat grade "
		<< b.getGrade() << "\e[0m"
		<< std::endl;
	return OUT;
}

bool Bureaucrat::signForm ( Form& f ) const {
	if ( this->getGrade() <= f.getGradeRequired() && this->getGrade() > 0 ) {
		std::cout << this->_name << " signed " << f.getName() << std::endl;
		return true;
	} else {
		std::cerr << this->_name << " couldn’t sign "
				 << f.getName() << " because ";
		if ( this->getGrade() > 0 )
			throw Form::GradeTooLowException();
		else
			throw Form::GradeTooHighException();
	}
	return false;
}

void Bureaucrat::executeForm( Form const& form ) {
	if ( form.execute( *this ) )
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	else
		std::cerr << this->getName()  << " can not execut" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "\e[31mToo High Grade!\e[0m";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "\e[31mToo Low Grade!\e[0m";
}