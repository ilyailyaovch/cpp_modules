/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:45:15 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 09:22:53 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
    std::cout << "Weapon consrtucted" << std::endl;
}

Weapon::Weapon(std::string newType):
    type(newType){
    std::cout << "Weapon consrtucted" << std::endl;
}

Weapon::~Weapon(void){
    std::cout << "Weapon destructed" << std::endl;
}

const std::string &Weapon::getType(void) const{
    return (type);
}

void    Weapon::setType(std::string type){
    this->type = type;
}