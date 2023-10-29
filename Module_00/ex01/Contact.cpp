/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:15:18 by mkhairal          #+#    #+#             */
/*   Updated: 2023/10/29 03:33:10 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void    Contact::init()
{
    std::cout << "Enter the firstName ==> ";
    std::cin >> this->_fName;
    std::cout << "Enter the lastName ==> ";
    std::cin >> this->_lName;
    std::cout << "Enter the nickName ==> ";
    std::cin >> this->_nName;
    std::cout << "Enter the phone Number ==> ";
    std::cin >> this->_phoneNumber;
    std::cout << "Enter the dark secret ==> ";
    std::cin >> this->_dSecret;
}

void    Contact::printData()
{
    std::cout << "first name ==> " << this->_fName;
    std::cout << "last name ==> " << this->_lName;
    std::cout << "nick name ==> " << this->_nName;
    std::cout << "phne ==> " << this->_fName;
    std::cout << "first name ==> " << this->_fName;
}