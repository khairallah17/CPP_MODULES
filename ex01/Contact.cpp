/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:15:18 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/06 17:41:11 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"


std::string Contact::checkInput()
{
    std::string input;

    while (std::getline(std::cin, input, '\n'))
    {
        std::cin.clear();
        if (input.empty())
            std::cerr << "\033[31mVALUE CANNOT BE EMPTY\033[0m" << std::endl;
        else
            return (input);
    }
    return (input);
}

std::string    Contact::getDarkestSecret()
{
    return (this->_dSecret);
}

std::string      Contact::getFirstName()
{
    return (this->_fName);
}

std::string     Contact::getLastName()
{
    return (this->_lName);
}

std::string     Contact::getPhoneNumber()
{
    return (this->_phoneNumber);
}

std::string     Contact::getNickName()
{
    return (this->_nName);
}

int             Contact::getIndex()
{
    return (this->_index);
}

void    Contact::setIndex(int value)
{
    this->_index = value;
}

void    Contact::setFirstName(std::string value)
{
    this->_fName = value;
}

void    Contact::setLastName(std::string value)
{
    this->_lName = value;
}

void    Contact::setNickName(std::string value)
{
    this->_nName = value;
}

void    Contact::setPhoneNumber(std::string value)
{
    this->_phoneNumber = value;
}

void    Contact::setDarkestSecret(std::string value)
{
    this->_dSecret = value;
}

bool Contact::validContact(Contact &contact)
{
    return (!contact._fName.empty() && !contact._lName.empty() && !contact._nName.empty() && !contact._phoneNumber.empty() && !contact._dSecret.empty());
}

void    Contact::contactInfo(Contact contact)
{
    if (!validContact(contact))
    {
        std::cerr << "\033[1m\033[31mNO CONTACT FOUND\033[0m" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "\033[1m\033[35m/******************* USER INFROMATION *******************/\033[0m" << std::endl;
    std::cout << "FIRST NAME ==> " << contact.getFirstName() << std::endl;
    std::cout << "LAST NAME ==> " << contact.getLastName() << std::endl;
    std::cout << "NICK NAME ==> " << contact.getNickName() << std::endl;
    std::cout << "PHONE NUMBER ==> " << contact.getPhoneNumber() << std::endl;
    std::cout << "DARKEST SECRET ==> " << contact.getDarkestSecret() << std::endl;
    std::cout << "\033[1m\033[35m/******************* END OF USER INFROMATION *******************/\033[0m" << std::endl;
    std::cout << std::endl;
}

void    Contact::init()
{
    std::cout << "Enter the firstName ==> ";
    this->_fName = checkInput();
    std::cout << std::endl;
    std::cout << "Enter the lastName ==> ";
    this->_lName = (checkInput());
    std::cout << std::endl;
    std::cout << "Enter the nickName ==> ";
    this->_nName = (checkInput());
    std::cout << std::endl;
    std::cout << "Enter the phone Number ==> ";
    this->_phoneNumber = (checkInput());
    std::cout << std::endl;
    std::cout << "Enter the dark secret ==> ";
    this->_dSecret = (checkInput());
    std::cout << std::endl;
}

void    Contact::printData()
{
    if (this->getFirstName().empty() || this->getLastName().empty() || this->getNickName().empty())
        return ;
    std::cout << std::setw(10) << this->getIndex() << "|";
    std::cout << std::setw(10) << ((this->getFirstName().length() >= 10) ? this->getFirstName().substr(0, 9) + "." : this->getFirstName()) << "|";
    std::cout << std::setw(10) << ((this->getLastName().length() >= 10) ? this->getLastName().substr(0, 9) + "." : this->getLastName()) << "|";
    std::cout << std::setw(10) << ((this->getNickName().length() >= 10) ? this->getNickName().substr(0, 9) + "." : this->_nName) << std::endl;
}