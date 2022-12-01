#include "Conversion.hpp"

Conversion::Conversion ( void )
{
	std::cout << "Conversion constractor called" << std::endl;
	return;
}

Conversion::Conversion ( Conversion const& obj )
{
	(void) obj;
	std::cout << "Conversion copy constractor called" << std::endl;
	return;
}

Conversion::~Conversion ( void ) {
	std::cout << "Conversion deconstractor called" << std::endl;
	return;
}

Conversion& Conversion::operator =	( const Conversion& obj ){
	(void) obj;
	return *this;
}
