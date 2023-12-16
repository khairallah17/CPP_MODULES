/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:53:19 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 14:37:29 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define GRN "\e[0;32m"
#define BRED "\e[1;31m"
#define YEL "\e[0;33m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"

class Animal {

    protected:
        std::string type;
    
    public:
        Animal(void);
        virtual ~Animal(void);
        Animal(const Animal& animal);
        Animal& operator=(const Animal& animal);
        virtual void makeSound() const;
        void    setType(std::string type);
        std::string getType() const;

};