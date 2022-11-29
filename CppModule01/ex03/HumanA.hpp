/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:18:42 by mboukhal          #+#    #+#             */
/*   Updated: 2022/09/01 07:14:56 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {

	private:
		std::string _name;
		Weapon&		_Wp;
	
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA();
		void attack( void );
		
	
};