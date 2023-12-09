/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:45:49 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/09 11:29:11 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
    std::cout << PURPLE << "constructor has been called" << RESET << std::endl;
}

Harl::~Harl(void) {
    std::cout << BRED << "desctructor has been called" << RESET << std::endl;
}

void    Harl::debug(void) {
    std::cout << BGRN << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void    Harl::info(void) {
    std::cout << BGRN << "[INFO]: cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void    Harl::warning(void) {
    std::cout << BYLW << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void    Harl::error(void) {
    std::cout << BRED << "[ERROR]: This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::invalid(void){
    std::cout << "THIS IS TOO MUCH" << std::endl;
}
void    Harl::complain(std::string level) {

    ptrToMemFunc complaints[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string   types[4] = {"debug", "info", "warning", "error"};
    int     i;
    
    i = 0;
    while (i < (int)(level.length())) {
        level[i] = tolower(level[i]);
        i++;
    }

    i = 0;
    while (i < 4 && types[i] != level)
        i++;
    i < 4 ? (this->*complaints[i])() : invalid();
}