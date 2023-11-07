/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:04:45 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 12:34:45 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

int main ()
{
    std::string     aString = "HI THIS IS BRAIN";
    std::string*    stringPTR = &aString;
    std::string&    stringREF = aString;

    std::cout << "aString MEMORY ADDRESS ==> " << PURPLE << &aString << RESET << std::endl;
    std::cout << "StringPTR MEMORY ADDRESS ==> " << PURPLE << &stringPTR << RESET << std::endl;
    std::cout << "stringREF MEMORY ADDRESS ==> " << PURPLE << &stringREF << RESET << std::endl;

    std::cout << "aString VALUE ==> " << PURPLE << aString << RESET << std::endl;
    std::cout << "StringPTR VALUE ==> " << PURPLE << stringPTR << RESET << std::endl;
    std::cout << "stringREF VALUE ==> " << PURPLE << stringREF << RESET << std::endl;
}