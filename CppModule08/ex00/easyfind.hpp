#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

template < typename T >
bool easyfind( T& data, int find ) {
	return std::find( data.begin(), data.end(), find ) != data.end() ? true : false;
}