/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:25:12 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 13:00:58 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
    
    ScavTrap Hero("Bogdan");
    ScavTrap Antihero;
    ScavTrap Antihero_2;
    ScavTrap Antihero_3("New ememy");

    std::cout << std::endl;
    Hero.getAllInfo();
    Antihero.getAllInfo();
    Antihero_2.getAllInfo();

    Antihero.setName("Enemy");
    Antihero_2 = Antihero;
    
    Antihero.getAllInfo();
    Antihero_2.getAllInfo();
    Antihero_3.getAllInfo();
    
    Hero.attack(Antihero.getName());
    Antihero.takeDamage(Hero.getAttackDamage());


    Hero.setEnergyPoints(50);
    for (int i = 0; i < 6; i++){
        Hero.attack(Antihero.getName());
        if (Hero.getEnergyPoints() > 0)
            Antihero.takeDamage(Hero.getAttackDamage());
    }

    Antihero.beRepaired(10);
    Antihero_3.beRepaired(10); 
    Antihero.getAllInfo();
    Antihero_3.getAllInfo();

    Antihero_2.guardGate();
    std::cout << std::endl;

    // NEW //
    std::cout << std::endl;
    
    FragTrap Person("Tom");
    Person.getAllInfo();
    Person.highFivesGuys();
    Person.attack(Hero.getName());
    Hero.takeDamage(Person.getAttackDamage());
    Hero.getAllInfo();
    
    return (EXIT_SUCCESS);
}