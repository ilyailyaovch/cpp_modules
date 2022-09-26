/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:58:22 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/25 14:09:35 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){

    Zombie  *firstZombie;

    firstZombie = newZombie("first");   //Heap allocation
    firstZombie->announce();            //Usage outside
    randomChump("second");              //Stack allocation
    delete firstZombie;                 //Free memory
    return (EXIT_SUCCESS);
}