/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:12:13 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/29 12:41:35 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieFunc.hpp"

int main(void) {

	Zombie zombie("lilo");
	zombie.announce();

	Zombie *z1;

	z1 = newZombie("Z1");
	z1->announce();
	z1->announce();
	z1->announce();
	delete z1;

	randomChump("Z2");
	
	return 0;
}