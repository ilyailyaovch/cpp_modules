/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:14:39 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 13:32:50 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(const std::string  &name);
		ScavTrap(const ScavTrap     &copy);
		~ScavTrap(void);
		ScavTrap&   operator = (const ScavTrap &other);
        
		void		attack(const std::string &target);
		void		guardGate(void);
};

#endif