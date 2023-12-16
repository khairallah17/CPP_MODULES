/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:58:53 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 18:04:46 by mkhairal         ###   ########.fr       */
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

class AAnimal {

    protected:
        std::string type;
    
    public:
        virtual void makeSound() const = 0;
        void    setType(std::string type);
        std::string getType() const;

};