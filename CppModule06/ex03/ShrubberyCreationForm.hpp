#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:
	std::string							_target;

public:
	ShrubberyCreationForm				( void );
	ShrubberyCreationForm				( const ShrubberyCreationForm& );
	ShrubberyCreationForm				( std::string );
	~ShrubberyCreationForm				( void );
	ShrubberyCreationForm& operator =	( ShrubberyCreationForm& ); 
	virtual bool execute				( Bureaucrat const & executor ) const;
	std::string getTarget				( void ) const;
};