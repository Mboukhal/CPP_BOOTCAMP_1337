#pragma once
#include <iostream>

class Animal {

public:
	Animal 					( void );
	Animal 					( Animal const &obj );
	virtual ~Animal 		( void );
	Animal operator =		( Animal const &obj );
	virtual void makeSound	( void ) const;
	std::string getType		( void ) const;

protected:
	std::string type;

};
