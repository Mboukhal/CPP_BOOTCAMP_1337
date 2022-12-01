#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void )
: _name("None"), _grade(150) {
	std::cout << "Bureaucrat constractor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat ( Bureaucrat const& obj )
: _name(obj._name ), _grade(obj._grade) {
	std::cout << "Bureaucrat copy constractor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat ( std::string name, int grade )
: _name(name), _grade(grade) {
	std::cout << "Bureaucrat parameterized constractor called" << std::endl;
	if ( grade >= LOW_GRADE )
		throw Bureaucrat::GradeTooLowException();
	if ( grade <= HIGH_GRADE )
		throw GradeTooHighException();
	return;
}

Bureaucrat::~Bureaucrat ( void ) {
	std::cout << "Bureaucrat deconstractor called" << std::endl;
	return;
}

Bureaucrat& Bureaucrat::operator =	( const Bureaucrat& obj ){
	this->_grade =  obj.getGrade();
	return *this;
}

std::string Bureaucrat::getName ( void ) const
{ return this->_name; }

int Bureaucrat::getGrade (void) const
{ return this->_grade; }

void Bureaucrat::incGrade ( void ) {
	if ( (this->_grade - 1) >= HIGH_GRADE )
		this->_grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decGrade ( void ) {
	if ( (this->_grade + 1) <= LOW_GRADE )
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooLowException::what () const throw() {
	return "\e[31m150 is a lowet grade can be obtained by Bureaucrat!\e[0m";
}

const char* Bureaucrat::GradeTooHighException::what () const throw() {
	return "\e[31m1 is highest grade can be obtained by Bureaucrat!\e[0m";
}

std::ostream& operator << ( std::ostream& OUT, const Bureaucrat& b ) {
	OUT << "\e[34m" 
		<< b.getName() << ", bureaucrat grade "
		<< b.getGrade() << "\e[0m"
		<< std::endl;
	return OUT;
}