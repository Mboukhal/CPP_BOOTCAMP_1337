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

static long absl( int v1, int v2 ) {
	long t1, t2, res;
	t1 = v1 < 0 ? (v1 * (-1)) : v1;
	t2 = v2 < 0 ? (v2 * (-1)) : v2;
	res = t1 > t2 ? t1 - t2 : t2 - t1;
	return res;
}

static long iter ( std::vector<int>& data, bool status ) {
	long res = status ? LONG_MAX : 0, tmp = 0;
	for ( std::vector<int>::iterator it1 = data.begin(); 
			it1 != data.end() - 1; it1++ ) {
		for ( std::vector<int>::iterator it2 = it1 + 1; 
				it2 != data.end(); it2++ ) {
			tmp = ::absl( *it1, *it2 );
			if ( status )
				res = res > tmp ? tmp : res;
			else
				res = res < tmp ? tmp : res;
		}
	}
	return res;
}

void Span::addNumber ( int newData )  {
	if ( this->_data->size() < this->_n )
		this->_data->push_back( newData );
	else
		throw Span::FailSpace();
}

void Span::addMultiNumber ( int* newData, unsigned int size )  {
	if ( this->_data->size() + size <= this->_n )
		this->_data->insert( this->_data->end(), newData, newData + size );
	else
		throw Span::FailSpace();
}

unsigned int Span::shortestSpan ( void ) {
	if ( this->_data->size() <= 1 )
		throw Span::NoSpan();
	return ::iter ( *this->_data, true );
}

unsigned int Span::longestSpan ( void ) {
	if ( this->_data->size() <= 1 )
		throw Span::NoSpan();
	return ::iter ( *this->_data, false );
}

const char * Span::FailSpace::what() const throw() {
	return "No space to add your data!";
}

const char * Span::NoSpan::what() const throw() {
	return "No span can be found!";
}