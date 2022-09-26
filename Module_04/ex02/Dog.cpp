/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:34:00 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 15:32:49 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
    Animal("Dog"),
    brain(new Brain()){
    std::cout << BLUE << "Dog " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(Dog const & copy):
    Animal(copy),
    brain(new Brain()){
    *this->brain = *copy.brain;
    std::cout << BLUE << "Dog " << RESET;
    std::cout << this-> type << " copy constructor called" << std::endl;
}

Dog::~Dog(void){
    std::cout << BLUE << "Dog " << RESET;
    std::cout << this-> type << " destructor called" << std::endl;
    delete brain;
}

Dog& Dog::operator = (Dog const & rhs){
    this->type = rhs.type;
    *this->brain = *rhs.brain;
    std::cout << BLUE << "Dog " << RESET;
    std::cout << this-> type << " assignment called" << std::endl;
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << BLUE << "Dog " << RESET;
    std::cout << "Barkkk Barkkk Barkkk" << std::endl;
}

Brain*  Dog::getBrain(void) const{
    return this->brain;
}