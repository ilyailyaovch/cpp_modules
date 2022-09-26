/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:10:55 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 09:02:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon      &hisWeapon;
    public:
	    HumanA(std::string name, Weapon &weapon);
	    ~HumanA(void);
	    void    setType(std::string type);
	    void    attack(void);
};

#endif