/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:50:53 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/31 19:16:20 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int main( int ac, char **av ) {

	if ( ac != 4  ) {

		std::cerr << "\e[31mERROR: syntax error\n\t" << av[0]
				  << "[string to be replaced] [string to be replace whit]\e[0m\n";
		return EXIT_FAILURE;
	}
	if ( !av[1] || !av[2] || !av[3] ) {

		std::cerr << "\e[31mERROR: Arguments can't be empty!\n";
		return EXIT_FAILURE;
	}
	replacer file( av[1] );
	file.replace( av[2], av[3] );
	return EXIT_SUCCESS;
}