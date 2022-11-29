#include "Cat.hpp"

Cat::Cat ( void ) {

	this->type = "Cat";
	this->catBrain = new Brain();
	std::cout << "Cat constractor called!" << std::endl;
}

Cat::Cat ( Cat const &obj ) {

	this->type = obj.getType();
	this->catBrain = new Brain();
	*(this->catBrain) = *(obj.catBrain);
	std::cout << "Animal constractor called!" << std::endl;
}

Cat::~Cat ( void ) {

	delete this->catBrain;
	std::cout << "Cat deconstractor called!" << std::endl;
}

Cat& Cat::operator = ( Cat const &obj) {

	std::cout << "\e[33mcat Assignement called!\e[0m" << std::endl;
	this->type = obj.getType();
	if (!this->catBrain)
		this->catBrain = new Brain();
	*(this->catBrain) = *(obj.catBrain);
	return *this;
}

void Cat::makeSound	( void ) const {

	std::cout << "Miaw Miaw" << std::endl;
}

Brain& Cat::getBrain ( void ) const {

	return *this->catBrain;
}