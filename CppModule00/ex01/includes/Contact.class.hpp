/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:35:40 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/24 19:51:25 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <iomanip>

class Contact{

    private:
        int         _id;
        std::string _phoneNumber;
        std::string _firstName;
        std::string _NickName;
        std::string _lasttName;
        std::string _DarkestSecret;

    public:
        Contact();
        ~Contact();
        void setInfo(int id, std::string *info);
        void getContactInfo(void);
        void contactList(void);
};
