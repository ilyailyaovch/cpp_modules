/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:34:00 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 13:04:32 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    std::cout << BLUE << "Dog " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(Dog const & copy): Animal(copy){
    std::cout << BLUE << "Dog " << RESET;
    std::cout << this-> type << " copy constructor called" << std::endl;
}

Dog::~Dog(void){
    std::cout << BLUE << "Dog " << RESET;
    std::cout << this-> type << " destructor called" << std::endl;
}

Dog& Dog::operator = (Dog const & rhs){
    this->type = rhs.type;
    std::cout << BLUE << "Dog " << RESET;
    std::cout << this-> type << " assignment called" << std::endl;
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << BLUE << "Dog " << RESET;
    std::cout << "Barkkk Barkkk Barkkk" << std::endl;
}