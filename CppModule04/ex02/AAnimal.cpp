#include "AAnimal.hpp"

AAnimal::AAnimal ( void ) : type ("None") {

	std::cout << "AAnimal constractor called!" << std::endl;
}

AAnimal::AAnimal ( AAnimal const &obj ) : type(obj.getType()) {

	std::cout << "AAnimal constractor called!" << std::endl;
}

AAnimal::~AAnimal ( void ) {

	std::cout << "AAnimal deconstractor called!" << std::endl;
}

std::string AAnimal::getType ( void ) const {

  	return this->type;
}

AAnimal& AAnimal::operator= ( AAnimal const &obj) {

	this->type = obj.getType();
	return *this;
}
