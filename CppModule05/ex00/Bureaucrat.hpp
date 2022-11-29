#pragma once
#include <iostream>

#define HIGH_GRADE	1
#define LOW_GRADE	150

class Bureaucrat {

private:
	std::string const	_name;
	int					_grade;

public:
	class GradeTooHighException : public std::exception {
	public:
		// GradeTooHighException ();
		virtual const char* what() const throw() ;
	};
	class GradeTooLowException : public std::exception {
	public:
		// GradeTooLowException ();
		virtual const char* what() const throw() ;
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
};

std::ostream& operator << ( std::ostream& OUT, const Bureaucrat& b );
