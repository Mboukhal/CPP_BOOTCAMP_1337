#include <iostream>
#include "iter.hpp"

template <typename T>
void print( T const& ptr ) {
	std::cout << ptr << " " ;
}

int main ( void ) {

	int x[ 4 ] = { 10, 20, 30, 40 };

	::iter( x, 4, print );
	std::cout << std::endl;

	char c[ 5 ] = { 'A', 'B', 'C', 'D', 'E' };

	::iter( c, 5, print );
	std::cout << std::endl;

	return 0;
}