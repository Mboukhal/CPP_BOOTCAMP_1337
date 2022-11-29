/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:46:17 by mboukhal          #+#    #+#             */
/*   Updated: 2022/09/01 07:19:27 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av ){

	if ( ac != 2 ){
		std::cerr << "Error: input\n";
		return EXIT_FAILURE;
	}

	Harl 		harl;
	int			inputStatus;
	std::string input = av[1];

	enum eInput {
					DEBUG,
					INFO,
					WORNING,
					ERROR,
					ENDEFINED
				} ;

	inputStatus = !input.compare("DEBUG") 	? DEBUG 	: ENDEFINED;
	inputStatus = !input.compare("INFO") 	? INFO 		: inputStatus;
	inputStatus = !input.compare("WORNING") ? WORNING 	: inputStatus;
	inputStatus = !input.compare("ERROR") 	? ERROR 	: inputStatus;

	switch( inputStatus ){
		
		case DEBUG :
			std::cout << "[DEBUG]\n";
			harl.complain("debug");
			std::cout << std::endl;

		case INFO :
			std::cout << "[INFO]\n";
			harl.complain("info");
			std::cout << std::endl;

		case WORNING :
			std::cout << "[WORNING]\n";
			harl.complain("warning");
			std::cout << std::endl;

		case ERROR :
			std::cout << "[ERROR]\n";
			harl.complain("error");
			break;

		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}

	return EXIT_SUCCESS;
}