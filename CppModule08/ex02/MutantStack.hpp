#pragma once
#include <stack>
#include <iostream>

template < typename T >
class MutantStack : public std::stack<T> {

public:
	typedef typename std::stack<T>::container_type::iterator	iterator;

public:
	MutantStack( void ) {
		return;
	}
	MutantStack( MutantStack const& s) {
		*this = s;
	}
	~MutantStack() {
		return;
	}
	MutantStack& operator = ( MutantStack const& s) {
		return s;
	}

public:
	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};