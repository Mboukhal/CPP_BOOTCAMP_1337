/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:47:01 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/30 15:07:08 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){

	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do !" 
			  << '\n';
}

void Harl::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put"
			  << "enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
			  << '\n';
}

void Harl::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming"
			  << "for years whereas you started working here since last month."
			  << '\n';
}
void Harl::error( void ) {

	std::cout << "This is unacceptable ! I want to speak to the manager now."
			  << '\n';
}

void Harl::complain( std::string level ) {

	std::string message[4] = {
								"debug",
								"info",
								"warning",
								"error"
							};

	void (Harl::*fPtr[4])( void ) = {
										&Harl::debug,
										&Harl::info,
										&Harl::warning,
										&Harl::error,
									};

	for ( int i = 0; i < 4; ++i ) {
		if ( message[i] == level ) {
			(this->*fPtr[i])();
			return;
		}
	}
}

Harl::Harl( void ) { return; }

Harl::~Harl( void ) { return; }