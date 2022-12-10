#pragma once

template <typename T> void swap ( T& element1, T& element2 ) {
	T tmp = element1;
	element1 = element2;
	element2 = tmp;
}

template <typename T> T& max( T& element1, T& element2 ) {
	if ( element1 > element2 )
		return element1;
	return element2;
}

template <typename T> T& min ( T& element1, T& element2 ) {
	if ( element1 < element2 )
		return element1;
	return element2;
}