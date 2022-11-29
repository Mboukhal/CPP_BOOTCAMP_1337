/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:50:47 by mboukhal          #+#    #+#             */
/*   Updated: 2022/09/29 11:38:36 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called\n";
	this->_fp = 0;
	return;
}

Fixed::Fixed( Fixed& other ) {

	std::cout << "Copy constructor called\n";
	this->_fp = other.getRawBits();
	return;
}

Fixed::~Fixed() {

	std::cout << "Destructor called\n";
	return;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called\n";
	return this->_fp;
}

Fixed &Fixed::operator = ( const Fixed& other ) {

	std::cout << "Copy assignment operator called\n";
	this->_fp = other.getRawBits();
	return *this;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fp = raw;
	return;
}