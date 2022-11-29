/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:46:36 by mboukhal          #+#    #+#             */
/*   Updated: 2022/09/01 07:14:20 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) { return; }

Zombie::~Zombie( void ) { return; }

void Zombie::setName(std::string _name_) {
	this->name = _name_;
	return;
}

void Zombie::announce( void ) {

	std::cout << this->name
			  << " : BraiiiiiiinnnzzzZ..."
			  << std::endl;
}