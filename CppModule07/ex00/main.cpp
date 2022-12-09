#include <iostream>
#include "whatever.hpp"

template <typename T>
void swap ( T& element1, T& element2 ) {
	T tmp = element1;
	element1 = element2;
	element2 = tmp;
}

template <typename T>
T& max( T& element1, T& element2 ) {
	if ( element1 > element2 )
		return element1;
	return element2;
}

template <typename T>
T& min ( T& element1, T& element2 ) {
	if ( element1 < element2 )
		return element1;
	return element2;
}

int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    ::min( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}