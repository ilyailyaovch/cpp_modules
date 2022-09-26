/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:16:20 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 09:04:35 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
    name(name), hisWeapon(weapon){
    std::cout << "HumanA consrtucted" << std::endl;
}

HumanA::~HumanA(void){
    std::cout << "HumanA destructed" << std::endl;
}

void    HumanA::attack(void){
    std::cout << name;
    std::cout << " attacks with his ";
    std::cout << hisWeapon.getType();
    std::cout << std::endl;
}

void    HumanA::setType(std::string type){
    hisWeapon.setType(type);
}