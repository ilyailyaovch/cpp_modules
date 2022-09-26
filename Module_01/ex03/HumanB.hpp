/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:10:55 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 09:29:05 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon      *hisWeapon;
    public:
	    HumanB(std::string name);
	    ~HumanB(void);
	    void    setWeapon(Weapon &weapon);
	    void    attack(void);
};

#endif