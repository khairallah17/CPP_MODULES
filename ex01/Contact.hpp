/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:14:09 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/06 14:56:39 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
    
    private :
        std::string _lName;
        std::string _fName;
        std::string _nName;
        std::string _phoneNumber;
        std::string _dSecret;
        int         _index;

    public :
        void            init();
        void            printData();
        static bool     validContact(Contact &contact);
        static void            contactInfo(Contact contact);
        std::string     checkInput();
        
        void            setFirstName(std::string value);
        void            setLastName(std::string value);
        void            setPhoneNumber(std::string value);
        void            setNickName(std::string value);
        void            setDarkestSecret(std::string value);
        void            setIndex(int value);

        std::string     getFirstName();
        std::string     getLastName();
        std::string     getNickName();
        std::string     getPhoneNumber();
        std::string     getDarkestSecret();
        int             getIndex();
};

#endif