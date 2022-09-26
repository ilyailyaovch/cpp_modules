/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:40:33 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/27 18:56:53 by pleoma           ###   ########.fr       */
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
        Fixed(void);
        Fixed(const int number);
        Fixed(const float fnumber);
	    Fixed(const Fixed &src);
        Fixed&      operator = (const Fixed &rhs);
        ~Fixed(void);

        // Comparison //
        bool	    operator < (Fixed const & rhs) const;
	    bool	    operator <= (Fixed const & rhs) const;
	    bool	    operator > (Fixed const & rhs) const;
	    bool	    operator >= (Fixed const & rhs) const;
	    bool	    operator == (Fixed const & rhs) const;
    	bool	    operator != (Fixed const & rhs) const;
        
        // Arithmetic //
        Fixed operator + ( const Fixed &rhs ) const;
		Fixed operator - ( const Fixed &rhs ) const;
		Fixed operator * ( const Fixed &rhs ) const;
		Fixed operator / ( const Fixed &rhs ) const;

        //  Increment & Decrement //
        Fixed&  operator ++ (void); //pre-increment
	    Fixed 	operator ++ (int);  //post-increment
    	Fixed&  operator -- (void); //pre-decrement
    	Fixed	operator -- (int);  //post-decrement
        
        //  Min & Max //
		static Fixed &	    min(Fixed & a, Fixed & b);
	    static Fixed &	    max(Fixed & a, Fixed & b);
	    static Fixed const & min(Fixed const & a, Fixed const & b);
	    static Fixed const & max(Fixed const & a, Fixed const & b);

        int         toInt(void) const;
        float       toFloat(void) const;
        int         getRawBits( void ) const;
        void        setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, const Fixed &rightHandSymb);

#endif