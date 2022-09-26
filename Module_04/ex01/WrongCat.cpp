/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:23:00 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 13:23:01 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
    std::cout << RED << "WrongCat " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy): WrongAnimal(copy){
    std::cout << RED << "WrongCat " << RESET;
    std::cout << this-> type << " copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void){
    std::cout << RED << "WrongCat " << RESET;
    std::cout << this-> type << " destructor called" << std::endl;
}

WrongCat& WrongCat::operator = (WrongCat const & rhs){
    this->type = rhs.type;
    std::cout << RED << "WrongCat " << RESET;
    std::cout << this-> type << " assignment called" << std::endl;
    return *this;
}

void    WrongCat::makeSound(void) const{
    std::cout << RED << "WrongCat " << RESET;
    std::cout << "Miaaaou Miaaaou Miaaaou" << std::endl;
}