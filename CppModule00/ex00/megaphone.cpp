/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:58:51 by mboukhal          #+#    #+#             */
/*   Updated: 2022/08/02 06:27:05 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upper(char **str, int len)
{
    int i;
    int j;

    i = 1;
    while (i <= len)
    {
        j = 0;
        while (str[i][j])
            std::cout << (char)std::toupper(str[i][j++]);
        i++;
    }
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    if (ac > 1)
        print_upper(av, ac - 1);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}