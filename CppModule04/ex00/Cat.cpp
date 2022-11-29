#include "Cat.hpp"

Cat::Cat ( void ) {

	Animal::type = "Cat";
	std::cout << "Cat constractor called!" << std::endl;
}

Cat::Cat ( Cat const &obj ) {

	Animal::type = obj.getType();
	std::cout << "Cat constractor called!" << std::endl;
}

Cat::~Cat ( void ) {

	std::cout << "Cat deconstractor called!" << std::endl;
}

Cat Cat::operator=( Cat const &obj) {

	this->type = obj.getType();
	return *this;
}

void Cat::makeSound	( void ) const {

	std::cout << "Miaw Miaw" << std::endl;
}