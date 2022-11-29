#pragma once
#include <iostream>
#include "brain.hpp"

class Animal {

public:
	Animal 					( void );
	Animal 					( Animal const &obj );
	virtual ~Animal 		( void );
	Animal& operator =		( Animal const &obj );
	std::string getType		( void ) const;
	virtual void makeSound	( void ) const;
	virtual Brain& getBrain	( void ) const = 0;

protected:
	std::string type;

};
