/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 08:53:27 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/24 19:50:54 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.class.hpp"

class PhoneBook{
    
    private:
        static int  _numberOfContact;
        int         _counter;
        bool        _status;
        Contact     _contact[8];

    public:
        PhoneBook();
        ~PhoneBook(void);
        void addContact(std::string *info);
        void searchList();
        void searchResult(int id);
        int  listStatus();
};

void    welcomeInterface(void);
