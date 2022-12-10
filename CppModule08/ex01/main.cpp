#include <iostream>
#include "Span.hpp"

int main ( void ) {

	Span sp = Span(5);
	sp.addNumber(INT_MIN);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(INT_MAX);
	try {
		sp.addNumber(11);
	} catch ( std::exception& e ) {
		std::cerr << e.what() << '\n';
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(5);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
	} catch ( std::exception& e ) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}