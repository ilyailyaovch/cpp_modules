/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:26:11 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/28 09:33:55 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define WHITE       "\033[37m"
#define BOLDWHITE   "\033[1m\033[37m"

class ClapTrap{
    private:
        std::string     name;
        unsigned int    hitPoints;
        unsigned int    energyPoints;
        unsigned int    attackDamage;
    public:
        //  Canonical //
        ClapTrap(void);
	    ClapTrap(std::string    name);
    	ClapTrap(const ClapTrap &copy);
        ~ClapTrap(void);
        ClapTrap&   operator = (ClapTrap const &rightHandSign);
        //  Actions //
        void                attack(const std::string& target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
        //  Access  //
        void				setName(const std::string &name);
		void				setHitPoints(unsigned int	hitPoints);
		void				setEnergyPoints(unsigned int energyPoints);
		void				setAttackDamage(unsigned int attackDamage);
		std::string	        getName(void)           const;
		unsigned int		getHitPoints(void)      const;
		unsigned int		getEnergyPoints(void)   const;
		unsigned int		getAttackDamage(void)   const;
        void                getAllInfo(void)        const;   

};

#endif
