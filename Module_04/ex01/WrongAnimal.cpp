/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:20:17 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 13:20:29 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type(""){
    std::cout << RED << "WrongAnimal " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type){
    std::cout << RED << "WrongAnimal " << RESET;
    std::cout << this-> type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src): type(src.type){
    std::cout << RED << "WrongAnimal " << RESET;
    std::cout << this-> type << " copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << RED << "WrongAnimal " << RESET;
    std::cout << this-> type << " destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (WrongAnimal const & rhs){
    this->type = rhs.type;
    std::cout << RED << "WrongAnimal " << RESET;
    std::cout << this-> type << " assignment called" << std::endl;
    return *this;
}

std::string     WrongAnimal::getType(void) const{
    return this->type;
}

void            WrongAnimal::makeSound(void) const{
    std::cout << RED << "WrongAnimal " << RESET;
    std::cout << "***" << std::endl;
}