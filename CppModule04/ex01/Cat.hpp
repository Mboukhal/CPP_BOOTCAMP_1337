#pragma once
#include "Animal.hpp"

class Cat : public Animal {

private:
	Brain*	catBrain;

public:
	Cat						( void );
	Cat 					( Cat const &obj );
	virtual ~Cat			( void );
	Cat& operator =			( Cat const &obj );
	virtual void makeSound	( void ) const;
	virtual Brain& getBrain	( void ) const ;

};