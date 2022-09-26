/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:25:12 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 10:11:10 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    
    ClapTrap Protagonist("John");
    ClapTrap Antagonist("Enemy");

    Protagonist.getAllInfo();
    Antagonist.getAllInfo();
    
    Protagonist.attack(Antagonist.getName());
    Antagonist.takeDamage(Protagonist.getAttackDamage());
    Antagonist.beRepaired(1);

    Protagonist.getAllInfo();
    Antagonist.getAllInfo();

    Protagonist.setAttackDamage(5);
    for(int i = 0; i < 3; i++){
        Protagonist.attack(Antagonist.getName());
        Antagonist.takeDamage(Protagonist.getAttackDamage());
    }
    Antagonist.beRepaired(10);

    Protagonist.getAllInfo();
    Antagonist.getAllInfo();
    return (EXIT_SUCCESS);
}