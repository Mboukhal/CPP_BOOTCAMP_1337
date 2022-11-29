/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:11:58 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/29 16:43:42 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon {

	private:
		std::string	type;

	public:
		Weapon();
		Weapon( std::string tp );
		~Weapon();
		const std::string& getType( void );
		void setType( std::string newType );

};