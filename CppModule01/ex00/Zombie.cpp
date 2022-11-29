/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:53:18 by mboukhal          #+#    #+#             */
/*   Updated: 2022/09/01 07:21:53 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name_) 	: name(_name_){
	return;
}

Zombie::~Zombie( void ){

	std::cout << "\n[" << this->name
			  << "] destruid!"
			  << std::endl;
	return;
}

void Zombie::announce( void ){

	std::cout << this->name
			  << " : BraiiiiiiinnnzzzZ..."
			  << std::endl;
}