#include "fstream"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("home") {
    std::cout << GRN << "ShrubberyCreationForm constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << BRED << "ShrubberyCreationForm destructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target) {
    std::cout << GRN << "ShrubberyCreationForm paramtrized constructor called" << RESET << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) {
    *this = form;
    std::cout << GRN << "ShrubberyCreationForm Copy Constructor Called" << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form) {
    std::cout << GRN << "ShrubberyCreationForm copy assignement overload called" << RESET << std::endl;
    this->target = form.target;
    return (*this);
}

void    ShrubberyCreationForm::executeAction() const {
    std::string fileName = (this->target + "_shrubbery").c_str();
    std::ofstream file(fileName);
    if (!file)
        throw std::ofstream::failure("ShrubberyCreationForm failed to open target file");
    file << "     ### "<<std::endl;
    file << "    #o###" << std::endl;
    file << "  #####o###" << std::endl;
    file << " #o#\\#|#/###" << std::endl;
    file << "  ###\\|/#o#" << std::endl;
    file << "   # }|{  #" << std::endl;
    file << "     }|{" << std::endl;
    file.close();
}