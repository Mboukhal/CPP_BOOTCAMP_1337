#include "Form.hpp"

int main ( void ) {
	{
		Bureaucrat	nory( "Nory", 50 );

		Form		session( "Desktop", 22, 10 );

		std::cout << std::endl;
		std::cout << session;

		try {
			session.beSigned( nory );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << session;
		std::cout << nory;
		std::cout << std::endl;
	}

	{
		Bureaucrat	katia( "Katia", 4 );

		Form		session( "Home", 22, 10 );

		std::cout << std::endl;
		std::cout << session;

		try {
			session.beSigned( katia );
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << session;
		std::cout << katia;
		std::cout << std::endl;
	}
	return 0;
}