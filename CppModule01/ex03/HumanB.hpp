/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:18:19 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/29 17:40:19 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {

	private:
		std::string _name;
		Weapon*		_Wp;

	public:
		HumanB( std::string name );
		~HumanB();
		void attack( void );
		void setWeapon( Weapon& weapon );
};