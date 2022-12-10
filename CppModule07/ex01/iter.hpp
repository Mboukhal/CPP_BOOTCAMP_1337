#pragma once

template <typename T> void iter ( T* Array, long long const arrayLangth, void ( *func )( T const& ) ) {
	for ( long long i = 0; i < arrayLangth; i++ )
		func( Array[i] );
}