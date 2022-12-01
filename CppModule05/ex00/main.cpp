#include "Bureaucrat.hpp"

// set grade to 149 ******************************
void setBureaucratUp( Bureaucrat& ali, bool up )
{
	std::cout << ali;
	try {
		if ( up ) {
			while ( ali.getGrade() < 149 ) 
				ali.decGrade();
		}
		else {
			while ( ali.getGrade() > 2 ) 
				ali.incGrade();
		}
	}catch( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << ali;
}

int main ( void ) {

	try {
		Bureaucrat ali("ali", 0);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat ali("ali", 2);
	// valide test:
	try {
		for ( int i = 0; i < 5; i++ ) {
			ali.decGrade();
			std::cout << "\e[32mLoop decGrade: \e[0m" << ali << '\n';
		}
	}
	catch( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\e[35mNew Ali Grede: \e[0m" << ali << '\n';
	std::cout << "\e[30m****************************************\e[0m" << '\n';
	std::cout << "\e[35mEntry Ali Grede: \e[0m" << ali << '\n';
	try {
		for ( int i = 0; i < 5; i++ ){
			ali.incGrade();
			std::cout << "\e[32mLoop incGrade: \e[0m" << ali << '\n';
		}
	}
	catch( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\e[35mNew Ali Grede: \e[0m" << ali << '\n';

	setBureaucratUp( ali, true );
	// exception test:
	try {
		std::cout << "\e[30m************* Loop Entry *************\e[0m" << '\n';
		for ( int i = 0; i < 20; i++ ) {
			std::cout << "\e[33mLoop decGrade: \e[0m" << ali << '\n';
			ali.decGrade();
		}
	}
	catch( std::exception &e ) {
		std::cout << "\e[30m-------------- Loop Exit -------------\e[0m" << '\n';
		std::cerr << e.what() << std::endl;
		std::cerr << "\e[34mAli can't get Grede: 151" << "\e[0m" << '\n';
	}
	std::cout << "\e[35mNew Ali Grede: \e[0m" << ali << '\n';

	setBureaucratUp( ali, false );

	try {
		std::cout << "\e[30m************* Loop Entry *************\e[0m" << '\n';
		for ( int i = 0; i < 20; i++ ) {
			std::cout << "\e[33mLoop incGrade: \e[0m" << ali << '\n';
			ali.incGrade();
		}
	}
	catch( std::exception &e ) {
		std::cout << "\e[30m-------------- Loop Exit -------------\e[0m" << '\n';
		std::cerr << e.what() << std::endl;
		std::cerr << "\e[34mAli can't get Grede: 0" << "\e[0m" << '\n';
		std::cout << "\e[35mNew Ali Grede: \e[0m" << ali << '\n';
	}
	std::cout << ali;
	return 0;
}