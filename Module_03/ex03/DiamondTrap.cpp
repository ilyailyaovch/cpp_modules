/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:04:54 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 14:31:41 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
	this->name              = "New";
    this->ClapTrap::name    = name + "_clap_name";
    this->hitPoints         = FragTrap::hitPoints;
    this->energyPoints      = ScavTrap::energyPoints;
    this->attackDamage      = FragTrap::attackDamage;
	std::cout << RED;
	std::cout << "DiamondTrap ";
	std::cout << RESET;
	std::cout << "default constructor has been called.";
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(const std::string  &name):
    ClapTrap(name + "_clap_name"),
    FragTrap(name + "_clap_name"),
    ScavTrap(name + "_clap_name"){
    this->name          = name;
    this->hitPoints     = FragTrap::hitPoints;
    this->energyPoints  = ScavTrap::energyPoints;
    this->attackDamage  = FragTrap::attackDamage;
    std::cout << RED << "DiamondTrap " << RESET;
    std::cout << this-> name <<  " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy):
    ClapTrap(copy),
    FragTrap(copy),
    ScavTrap(copy){
    //this->name = copy.name;
    this->name = copy.getName();
    std::cout << RED << "DiamondTrap " << RESET;
    std::cout << this-> name <<  "copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void){
    std::cout << RED << "DiamondTrap " << RESET;
    std::cout << this->name << " destructor called" << std::endl;
}

DiamondTrap&   DiamondTrap::operator = (DiamondTrap const &rightHandSign){
    ClapTrap::operator=(rightHandSign);
    FragTrap::operator=(rightHandSign);
	ScavTrap::operator=(rightHandSign);
    this->name          = rightHandSign.getName();
    this->hitPoints     = rightHandSign.hitPoints;
    this->energyPoints  = rightHandSign.energyPoints;
    this->attackDamage  = rightHandSign.attackDamage;
    std::cout << RED << "DiamondTrap " << RESET;
    std::cout << this-> name << " assignment called" << std::endl;
    return *this;
}

void	DiamondTrap::whoAmI(void){
	std::cout << RED << "DiamondTrap " << RESET << std::endl;
	std::cout << "My ClapTrap name is " << this->ClapTrap::name << '.';
	std::cout << std::endl;
	std::cout << "My DiamondTrap name is " << this->name << '.';
	std::cout << std::endl;
}

std::string	&DiamondTrap::getNameDiamond(void){
	return (this->name);
}

void	DiamondTrap::setNameDiamond(const std::string &name){
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
}
