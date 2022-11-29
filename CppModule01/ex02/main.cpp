/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:54:22 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/29 16:29:16 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main( void ){

	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << &str << '\n'
			  << stringPTR << '\n'
			  << &stringREF << '\n';

	std::cout << str << '\n'
			  << *stringPTR << '\n'
			  << stringREF << '\n';

	return EXIT_SUCCESS;
}