/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:50:47 by mboukhal          #+#    #+#             */
/*   Updated: 2022/10/08 15:25:07 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {

	// std::cout << "Default constructor called\n";
	this->setRawBits(0);
	return;
}

Fixed::Fixed( const int &in ) {

	// std::cout << "Int constructor called\n";
	this->setRawBits(in << this->_bit);
}

Fixed::Fixed( const float &in ) {

	// std::cout << "Float constructor called\n";
	this->setRawBits(roundf(in * (1 << this->_bit)));
}

Fixed::Fixed( const Fixed &other ) {

	// std::cout << "Copy constructor called\n";
	this->setRawBits(other.getRawBits());
	return;
}

Fixed::~Fixed() {

	// std::cout << "Destructor called\n";
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

	return (float) this->getRawBits() / (float)(1 << this->_bit);
}

int		Fixed::toInt( void ) const {

	return (this->getRawBits() >> this->_bit);
}

Fixed	&Fixed::operator=( const Fixed &other ) {

	// std::cout << "Copy assignment operator called\n";
	this->setRawBits(other.getRawBits());
	return *this;
}

// operator overload
	// comparison operators:
bool	Fixed::operator == ( Fixed const &other ) const{

	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator != ( Fixed const &other ) const{

	return (this->getRawBits() != other.getRawBits());
}

bool	Fixed::operator >= ( Fixed const &other ) const{

	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator <= ( Fixed const &other ) const{

	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator < ( Fixed const &other ) const{

	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator > ( Fixed const &other ) const{

	return (this->getRawBits() > other.getRawBits());
}

	//  arithmetic operators:
Fixed	Fixed::operator + ( Fixed const &other ) {

	Fixed tmp (*this);

	tmp.setRawBits(this->getRawBits() + other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator - ( Fixed const &other ) {

	Fixed tmp (*this);

	tmp.setRawBits(this->getRawBits() - other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator / ( Fixed const &other ) {

	Fixed tmp (*this);
	long t1, t2;

	t1 = (long)this->getRawBits();
	t2 = (long)other.getRawBits();
	tmp.setRawBits((t1 * (1 << this->_bit) / t2));
	return tmp;
}

Fixed	Fixed::operator * ( Fixed const &other ) {

	Fixed tmp (*this);
	long t1, t2;

	t1 = (long)this->getRawBits();
	t2 = (long)other.getRawBits();
	tmp.setRawBits((t1 * t2) / (1 << this->_bit));
	return tmp;
}

	// increment - decrement
Fixed	Fixed::operator ++ ( void ) {

	this->_fp++;
	return *this;
}

Fixed	Fixed::operator -- ( void ) {

	this->_fp--;
	return *this;
}

Fixed	Fixed::operator ++ ( int ) {

	Fixed tmp (*this);

	operator++();
	return tmp;
}

Fixed	Fixed::operator -- ( int ) {

	Fixed tmp (*this);

	operator--();
	return tmp;
}

	// max - min
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {

	if (a > b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {

	if (a > b)
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {

	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {

	if (a < b)
		return a;
	return b;
}

std::ostream &operator << ( std::ostream &out, const Fixed &other ) {

	out << other.toFloat();
	return out;
}