/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:04:59 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 14:08:41 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string			name;
    public:
        DiamondTrap(void);
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap(void);
		DiamondTrap			&operator=(const DiamondTrap &other);

        using				FragTrap::getHitPoints;
		using				ScavTrap::getEnergyPoints;
		using				FragTrap::getAttackDamage;
		using				ScavTrap::attack;

        void				whoAmI(void);
        std::string	        &getNameDiamond(void);
        void	            setNameDiamond(const std::string &name);
        
};

#endif