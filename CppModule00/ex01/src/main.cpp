/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:59:30 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/24 19:24:38 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.hpp"

#define PROMPT "> " 


static std::string inputAdd(std::string msg)
{
    std::string input;
    int i = 0;

    std::cout << "Enter " << msg << ":" << std::endl; ;
    while (!input[0])
    {
        if (i++)
            std::cout << "\e[31m"<< msg << " can\'t be empty!\e[0m" << std::endl;
        std::cout << PROMPT ;
        getline(std::cin, input);
    }
    return input;
}


void _addContact_(PhoneBook *pb)
{
    std::string info[5];

    info[0] = inputAdd("phone number");
    info[1] = inputAdd("first name");
    info[2] = inputAdd("last name");
    info[3] = inputAdd("Darkest Secret");
    info[4] = inputAdd("Nickname");
    pb->addContact(info);
    std::cout << "\ec";
    return;
}

void _searchContact_(PhoneBook *pb)
{
    std::string index = "00";
    int res;
    int i = 0;

    std::cout << "\ec";
    pb->searchList();
    std::cout << "Enter index:" << std::endl;

    while (index.size() != 1 && (index[0] <= 49 || index[0] >= 56))
    {
        if (i++)
            std::cout << "\e[1;31mNone valid number!\e[0m" << std::endl;
        std::cout << "> ";
        getline(std::cin, index);
        std::cout << (int) index[0] << "\t" << index.size() << std::endl;
     }
    res = atoi(&index[0]);
    std::cout << "\ec";
    std::cout << std::endl << std::endl;
    pb->searchResult(res);
    std::cout << std::endl << std::endl << "Press any key to continue...";
    getline(std::cin, index);
    std::cout << "\ec";
    return;
}

void mainInterface(PhoneBook *pb)
{
    std::string input;
    int err = -1;
    
    while (true)
    {
        if (!(input.compare("ADD")))
            _addContact_(pb);
        else if (!(input.compare("SEARCH")))
            _searchContact_(pb);
        else if (!(input.compare("EXIT")))
            break;
        else
            err++;
        pb->searchList();
        std::cout << "\e[31m\tENTER:\e[0m\e[36m" << std::endl
                  << "\t\tADD\t- for adding a contact." << std::endl
                  << "\t\tSEARCH\t- for searching a contact." << std::endl
                  << "\t\tEXIT\t- to exit.\e[0m" << std::endl
                  << std::endl;
        if (err)
            std::cout << "\e[1;31mNone valid keyword!\e[0m" << std::endl;
        std::cout << PROMPT ;
        getline(std::cin, input);
        std::cout << "\ec";
    }
}

int main(void)
{
    PhoneBook phoneBook;
    
    std::cout << "\ec";
    welcomeInterface();
    mainInterface(&phoneBook);
    return EXIT_SUCCESS;
}