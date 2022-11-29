#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ) : type("None") {
	std::cout << "WrongAnimal constractor called!" << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal const &obj ) {
	this->type = obj.getType();
	std::cout << "WrongAnimal constractor called!" << std::endl;
}

WrongAnimal::~WrongAnimal ( void ) {
	std::cout << "WrongAnimal deconstractor called!" << std::endl;
}

void WrongAnimal::makeSound	( void ) const {
	std::cout << "Wronganimal has no noise to make\t <- Virtual not used" << std::endl;
}

std::string WrongAnimal::getType ( void ) const {
	return this->type;
}

WrongAnimal WrongAnimal::operator = ( WrongAnimal const &obj) {

	this->type = obj.getType();
	return *this;
}
