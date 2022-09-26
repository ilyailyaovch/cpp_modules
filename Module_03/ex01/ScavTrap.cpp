/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:14:38 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 12:33:26 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
    this->name = "New";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << MAGENTA << "ScavTrap " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string  &name): ClapTrap(name){
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << MAGENTA << "ScavTrap " << RESET;
    std::cout << this-> name <<  " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy){
    *this = copy;
    std::cout << MAGENTA << "ScavTrap " << RESET;
    std::cout << "copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << MAGENTA << "ScavTrap " << RESET;
    std::cout << this-> name << " destructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator = (ScavTrap const &rightHandSign){
    this->name = rightHandSign.name;
    this->hitPoints = rightHandSign.hitPoints;
    this->energyPoints = rightHandSign.energyPoints;
    this->attackDamage = rightHandSign.attackDamage;
    std::cout << MAGENTA << "ScavTrap " << RESET;
    std::cout << this-> name << " assignment called" << std::endl;
    return *this;
}

void    ScavTrap::attack(const std::string &target){
    if (this->hitPoints == 0){
        std::cout << RED << this-> name << " has no hitPoints" << RESET << std::endl;
        std::cout << std::endl;
	}else if (this->energyPoints == 0) {
        std::cout << YELLOW << this-> name << " has no energytPoints" << RESET << std::endl;
        std::cout << std::endl;
    } else{
        if (this->energyPoints < 10)
            this->energyPoints = 0;
        else
            this->energyPoints -= 10;
        std::cout << MAGENTA << "ScavTrap " << RESET << this->name;
        std::cout << " attacks " << target << ", causing ";
        std::cout << this->attackDamage << " points of damage!";
        std::cout << RESET << std::endl;
        std::cout << std::endl;
    }
}

void    ScavTrap::guardGate(void){
    std::cout << MAGENTA;
	std::cout << "ScavTrap ";
	std::cout << RESET;
	std::cout << this->name << " Gate Keeper mode activated.";
	std::cout << std::endl;
}