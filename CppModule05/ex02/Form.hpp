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
	virtual ~Form							( void );
	Form& operator =				( Form& );

	void beSigned					( Bureaucrat& );
	int getGradeRequired 			( void ) const;
	std::string getName				( void ) const;
	int getGradeRequiredExecution	( void ) const;
	bool getState					( void ) const;
	virtual bool execute			( Bureaucrat const & executor ) const = 0;

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("\e[32mGrade Too Low!\e[0m");
		}
	};

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("\e[32mGrade Too High!\e[0m");
		}
	};

	class ExecutionException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("\e[32mCan't Execute!\e[0m");
		}
	};

};

std::ostream& operator << ( std::ostream& OUT, const Form& f );