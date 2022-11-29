/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:51:28 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/30 14:22:06 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>

class replacer {

	private:

		std::string 	buffer;
		std::string 	fileName;
		std::ifstream	fileIn;
		std::ofstream	fileOut;

	public:

		replacer();
		replacer( std::string filename );
		~replacer();
		void	open_in( std::string filename );
		void	open_out( void );
		void	replace( std::string find, std::string replace );
		void	setNewFile ( std::string& fined, std::string& replace );

};
