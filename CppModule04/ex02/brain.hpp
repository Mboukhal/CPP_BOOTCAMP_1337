#pragma once
#include <iostream>

#define NUMBER_OF_IDEAS	100

class Brain {

protected:
	int	_index;

public:
	Brain				( void );
	Brain				( Brain const& obj );
	~Brain				( void );
	Brain& operator =	( Brain const& obj );
	void setIdeas		( std::string );
	std::string getIdeas( void );
	std::string	*ideas;

};