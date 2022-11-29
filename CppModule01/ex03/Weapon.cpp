/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:19:39 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/29 16:09:05 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { return; }

Weapon::Weapon( std::string tp ) : type(tp) { return; }

Weapon::~Weapon() { return; }

const std::string& Weapon::getType( void ) {

	return this->type;
}

void Weapon::setType( std::string newType ){

	this->type = newType;
}

