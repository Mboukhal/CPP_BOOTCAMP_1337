#pragma once
#include "AAnimal.hpp"

class Dog : public AAnimal {

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
