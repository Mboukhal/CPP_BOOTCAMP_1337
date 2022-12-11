#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

template < typename T >
bool easyfind( T& data, int find ) {
	if ( std::find ( data.begin(), data.end(), find ) != data.end() )
			return true;
	return false;
}