/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:48:54 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 13:17:25 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(void):
    Form("RobotomyRequestForm", 72, 45){
  std::cout  << BOLDWHITE << "RobotomyRequestForm" << RESET;
  std::cout << " Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
    Form("RobotomyRequestForm", 72, 45){
  std::cout  << BOLDWHITE << "RobotomyRequestForm" << RESET;
  std::cout << " Constructor called" << std::endl;
  this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
  std::cout  << BOLDWHITE << "RobotomyRequestForm" << RESET;
  std::cout << " Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy){
  std::cout  << BOLDWHITE << "RobotomyRequestForm" << RESET;
  std::cout << " Copy Constructor called" << std::endl;
  *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm &other){
  this->gradeForSign = other.gradeForSign;
  this->gradeForExec = other.gradeForExec;
  this->isSigned = other.isSigned;
  return (*this);
}

void RobotomyRequestForm::FormFunction() const{
  int randomiser;
	srand(time(NULL));
	randomiser = rand() % 2;
	std::cout << BOLDWHITE << "RobotomyRequestForm " << RESET << std::endl;
	std::cout << this->target << " has ";
  std::cout << (randomiser ? "" : "not ") << "been robotomised" << std::endl;
}
