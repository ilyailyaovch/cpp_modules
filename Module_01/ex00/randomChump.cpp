/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:59:31 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/25 14:08:44 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Stack //
void    randomChump(std::string name){

    Zombie  secondZomdie(name);

    secondZomdie.announce();
}