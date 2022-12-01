#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern : public PresidentialPardonForm,
public RobotomyRequestForm,
public ShrubberyCreationForm
{

private:
	std::string			_formName;
	std::string			_targetName;

public:
	Intern				( void );
	Intern				( Intern const& );
	~Intern				( void );
	Intern& operator =	( Intern const& );
	std::string getFName( void ) const;
	std::string getTName( void ) const;
	Form* makeForm		( std::string, std::string );

};