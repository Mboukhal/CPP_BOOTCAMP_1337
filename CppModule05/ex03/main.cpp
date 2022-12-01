#include "Intern.hpp"


void makeIt( std::string target)
{
	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat a("Mimi", 10);

	try {
		rrf = someRandomIntern.makeForm( target, "Bender" );
		rrf->beSigned( a );
		rrf->execute( a );
		// rrf = someRandomIntern.makeForm( "sf", "Bender" );
		// delete rrf;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n" << "*****************************************************" << "\n\n";
}

int main ( void ) {

	makeIt( "shrubbery creation" );
	makeIt( "robotomy request" );
	makeIt( "presidential pardon" );
	makeIt( "tuo tuo" );

	return 0;
}