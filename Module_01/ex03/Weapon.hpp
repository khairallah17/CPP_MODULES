/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:27:08 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 15:54:08 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define PURPLE "\e[1;35m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define RESET "\033[0m"

class Weapon {

    private:
        std::string type;

    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string&    getType(void);
        void            setType(std::string newOne);
};