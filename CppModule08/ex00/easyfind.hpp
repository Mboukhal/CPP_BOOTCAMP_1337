#pragma once
#include <iostream>
#include <vector>

template < typename T >
bool easyfind( T& data, int find ) {

	for ( typename T::iterator it = data.begin(); it != data.end(); it++ )
		if ( *it == find )
			return true;
	return false;
}