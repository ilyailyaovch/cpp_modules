/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:48:54 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 15:18:16 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void):
    Form("PresidentialPardonForm", 25, 5){
  std::cout  << BOLDWHITE << "PresidentialPardonForm" << RESET;
  std::cout << "Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
    Form("PresidentialPardonForm", 25, 5){
  std::cout  << BOLDWHITE << "PresidentialPardonForm" << RESET;
  std::cout << " Constructor called" << std::endl;
  this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
  std::cout  << BOLDWHITE << "PresidentialPardonForm" << RESET;
  std::cout << " Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy){
  std::cout  << BOLDWHITE << "PresidentialPardonForm" << RESET;
  std::cout << " Copy Constructor called" << std::endl;
  *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm &other){
  this->gradeForSign = other.gradeForSign;
  this->gradeForExec = other.gradeForExec;
  this->isSigned = other.isSigned;
  return (*this);
}

void PresidentialPardonForm::FormFunction() const{
  std::cout << BOLDWHITE << "PresidentialPardonForm " << RESET << std::endl;
	std::cout << this->target << " Pardoned!!!" << std::endl;
}
