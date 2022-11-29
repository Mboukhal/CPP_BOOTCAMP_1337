/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:50:47 by mboukhal          #+#    #+#             */
/*   Updated: 2022/11/19 22:01:01 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called\n";
	this->_fp = 0;
	return;
}

Fixed::Fixed( const int &in ) {

	std::cout << "Int constructor called\n";
	this->_fp = (in << this->_bit);
}

Fixed::Fixed( const float &in ) {

	std::cout << "Float constructor called\n";
	this->_fp = roundf(in * (1 << this->_bit));
}

Fixed::Fixed( const Fixed &other ) {

	std::cout << "Copy constructor called\n";
	this->_fp = other.getRawBits();
	return;
}

Fixed::~Fixed() {

	std::cout << "Destructor called\n";
	return;
}

int		Fixed::getRawBits( void ) const {

	return this->_fp;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fp = raw;
	return;
}

float	Fixed::toFloat( void ) const {

	return (float) this->_fp / (float)(1 << this->_bit);
}

int		Fixed::toInt( void ) const {

	return (this->_fp >> this->_bit);
}

Fixed &Fixed::operator = ( const Fixed& other ) {

	std::cout << "Copy assignment operator called\n";
	this->_fp = other.getRawBits();
	return *this;
}

std::ostream& operator << ( std::ostream& out, const Fixed& other ) {

	out << other.toFloat();
	return out;
}