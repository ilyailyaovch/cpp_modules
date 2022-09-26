/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:58:18 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/25 14:20:15 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string     name;

    public:
        Zombie(void);
        ~Zombie(void);
        Zombie(std::string nameGiven);
        void        announce(void);
        void        setName(std::string name);
        std::string	getName(void) const;
        
};

Zombie* zombieHorde( int N, std::string name );

#endif