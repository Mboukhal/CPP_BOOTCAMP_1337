#include "brain.hpp"


Brain::Brain( void ) {

	this->_index = -1;
	this->ideas = new std::string [NUMBER_OF_IDEAS];
	std::cout << "Brain constractor called!" << std::endl;
}

Brain::Brain( Brain const &obj ) {

	this->_index = obj._index;
	*(this) = obj;
	std::cout << "Brain constractor called!" << std::endl;
}

Brain::~Brain( void ) {

	delete [] this->ideas;
	std::cout << "Brain deconstractor called!" << std::endl;
}

Brain& Brain::operator = ( Brain const& obj ) {

	std::cout << "\e[33mAssignement operator for Brain called\e[0m" << std::endl;
	for ( this->_index = -1 ; this->_index <= obj._index; ++this->_index )
		this->ideas[this->_index] = obj.ideas[this->_index];
	return *this;
}

void Brain::setIdeas ( std::string idea ) {

	if ( _index < NUMBER_OF_IDEAS )
		this->ideas[++_index] = idea;
	else
		std::cout << "Brain has no space to add ideas !! " << '\n' ;
}

std::string Brain::getIdeas( void ) {

	if ( _index > -1 ) {
		this->_index--;
		return this->ideas[this->_index + 1];
	}
	else
		std::cout << "Brain has no ideas !! " << '\n' ;
	return NULL;
}
