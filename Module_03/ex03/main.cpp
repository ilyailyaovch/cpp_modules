/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:25:12 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 14:30:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
    
    // NEW //
    DiamondTrap	Jhon("Jhon");
	DiamondTrap	Jhorge("Jhorge");

	Jhon.getAllInfo();
    Jhorge.getAllInfo();
	
	Jhorge.whoAmI();
	std::cout << std::endl;

	Jhorge.highFivesGuys();
	Jhorge.guardGate();
	std::cout << std::endl;

	Jhon = Jhorge;
    Jhon.getAllInfo();
    
	std::cout << std::endl;
	Jhon.setNameDiamond("Jhon Black");
    Jhorge.beRepaired(21);
    
    Jhon.getAllInfo();
    Jhorge.getAllInfo();

    DiamondTrap	Jhon_copy;
    Jhon_copy.getAllInfo();
    Jhon_copy = Jhon;
    Jhon_copy.getAllInfo();

    return (EXIT_SUCCESS);
}