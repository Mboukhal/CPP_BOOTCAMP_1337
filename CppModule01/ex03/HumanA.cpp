/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:17:44 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/29 16:24:44 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _Wp(weapon) { return; }

HumanA::~HumanA() { return; }

void HumanA::attack( void ){

	std::cout << this->_name
			  << " attacks with their "
			  << this->_Wp.getType()
			  <<'\n';
	return;
}