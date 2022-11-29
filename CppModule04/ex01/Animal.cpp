#include "Animal.hpp"

Animal::Animal ( void ) : type ("None") {

	std::cout << "Animal constractor called!" << std::endl;
}

Animal::Animal ( Animal const &obj ) : type(obj.getType()) {

	std::cout << "Animal constractor called!" << std::endl;
}

Animal::~Animal ( void ) {

	std::cout << "Animal deconstractor called!" << std::endl;
}

void Animal::makeSound	( void ) const {
	std::cout << "No animal to make noise" << std::endl;
}

std::string Animal::getType	( void ) const {

	return this->type;
}

Animal& Animal::operator=( Animal const &obj) {

	this->type = obj.getType();
	return *this;
}
