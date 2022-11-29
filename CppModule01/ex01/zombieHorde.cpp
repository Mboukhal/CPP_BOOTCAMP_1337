/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:46:02 by mboukhal          #+#    #+#             */
/*   Updated: 2022/09/01 07:14:36 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie* zHorde = new Zombie[N];

	for ( int i = 0; i < N; i++ ) {
		zHorde[i].setName( name );
	}
	return zHorde;
}