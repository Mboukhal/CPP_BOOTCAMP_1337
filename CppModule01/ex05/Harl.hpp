/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:40:46 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/30 14:53:45 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl {

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
};