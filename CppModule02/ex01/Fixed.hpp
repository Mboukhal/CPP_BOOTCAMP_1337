/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:50:45 by mboukhal          #+#    #+#             */
/*   Updated: 2022/10/08 13:01:40 by mboukhal         ###   ########.fr       */
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
};

std::ostream &operator << ( std::ostream &out, const Fixed &other );