/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:49:40 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 17:14:22 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BRED "\e[1;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define RED "\e[0;31m"

class Brain {
    
    private :
        std::string ideas[100];

    public :
        Brain();
        ~Brain();
        Brain(const Brain& brain);
        Brain& operator=(const Brain& brain);  

};