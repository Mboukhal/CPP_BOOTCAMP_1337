#pragma once
#include <iostream>
#include <vector>
#include <list>

class Span {
private:
	unsigned int		_n;
	std::vector<int>*	_data;

public:
	Span						( void );
	Span						( unsigned int );
	Span						( Span const& );
	~Span						( void );
	Span& operator =			( Span const& );

	void addNumber 				( int ) ;
	void addMultiNumber 		( int*, unsigned int ) ;
	unsigned int shortestSpan	( void );
	unsigned int longestSpan	( void );

	class FailSpace : public std::exception {
	public:
		virtual const char * what()const throw();
	};
	class NoSpan : public std::exception {
	public:
		virtual const char * what()const throw();
	};
};