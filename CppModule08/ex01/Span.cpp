#include "Span.hpp"
#include <vector>

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

static long distance( int v1, int v2 ) {
	long t1, t2;
	t1 = abs((long)v1);
	t2 = abs((long)v2);
	return t1 > t2 ? t1 - t2 : t2 - t1;
}

static long iter ( std::vector<int>& data ) {
	long res = LONG_MAX, tmp;
	for ( std::vector<int>::iterator it1 = data.begin();
			it1 != (data.end() - 1); it1++ ) {
			tmp = ::distance( *it1, *(it1 + 1) );
			res = res > tmp ? tmp : res;
		}
	return res;
}

void Span::addNumber ( int newData )  {
	if ( this->_data->size() < this->_n )
		this->_data->push_back( newData );
	else
		throw Span::FailSpace();
}

void Span::addNumbers ( int* newData, unsigned int size )  {
	if ( this->_data->size() + size <= this->_n )
		this->_data->insert( this->_data->end(), newData, newData + size );
	else
		throw Span::FailSpace();
}

unsigned int Span::shortestSpan ( void ) {
	if ( this->_data->size() <= 1 )
		throw Span::NoSpan();
	std::vector<int> tmp( *this->_data );
	std::sort( tmp.begin(), tmp.end() );
	return ::iter( tmp );
}

unsigned int Span::longestSpan ( void ) {
	if ( this->_data->size() <= 1 )
		throw Span::NoSpan();
	int max, min;
	max = *std::max_element ( this->_data->begin(), this->_data->end() );
	min = *std::min_element ( this->_data->begin(), this->_data->end() );
	unsigned int minAbs = abs( (long) min );
	return (min < 0 ? max + minAbs : max - minAbs);
}

const char * Span::FailSpace::what() const throw() {
	return "No space to add your data!";
}

const char * Span::NoSpan::what() const throw() {
	return "No span can be found!";
}