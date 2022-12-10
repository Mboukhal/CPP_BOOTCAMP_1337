#pragma once

template <typename T> class Array {

private:
	T*					_array;
	unsigned int		_size;
public:
	Array ( void ): _size(0) {
		this->_array = new T[0];
	}

	Array ( unsigned int n ): _size(n) {
		this->_array = new T[n];
	}

	Array ( Array const& O ) {
		*this = O;
	}

	~Array ( void ) {
		delete [] this->_array;
	}

	Array& operator = ( Array const& O ) {
		this->_size = O.size();
		this->_array  = new T[this->_size];
		for ( unsigned i = 0; i < this->_size; i++ ) {
			this->_array[i] = O._array[i];
		}
		return *this;
	}

	T& operator [] ( int index )  {
		if ( index < 0 || index >= (int)this->_size ){
			throw BadIndex();
		}
		return this->_array[ index ];
	}

	class BadIndex : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "\e[31mindex none valide!\e[0m";
		}
	};

	unsigned int size	( void ) const {
		return this->_size;
	}
};