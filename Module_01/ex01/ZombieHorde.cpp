/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:20:13 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/25 15:03:25 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    Zombie *Horde = new Zombie[N];
    if (!Horde){
        std::cout << "Memory allocation failed\n";
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; i++){
        Horde[i].setName(name);
        Horde[i].announce();
    }
    return (Horde);
}