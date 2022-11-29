/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 08:53:32 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/24 19:53:42 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.hpp"

PhoneBook::PhoneBook() { return ; }

PhoneBook::~PhoneBook() {return ;}

int PhoneBook::listStatus()
{
    if (_numberOfContact)
        return 1;
    return 0;
}

void PhoneBook::searchResult(int id)
{
    if (id > _numberOfContact || id < 1)
        std::cout << "[" << id <<"] None valide index!" << std::endl;
    else
        this->_contact[id - 1].getContactInfo();
    return;
}

void PhoneBook::searchList(void)
{
    int s;
    int separator = 47;
    if (this->_numberOfContact)
    {
        if (this->_numberOfContact == 8)
            this->_status = true;
        std::cout << "\e[35m"
                  << "\t* "  << std::setfill ('-') << std::setw (separator)
                  << " *\n"
                  << "\t| Index | First name | Last name  |  Nickname  |"
                  << "\n"
                  << "\t* "  << std::setfill ('-') << std::setw (separator)
        << " *\n" ;
        if (this->_status)
            s = 7;
        else
            s = this->_counter;
        for(int i = 0; i <= s; i++)
            this->_contact[i].contactList();
        std::cout << "\t* " << std::setfill ('-') << std::setw (separator - 1) << " *";
    }
    else
        std::cout << std::endl << std::endl << "\t\tList is empty" << std::endl;
    std::cout << "\e[0m" << std::endl << std::endl;
    return ;
}

void PhoneBook::addContact(std::string *info)
{
    if (this->_numberOfContact == 8)
        this->_numberOfContact = 0;
    this->_counter = _numberOfContact;
    this->_contact[this->_counter].setInfo(this->_counter, info);
    this->_numberOfContact++;
    return ;
}

int PhoneBook::_numberOfContact = 0;