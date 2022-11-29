#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat			( void );
	WrongCat			( WrongCat const &obj );
	~WrongCat			( void );
	WrongCat operator =	( WrongCat const &obj );
	void makeSound		( void ) const;

};  