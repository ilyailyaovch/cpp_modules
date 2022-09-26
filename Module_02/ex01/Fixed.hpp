/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:40:33 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/27 18:00:13 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <tgmath.h>

class Fixed{
    private:
        static const int    numberFractionalBits = 8;
        int                 rawBits;
    public:
        Fixed(void);                                //Canonical
        Fixed(const int number);
        Fixed(const float fnumber);
	    Fixed(const Fixed &src);                    //Canonical
        Fixed&      operator = (const Fixed &rhs);  //Canonical
	    ~Fixed(void);                               //Canonical
        int         toInt(void) const;
        float       toFloat(void) const;
        int         getRawBits( void ) const;
        void        setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, const Fixed &rightHandSymb);

#endif