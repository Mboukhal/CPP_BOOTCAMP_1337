#include "Span.hpp"

int main ( void ) {

	Span sp = Span(5);
	sp.addNumber(80);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(10);
	sp.addNumber(9);
	// int x[] = {80, 3, 17, 10, 9};
	// sp.addMultiNumber( x, 5 );
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		sp.addNumber(11);
	} catch ( std::exception& e ) {
		std::cerr << e.what() << '\n';
	}

	Span sp2 = Span(5);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
	} catch ( std::exception& e ) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}