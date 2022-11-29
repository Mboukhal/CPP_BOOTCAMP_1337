/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:50:45 by mboukhal          #+#    #+#             */
/*   Updated: 2022/10/01 08:02:23 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed {

private:

	int	_fp;
	static const int _bit = 8;

public:

	Fixed( Fixed& obg );
	Fixed();
	~Fixed();
	Fixed &operator = ( const Fixed& other );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};