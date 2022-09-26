/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:01:18 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/25 15:05:05 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv){
    Zombie *horde;
    int     amount;

    if (argc != 2)
        return (EXIT_FAILURE);
    amount = atoi(argv[1]);
    if (!amount)
        return (EXIT_FAILURE);
    horde = zombieHorde(amount, "oneOfMany");
    delete [] horde;
    return (EXIT_SUCCESS);
}