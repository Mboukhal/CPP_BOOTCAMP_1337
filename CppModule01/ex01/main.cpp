/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:45:03 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/30 16:23:47 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

void announce_print(Zombie* Z){

	for (int i = 0; i < 10; i++){
		Z[i].announce();
	}
	delete [] Z;
}

int main( void ){

	Zombie* zPtr;
	Zombie* zPtr2;

	zPtr = zombieHorde(10, "kiki");
	zPtr2 = zombieHorde(10, "lilo");
	announce_print(zPtr2);
	announce_print(zPtr);

	return 0;
}