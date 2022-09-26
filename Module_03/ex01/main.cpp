/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:25:12 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 10:42:22 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

    std::cout << "Pointer "<< std::endl;
    ScavTrap *pHero = &Hero;
    pHero->attack(Antihero.getName());

    Hero.setEnergyPoints(50);
    for (int i = 0; i < 6; i++){
        Hero.attack(Antihero.getName());
        if (Hero.getEnergyPoints() > 0)
            Antihero.takeDamage(Hero.getAttackDamage());
    }

    Antihero.beRepaired(10);    //He can not, he is dead
    Antihero_3.beRepaired(10); 
    Antihero.getAllInfo();
    Antihero_3.getAllInfo();

    Antihero_2.guardGate();
    std::cout << std::endl;
    
    return (EXIT_SUCCESS);
}