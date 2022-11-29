#pragma once
#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog						( void );
	Dog						( Dog const &obj );
	virtual ~Dog			( void );
	Dog operator =			( Dog const &obj );
	virtual void makeSound	( void ) const;

};