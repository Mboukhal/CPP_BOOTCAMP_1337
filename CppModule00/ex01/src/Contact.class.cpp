/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:38:34 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/24 19:22:22 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"


Contact::Contact() { return ; }

Contact::~Contact(void) { return ; }

void Contact::setInfo(int id, std::string *info)
{
    this->_id = id;
    this->_phoneNumber = info[0];
    this->_firstName = info[1];
    this->_lasttName = info[2];
    this->_NickName = info[3];
    this->_DarkestSecret = info[4];
    return;
}

void Contact::getContactInfo(void)
{
    std::cout << "Id:\t\t  " << (this->_id + 1) << std::endl 
              << "Phone Number:\t  " << this->_phoneNumber << std::endl
              << "First Name:\t  " << this->_firstName << std::endl
              << "Nick Name:\t  " << this->_NickName << std::endl
              << "Last Name:\t  " << this->_lasttName << std::endl
              << "Darkest Secret:\t  " << this->_DarkestSecret << std::endl;
    return;
}

void printItem(std::string str)
{
    int size = str.size();
    int len = (12 - size) / 2;
    int i = -1;
    int row = 0;

    if (size < 12)
    {
        std::cout << "|";
        while (++i < len)
            std::cout << " ";
        if (size % 2)
            std::cout << " ";
        std::cout << str ;
        i = -1;
        while (++i < len)
            std::cout << " ";

    }
    else
    {
        std::cout << "| ";
        i = 0;
        for ( std::string::iterator it=str.begin(); i != 9; ++it, ++i )
            std::cout << *it;
        std::cout << ". ";
    }
    return;
}

void Contact::contactList(void)
{
    std::cout << "\t|   " << (this->_id + 1) << "   ";
    printItem(this->_firstName);
    printItem(this->_lasttName);
    printItem(this->_NickName);
    std::cout << "|" << std::endl;
    return;
}