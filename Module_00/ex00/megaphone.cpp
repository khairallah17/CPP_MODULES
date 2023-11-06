/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:48:41 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/06 16:10:41 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void checkAndPrint(char *str)
{
    for (int i = 0 ; i < (int)std::strlen(str); i++)
    {
        if (std::islower(str[i]))
            std::cout << (char)std::toupper(str[i]);
        else
            std::cout << str[i];
    }
}

int main (int ac, char *av[])
{

    if (ac == 1)
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else if (ac > 1)
    {
        for (int i = 1 ; i < ac ; i++)
            checkAndPrint(av[i]);
    }
    std::cout << std::endl;
    return 0;
}