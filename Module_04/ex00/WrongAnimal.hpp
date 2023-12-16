/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:37:49 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 14:46:24 by mkhairal         ###   ########.fr       */
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

class WrongAnimal {
    
    protected:
        std::string type;

    public:
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal& operator=(const WrongAnimal& animal);
        WrongAnimal(const WrongAnimal& animal);

        std::string getType() const;
        void        makeSound();
};