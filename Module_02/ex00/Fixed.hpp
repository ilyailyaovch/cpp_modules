/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:40:33 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/27 18:01:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed{
    private:
        static const int    numberFractionalBits = 8;
        int                 rawBits;
    public:
        Fixed(void);                                //Canonical
	    Fixed(const Fixed &src);                    //Canonical
        Fixed&      operator = (const Fixed &rhs);  //Canonical
	    ~Fixed(void);                               //Canonical
        int         getRawBits( void ) const;
        void        setRawBits( int const raw );
};

#endif