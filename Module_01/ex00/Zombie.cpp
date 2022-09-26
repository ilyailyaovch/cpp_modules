/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:58:20 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 07:39:34 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	this->name = "newZombie";
	std::cout << name << " is born ...\n";
}

Zombie::Zombie(std::string nameGiven):
	name(nameGiven){
	std::cout << name << " is born ...\n";
}

Zombie::~Zombie(void){
	std::cout << name << " is died ...\n";
}

void        Zombie::setName(std::string name){
	this->name = name;
}

std::string	Zombie::getName(void) const{
	return this->name;
}

void    Zombie::announce(void){
	std::cout << name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..";
	std::cout << std::endl;
}