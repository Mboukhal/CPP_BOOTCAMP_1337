#include "Dog.hpp"

Dog::Dog ( void )  {
	Animal::type = "Dog";
	std::cout << "Dog constractor called!" << std::endl;
}

Dog::Dog ( Dog const &obj )  {
	Animal::type = obj.getType();
	std::cout << "Dog constractor called!" << std::endl;
}

Dog::~Dog ( void ) {

	std::cout << "Dog deconstractor called!" << std::endl;
}

Dog Dog::operator = ( Dog const &obj) {

	this->type = obj.getType();
	return *this;
}

void Dog::makeSound	( void ) const {

	std::cout << "Woof Woof" << std::endl;
}