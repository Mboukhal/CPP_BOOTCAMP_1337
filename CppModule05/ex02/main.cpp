// #include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ( void ) {
	{
		std::cout << "\n-------------------------------[Nory]" << std::endl;
		Bureaucrat	nory( "Nory", 0 );

		Form*		PPF1 = new PresidentialPardonForm(  );

		try {
			PPF1->beSigned( nory );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}

		try {
			nory.executeForm( *PPF1 );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}
		delete PPF1;
	}

	{
		std::cout << "\n-------------------------------[Lily]" << std::endl;
		Bureaucrat	lily( "Lily", 3 );

		Form*		PPF2 = new PresidentialPardonForm( "Home" );

		try {
			PPF2->beSigned( lily );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}

		try {
			lily.executeForm( *PPF2 );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}
		delete PPF2;
	}

	{
		std::cout << "\n-------------------------------[Anwar]" << std::endl;
		Bureaucrat	anwar( "Anwar", 10 );

		Form*		PPF3 = new PresidentialPardonForm( "Hotel" );

		try {
			PPF3->beSigned( anwar );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}

		try {
			anwar.executeForm( *PPF3 );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}
		delete PPF3;
	}

	return 0;
}
