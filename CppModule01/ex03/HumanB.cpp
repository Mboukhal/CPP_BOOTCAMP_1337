/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:18:16 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/30 19:37:22 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _Wp(NULL) { return; }

HumanB::~HumanB() { return; }

void HumanB::attack( void ){

	if ( _Wp == NULL ) {

		std::cerr << "\e[31mERROR: No weapon!\n";
		return;
	}
	std::cout << this->_name
			  << " attacks with their "
			  << this->_Wp->getType()
			  <<'\n';
	return;
}

void HumanB::setWeapon(Weapon& weapon){

	this->_Wp = &weapon;
}
