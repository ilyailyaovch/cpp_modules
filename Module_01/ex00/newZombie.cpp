/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:49:31 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/25 14:09:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Heap //
Zombie*     newZombie(std::string name){

    Zombie *newZom;

    newZom = new Zombie(name);
    if (!newZom){
        std::cout << "Memory allocation failed\n";
        exit(EXIT_FAILURE);
    }
    return newZom;
}