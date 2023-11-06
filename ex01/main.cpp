/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:48:55 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/06 16:30:16 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main ()
{
    PhoneBook pb;
    std::string query;

    while (true)
    {
        pb.startup();
        std::getline(std::cin, query, '\n');
        if (std::cin.eof())
            return (std::cout << std::endl, 1);
        if (!query.compare("ADD"))
            pb.add();
        else if (!query.compare("SEARCH"))
            pb.search();
        else if (!query.compare("EXIT"))
        {
            std::cout << "\033[1m\033[32mGOOD BYEE\033[0m" << std::endl;
            return (0);
        }
        else
            std::cerr << "PLEASE ENTER A VALID QUERY" << std::endl;
    }
}