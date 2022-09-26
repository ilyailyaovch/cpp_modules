/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:40:57 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 12:56:57 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
    this->name = "New";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << GREEN << "FragTrap " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string  &name): ClapTrap(name){
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << GREEN << "FragTrap " << RESET;
    std::cout << this-> name <<  " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy){
    *this = copy;
    std::cout << GREEN << "FragTrap " << RESET;
    std::cout << "copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void){
    std::cout << GREEN << "FragTrap " << RESET;
    std::cout << this-> name << " destructor called" << std::endl;
}

FragTrap&   FragTrap::operator = (FragTrap const &rightHandSign){
    this->name = rightHandSign.name;
    this->hitPoints = rightHandSign.hitPoints;
    this->energyPoints = rightHandSign.energyPoints;
    this->attackDamage = rightHandSign.attackDamage;
    std::cout << GREEN << "FragTrap " << RESET;
    std::cout << this-> name << " assignment called" << std::endl;
    return *this;
}

void    FragTrap::highFivesGuys(void){
    std::cout << GREEN;
	std::cout << "FragTrap ";
	std::cout << RESET;
	std::cout << this->name << " High Five guys!";
	std::cout << std::endl;
}