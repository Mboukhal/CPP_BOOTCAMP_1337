/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:54:01 by mboukhal          #+#    #+#             */
/*   Updated: 2022/09/01 07:10:14 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

void replacer::open_out( void ){

	this->fileOut.open( this->fileName += ".replace", std::ofstream::out );

	if ( this->fileOut.is_open() ) {
		this->fileOut << this->buffer;
		this->fileOut.close();
	}
	else {
		std::cerr << "\e[31mERROR: File not found!\e[0m" << std::endl;
		return;
	}
}

void replacer::setNewFile ( std::string& find, std::string& replace ) {

	int		offset = 0;
	int 	findSize = find.size();

	offset = this->buffer.find( find );
	if (offset == std::string::npos) {

		std::cerr << "\e[32mTarget don't existed in file \e[0m" << std::endl;
		return;
	}
	while (offset != std::string::npos){

		this->buffer.erase( offset, findSize );
		this->buffer.insert( offset, replace );
		offset = this->buffer.find( find, offset );
	}
}

void	replacer::replace( std::string find, std::string replace ) {

	if ( find.empty() ){

		std::cerr << "\e[31mERROR: find keyword can't be empty!\e[0m" << std::endl;
		return;
	}
	if ( replace.empty() ){

		std::cerr << "\e[31mERROR: replacer keyword can't be empty!\e[0m" << std::endl;
		return;
	}
	if ( this->buffer.empty() ){
		std::cerr << "\e[31mERROR: file is empty!\e[0m" << std::endl;
		return;
	}
	if ( find != replace )
		replacer::setNewFile( find, replace );
	replacer::open_out();
}

void replacer::open_in( std::string filename ) {

	if ( filename.empty() ){
		std::cerr << "ERROR: Need to provide a filename!" << std::endl;
		return ;
	}

	char	c;
	this->fileName = filename;
	this->fileIn.open( filename, std::ifstream::in );

	if ( this->fileIn.is_open() ) {

		while ( this->fileIn.get(c) ) {
			this->buffer += c;
		}
		this->fileIn.close();
	}
	else {
		std::cerr << "\e[31mERROR: File not found!\e[0m" << std::endl;
		return;
	}
}

replacer::replacer( std::string filename ) {
	this->open_in( filename );
}

replacer::replacer( void ) { return; }

replacer::~replacer( void ) { return; }