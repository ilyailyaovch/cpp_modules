/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:26:13 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 12:08:40 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//  Canonical //

ClapTrap::ClapTrap(void):
    name("New"), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
    name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << this-> name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    *this = copy;
    std::cout << this-> name << " copy constructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator = (ClapTrap const &rightHandSign){
    this->name = rightHandSign.name;
    this->hitPoints = rightHandSign.hitPoints;
    this->energyPoints = rightHandSign.energyPoints;
    this->attackDamage = rightHandSign.attackDamage;
    std::cout << this-> name << " assignment called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap(void){
    std::cout << this-> name << " destructor called" << std::endl;
}

//  Actions tools //
 
void    ClapTrap::attack(const std::string& target){
    if (this->hitPoints == 0){
        std::cout << RED << this-> name << " has no hitPoints" << RESET << std::endl;
        std::cout << std::endl;
    }else if (this->energyPoints == 0){
        std::cout << YELLOW << this-> name << " has no energytPoints" << RESET << std::endl;
        std::cout << std::endl;
    }else{
        this->energyPoints--;
        if (this->energyPoints < 0)
            this->hitPoints = 0;
        std::cout << "ClapTrap " << this->name;
        std::cout << " attacks " << target << ", causing ";
        std::cout << this->attackDamage << " points of damage!";
        std::cout << RESET << std::endl;
        std::cout << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->hitPoints == 0){
        std::cout << RED << this-> name << " has no hitPoints" << RESET << std::endl;
        std::cout << std::endl;
    }else{
        if (this->hitPoints < amount)
            this->hitPoints = 0;
        else
            this->hitPoints -= amount;
        std::cout << "ClapTrap " << this->name;
        std::cout << " got " << amount << " points of damage!";
        std::cout << RESET << std::endl;
        std::cout << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->hitPoints == 0){
        std::cout << RED << this-> name << " has no hitPoints" << RESET << std::endl;
        std::cout << std::endl;
    }else if(this->energyPoints == 0){
        std::cout << YELLOW << this-> name << " has no energytPoints" << RESET << std::endl;
        std::cout << std::endl;
    }else{
        this->energyPoints--;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name;
        std::cout << " got repaired by " << amount << " HitPoints ";
        std::cout << RESET << std::endl;
        std::cout << std::endl;
    }
}

//  Access  tools //

void    ClapTrap::setName(const std::string &name){
    this->name = name;
}

void	 ClapTrap::setHitPoints(unsigned int hitPoints){
    this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints){
    this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage){
    this->attackDamage = attackDamage;
}

std::string	 ClapTrap::getName(void) const{
    return this->name;
}

unsigned int ClapTrap::getHitPoints(void) const{
    return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const{
    return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const{
    return this->attackDamage;
}

void    ClapTrap::getAllInfo(void) const{
    std::cout << BOLDWHITE << this->getName() << RESET << std::endl; 
    std::cout << GREEN << "HitPoints: " << WHITE << this->getHitPoints() << std::endl; 
    std::cout << BLUE << "EnergyPoints: " <<  WHITE << this->getEnergyPoints() << std::endl;
    std::cout << RED << "AttackDamage: "<< WHITE << this->getAttackDamage() << std::endl;
    std::cout << std::endl;
}