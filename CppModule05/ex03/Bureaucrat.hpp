#pragma once
#include <iostream>
#include "Form.hpp"

#define HIGH_GRADE	1
#define LOW_GRADE	150
#define PRINT_CALLS	false

class Form;

class Bureaucrat {

private:
	std::string const	_name;
	int					_grade;

public:
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	Bureaucrat				( void );
	Bureaucrat				( Bureaucrat const& );
	Bureaucrat				( std::string, int );
	~Bureaucrat				( void );
	Bureaucrat& operator =	( const Bureaucrat& );
	std::string getName		( void ) const;
	int getGrade 			( void ) const;
	void incGrade 			( void );
	void decGrade 			( void );
	bool signForm			( Form& ) const;
	void executeForm		( Form const& form );
};

std::ostream& operator << ( std::ostream& OUT, const Bureaucrat& b );
