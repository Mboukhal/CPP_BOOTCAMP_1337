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
: _name(name) {
	std::cout << "Bureaucrat parameterized constractor called" << std::endl;
	if ( grade >= LOW_GRADE )
		throw GradeTooLowException();
	if ( grade <= HIGH_GRADE )
		throw GradeTooHighException();
	this->_grade = grade;
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
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooLowException::what () const throw() {
	return "\e[31m150 is a lowet grade can be obtained by Bureaucrat!\e[0m";
}

const char* Bureaucrat::GradeTooHighException::what () const throw() {
	return "\e[31m1 is highest grade can be obtained by Bureaucrat!\e[0m";
}

bool Bureaucrat::signForm ( Form& f ) const {
	if ( this->getGrade() <= f.getGradeRequired() ) {
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	} else {
		std::cerr << this->_name << " couldn’t sign "
				 << f.getName() << " because ";
		throw Form::GradeTooLowException();
		return false;
	}
	if ( this->getGrade() <= 0 ) {
		throw Form::GradeTooHighException();
		return false;
	}
	return true;
}

std::ostream& operator << ( std::ostream& OUT, const Bureaucrat& b ) {
	OUT << "\e[34m" 
		<< b.getName() << ", bureaucrat grade "
		<< b.getGrade() << "\e[0m"
		<< std::endl;
	return OUT;
}