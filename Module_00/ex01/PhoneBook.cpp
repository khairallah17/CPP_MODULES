/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:27:39 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/06 22:32:54 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
    this->_currentIndex = 0;
    return;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void    PhoneBook::startup()
{
    std::cout << "\tHELLO TO OUR PHONEBOOK" << std::endl;
    std::cout << "ENTER \x1b[32m\"ADD\"\x1b[0m TO ADD A NEW CONTACT" << std::endl;
    std::cout << "ENTER \x1b[33m\"SEARCH\"\x1b[0m TO SEARCH FOR A CONTACT" << std::endl; 
    std::cout << "ENTER \x1b[35m\"EXIT\"\x1b[0m TO QUIT THE PHONEBOOK" << std::endl;
}

void    PhoneBook::add()
{
    Contact contact;

    contact.init();
    if (_currentIndex > 7)
        _currentIndex = 0;
    if(!Contact::validContact(contact))
    {
        std::cerr << "INVALID CONTACT" << std::endl;
        exit(0);
    }
    contacts[_currentIndex] = contact;
    contacts[_currentIndex].setIndex(_currentIndex);
    _currentIndex++;
}

void    PhoneBook::search()
{
    int index;

    print();
    std::cout << "PLEASE ENTER AN INDEX TO SEARCH FOR ==> ";
	while (!(std::cin >> index) || (index < 0 || index >= this->_currentIndex))
	{
		if (std::cin.eof())
			exit(0);
		std::cin.clear();
		std::cin.ignore();
		std::cerr << "INVALID INDEX" << std::endl;
	}
    std::cin.ignore();
    Contact::contactInfo(contacts[index]);
}

void    PhoneBook::print()
{
    std::cout << "/******************************* \033[0;35mYOUR CURRENT CONTACT\033[0m *******************************/" << std::endl;
    std::cout << std::setw(10) << "INDEX" << "|";
    std::cout << std::setw(10) << "FIRST NAME" << "|";
    std::cout << std::setw(10) << "LAST NAME" << "|";
    std::cout << std::setw(10) << "NICK NAME" << std::endl;
    for (int i = 0 ; i < 8 ; i++)
        this->contacts[i].printData();
    std::cout << "/******************************* \033[0;35mEND OF CONTACTS\033[0m *******************************/" << std::endl;
}