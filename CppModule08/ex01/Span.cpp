#include "Span.hpp"

Span::Span( void ) {
	return;
}

Span::Span( unsigned int n ): _n(n) {
	this->_data = new std::vector<int>();
}

Span::Span( Span const& O ) {
	*this = O;
}

Span::~Span( void ) {
	delete this->_data;
}

Span& Span::operator = ( Span const& O ) {
	this->_n = O._n;
	if ( this->_data )
		delete this->_data;
	this->_data = O._data;
	return *this;
}

void Span::addNumber ( int newData )  {
	if ( this->_data->size() < this->_n )
		this->_data->push_back( newData );
	else
		throw Span::FailSpace();
}

unsigned int Span::shortestSpan ( void ) {
	if ( this->_data->size() <= 1 )
		throw Span::NoSpan();
	unsigned int res = INT_MAX;
	unsigned int tmp = 0;
	for ( std::vector<int>::iterator it1 = this->_data->begin(); 
			it1 <= this->_data->end(); it1++ ) {
		for ( std::vector<int>::iterator it2 = it1 + 1; 
				it2 <= this->_data->end(); it2++ ) {
			if ( (*it1 - *it2) < 0 )
				tmp = (*it1 - *it2) * -1;
			else 
				tmp = *it1 - *it2;
			if ( res > tmp )
				res = tmp;
		}
	}
	return res;
}

unsigned int Span::longestSpan ( void ) {
	if ( this->_data->size() <= 1 )
		throw Span::NoSpan();
	unsigned int res = INT_MAX;
	unsigned int tmp = 0;
	for ( std::vector<int>::iterator it1 = this->_data->begin(); 
			it1 <= this->_data->end(); it1++ ) {
		for ( std::vector<int>::iterator it2 = it1 + 1; 
				it2 <= this->_data->end(); it2++ ) {
			if ( (*it1 - *it2) < 0 )
				tmp = (*it1 - *it2) * -1;
			else 
				tmp = *it1 - *it2;
			if ( res < tmp )
				res = tmp;
		}
	}
	return res;
}

const char * Span::FailSpace::what() const throw() {
	return "No space to add your data!";
}

const char * Span::NoSpan::what() const throw() {
	return "No span can be found!";
}