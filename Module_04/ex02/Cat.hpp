/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:30:40 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 15:25:53 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain*  brain;
    public:
        Cat(void);
        Cat(Cat const & copy);
        ~Cat(void);
        Cat&        operator = (Cat const & rhs);

        void        makeSound(void) const;// override
        Brain*      getBrain(void) const;
};

#endif