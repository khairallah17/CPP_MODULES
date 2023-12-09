/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:17:54 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/09 17:39:57 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char *av[]) {
    if (ac == 4) {
        std::string fileData;
        std::string change;
        std::string dummy;
        std::string  subbed;
        unsigned long    i;
        unsigned long    old_pos;
        
        std::ifstream file1(av[1]);
        if (!file1) {
            std::cerr << "FILE 1 NOT FOUND" << std::endl;
            exit (0);
        }
        std::ofstream file2("newFile");
        if (!file2) {
            std::cerr << "FILE 2 NOT FOUND" << std::endl;
            exit (0);
        }
        while(std::getline(file1, fileData, '\0'));
        file1.close();
        old_pos = i = 0;
        std::cout << i << std::endl;
        i = fileData.find(av[2], i);
        do {
            file2 << fileData.substr(old_pos, i - old_pos);
            file2 << av[3];
            old_pos = i + std::strlen(av[2]);
            i = fileData.find(av[2], old_pos);
        }while(i != std::string::npos);
        file2 << fileData.substr(old_pos);
        std::cout << (int)fileData.length();
        file2.close();
    } else {
        std::cerr << "INSUFFICIENT NUMBER OF ARGUMENTS" << std::endl;
        exit (0);
    }
    return (0);
}