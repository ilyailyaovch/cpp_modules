/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:00:23 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 13:18:28 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void):
    Form("ShrubberyCreationForm", 145, 137){
  std::cout << BOLDWHITE << "ShrubberyCreationForm" << RESET;
  std::cout << " Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
    Form("ShrubberyCreationForm", 145, 137){
  std::cout << BOLDWHITE << "ShrubberyCreationForm" << RESET;
  std::cout << " Constructor called" << std::endl;
  this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
  std::cout << BOLDWHITE << "ShrubberyCreationForm" << RESET;
  std::cout << " Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
  std::cout << BOLDWHITE << "ShrubberyCreationForm" << RESET;
  std::cout << " Copy Constructor called" << std::endl;
  *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other){
  this->gradeForSign = other.gradeForSign;
  this->gradeForExec = other.gradeForExec;
  this->isSigned = other.isSigned;
  return (*this);
}

void ShrubberyCreationForm::FormFunction() const{
    std::string     fileName;
    std::ofstream   fileWrite;

    fileName = this->target + "_shrubbery";
    fileWrite.open(fileName, std::fstream::out);
    if (!fileWrite.is_open()){
        std::cout << "Error with opening file" << std::endl;
        exit (EXIT_FAILURE);
    }
    fileWrite << " _                \n\
| |                                 \n\
| |_ _ __ ___  ___                  \n\
| __| '__/ _ \\/ _ \\               \n\
| |_| | |  __/  __/                 \n\
 \\__|_|  \\___|\\___|"<< std::endl;
  
    fileWrite.close();
}
