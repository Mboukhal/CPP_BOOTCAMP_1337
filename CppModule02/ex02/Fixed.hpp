/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:50:45 by mboukhal          #+#    #+#             */
/*   Updated: 2022/10/02 01:23:40 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed {

private:

	int					_fp;
	static const int	_bit = 8;

public:

	Fixed();
	~Fixed();
	Fixed( const Fixed &other );
	Fixed( const int &in );
	Fixed( const float &in );
	Fixed	&operator=( const Fixed &other );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	// operator overload

		// comparison operators:
	bool	operator == ( Fixed const &other ) const;
	bool	operator != ( Fixed const &other ) const;
	bool	operator >= ( Fixed const &other ) const;
	bool	operator <= ( Fixed const &other ) const;
	bool	operator < ( Fixed const &other ) const;
	bool	operator > ( Fixed const &other ) const;

		//  arithmetic operators:
	Fixed	operator + ( Fixed const &other );
	Fixed	operator - ( Fixed const &other );
	Fixed	operator * ( Fixed const &other );
	Fixed	operator / ( Fixed const &other );

		// increment - decrement
	Fixed	operator ++ ( void );
	Fixed	operator -- ( void );
	Fixed	operator ++ ( int );
	Fixed	operator -- ( int );

		// max - min
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
};

std::ostream &operator << ( std::ostream &out, const Fixed &other );