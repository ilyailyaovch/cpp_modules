/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:15:00 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 09:29:31 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
    name(name){
    std::cout << "HumanB consrtucted" << std::endl;
}

HumanB::~HumanB(void){
    std::cout << "HumanB destructed" << std::endl;
}

void    HumanB::attack(void){
    std::cout << name;
    std::cout << " attacks with his ";
    std::cout << hisWeapon->getType();
    std::cout << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
    hisWeapon = &weapon;
}