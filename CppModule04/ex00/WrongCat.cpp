#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) {

	this->type = "WrongCat";
	std::cout << "WrongCat constractor called!" << std::endl;
}


WrongCat::WrongCat ( WrongCat const &obj ) {

	this->type = obj.getType();
	std::cout << "WrongCat constractor called!" << std::endl;
}

WrongCat::~WrongCat ( void ) {

	std::cout << "WrongCat deconstractor called!" << std::endl;
}

WrongCat WrongCat::operator = ( WrongCat const &obj) {

	this->type = obj.getType();
	return *this;
}

void WrongCat::makeSound ( void ) const {

	std::cout << "wrong Miaw Miaw" << std::endl;
}