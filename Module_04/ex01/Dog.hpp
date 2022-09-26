/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:30:39 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 15:24:39 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain*  brain;
    public:
        Dog(void);
        Dog(Dog const & copy);
        ~Dog(void);
        Dog&        operator = (Dog const & rhs);

        void        makeSound(void) const;// override
        Brain*      getBrain(void) const;
};

#endif