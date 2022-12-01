#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	std::string							_target;

public:
	PresidentialPardonForm				( void );
	PresidentialPardonForm				( const PresidentialPardonForm& );
	PresidentialPardonForm				( std::string );
	~PresidentialPardonForm				( void );
	PresidentialPardonForm& operator =	( PresidentialPardonForm& );

	virtual bool execute				( Bureaucrat const & executor ) const;
	std::string getTarget				( void ) const;
};