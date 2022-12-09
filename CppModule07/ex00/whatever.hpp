#pragma once

// template <class T1>
// T1& ::min ( T1 const& element1, T1 const& element2 ) {
// 	if ( element1 < element2 )
// 		return element1;
// 	return element2;
// }

template <typename T> T& min ( T const& element1, T const& element2 );
template <typename T> void swap ( T& element1, T& element2 );
template <typename T> T& max( T const& element1, T const& element2 );

// template <typename T>
// T& max( T& element1, T& element2 );