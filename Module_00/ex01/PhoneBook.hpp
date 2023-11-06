/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:55 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/06 10:30:15 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iomanip>
#include "Contact.hpp"

class PhoneBook {


    private:
        Contact contacts[8];
        int     _currentIndex;

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void startup();
        void add();
        void search();
        void print();

};

#endif