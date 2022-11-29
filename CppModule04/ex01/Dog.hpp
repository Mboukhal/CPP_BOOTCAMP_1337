#pragma once
#include "Animal.hpp"

class Dog : public Animal {

private:
	Brain*	dogBrain;

public:
	Dog						( void );
	Dog						( Dog const &obj );
	virtual ~Dog			( void );
	Dog& operator =			( Dog  &obj );
	virtual void makeSound	( void ) const;
	Brain& getBrain			( void ) const;

};
