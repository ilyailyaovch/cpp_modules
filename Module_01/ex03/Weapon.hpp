/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:44:45 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 09:23:08 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
    private:
        std::string     type;
    public:
        Weapon(void);
        Weapon(std::string newType);
        ~Weapon(void);
        const std::string     &getType(void) const;
        void                   setType(std::string newType);
};

#endif