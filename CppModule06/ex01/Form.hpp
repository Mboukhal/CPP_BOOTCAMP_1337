#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	std::string const				_name;
	bool							_signed;
	int const						_gradeRequired;
	int const						_gradeRequiredExecution;

public:
	Form							( void );
	Form							( std::string, int, int );
	Form							( Form const& );
	~Form							( void );
	Form& operator =				( Form& );
	void beSigned					( Bureaucrat& );
	int getGradeRequired 			( void ) const;
	std::string getName				( void ) const;
	int getGradeRequiredExecution	( void ) const;
	bool getState					( void ) const;
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw() ;
	};
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw() ;
	};

};

std::ostream& operator << ( std::ostream& OUT, const Form& f );