/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:55 by mkhairal          #+#    #+#             */
/*   Updated: 2023/10/29 00:29:37 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {

    Contact contact[8];

    public:
        void add(char *lName, char *fName, char *nickName, char *phoneNumber, char *dSecret);
        void search();

};

#endif