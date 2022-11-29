#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string							_target;

public:
	RobotomyRequestForm				( void );
	RobotomyRequestForm				( const RobotomyRequestForm& );
	RobotomyRequestForm				( std::string );
	~RobotomyRequestForm			( void );
	RobotomyRequestForm& operator =	( RobotomyRequestForm& );

	virtual bool execute			( Bureaucrat const & executor ) const;
	std::string getTarget			( void ) const;
};