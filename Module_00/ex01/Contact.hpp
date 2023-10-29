/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:14:09 by mkhairal          #+#    #+#             */
/*   Updated: 2023/10/29 03:25:05 by mkhairal         ###   ########.fr       */
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

    public :
        void    init();
        void    printData();
};

#endif