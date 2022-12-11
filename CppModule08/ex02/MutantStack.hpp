#pragma once
#include <stack>
#include <iostream>

template < typename T >
class MutantStack : public std::stack<T> {

public:
	typedef typename std::stack<T>::container_type::iterator	iterator;

public:
	MutantStack( void ) { return; }
	MutantStack( MutantStack& ) { return; }
	~MutantStack() { return; }
	MutantStack& operator = ( MutantStack& ) { return; }

public:
	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};