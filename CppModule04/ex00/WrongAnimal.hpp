#pragma once
#include <iostream>

class WrongAnimal {

public:
	WrongAnimal 			( void );
	WrongAnimal 			( WrongAnimal const &obj );
	~WrongAnimal 			( void );
	WrongAnimal operator =	( WrongAnimal const &obj );
	void makeSound			( void ) const;
	std::string getType		( void ) const;

protected:
	std::string type;

};
