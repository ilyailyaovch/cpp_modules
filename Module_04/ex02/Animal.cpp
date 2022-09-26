/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:33:20 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 13:02:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type(""){
    std::cout << GREEN << "Animal " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type){
    std::cout << GREEN << "Animal " << RESET;
    std::cout << this-> type << " constructor called" << std::endl;
}

Animal::Animal(Animal const & src): type(src.type){
    std::cout << GREEN << "Animal " << RESET;
    std::cout << this-> type << " copy constructor called" << std::endl;
}

Animal::~Animal(void){
    std::cout << GREEN << "Animal " << RESET;
    std::cout << this-> type << " destructor called" << std::endl;
}

Animal& Animal::operator = (Animal const & rhs){
    this->type = rhs.type;
    std::cout << GREEN << "Animal " << RESET;
    std::cout << this-> type << " assignment called" << std::endl;
    return *this;
}

std::string     Animal::getType(void) const{
    return this->type;
}

void            Animal::makeSound(void) const{
    std::cout << GREEN << "Animal " << RESET;
    std::cout << "***" << std::endl;
}