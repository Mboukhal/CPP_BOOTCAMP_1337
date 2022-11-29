#pragma once
#include <iostream>
#include "brain.hpp"

class AAnimal {

public:
	AAnimal 				( void );
	AAnimal 				( AAnimal const &obj );
	virtual ~AAnimal 		( void );
	AAnimal& operator=		( AAnimal const &obj );
	std::string getType		( void ) const;
	virtual void makeSound	( void ) const = 0;
	virtual Brain& getBrain	( void ) const = 0;

protected:
	std::string type;

};
