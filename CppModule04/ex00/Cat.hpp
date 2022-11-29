#pragma once
#include "Animal.hpp"

class Cat : public Animal {

public:
	Cat						( void );
	Cat						( Cat const &obj );
	virtual ~Cat			( void );
	Cat operator =			( Cat const &obj );
	virtual void makeSound	( void ) const;

};