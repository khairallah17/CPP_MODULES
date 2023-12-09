/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:44:07 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/09 11:26:19 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#define PURPLE "\e[1;35m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define RESET "\033[0m"
#define BYLW "\e[1;33m"

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        Harl();
        ~Harl();
        void    harlFilter(std::string level);
};

typedef void(Harl::*ptrToMemFunc)();