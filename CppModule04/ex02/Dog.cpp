#include "Dog.hpp"

Dog::Dog ( void )  {

	this->type = "Dog";
	this->dogBrain = new Brain();
	std::cout << "\e[35mDog constractor called!\e[0m" << std::endl;
}

Dog::Dog ( Dog const &obj )  {

	this->type = obj.getType();
	this->dogBrain = new Brain();
	*(this->dogBrain) = *(obj.dogBrain);
	std::cout << "\e[36mDog copy constractor called!\e[0m" << std::endl;
}

Dog::~Dog ( void ) {

	delete dogBrain;
	std::cout << "Dog deconstractor called!" << std::endl;
}

Dog& Dog::operator = ( Dog  &obj) {

	std::cout << "\e[33mDog Assignement called!\e[0m" << std::endl;
	(this->type) = obj.getType();
	if (!this->dogBrain)
		this->dogBrain = new Brain();
	*(this->dogBrain) = *(obj.dogBrain);
	return *this;
}

void Dog::makeSound	( void ) const {

	std::cout << "Woof Woof" << std::endl;
}

Brain& Dog::getBrain	( void ) const {

	return *this->dogBrain;
}
