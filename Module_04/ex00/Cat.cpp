/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:34:03 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 13:02:12 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
    std::cout << YELLOW << "Cat " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Cat::Cat(Cat const & copy): Animal(copy){
    std::cout << YELLOW << "Cat " << RESET;
    std::cout << this-> type << " copy constructor called" << std::endl;
}

Cat::~Cat(void){
    std::cout << YELLOW << "Cat " << RESET;
    std::cout << this-> type << " destructor called" << std::endl;
}

Cat& Cat::operator = (Cat const & rhs){
    this->type = rhs.type;
    std::cout << YELLOW << "Cat " << RESET;
    std::cout << this-> type << " assignment called" << std::endl;
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << YELLOW << "Cat " << RESET;
    std::cout << "Miaaaou Miaaaou Miaaaou" << std::endl;
}