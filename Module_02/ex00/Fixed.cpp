/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:40:35 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/27 19:36:39 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//  A default constructor that initializes the fixed-point number value to 0 //
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

//  A copy constructor. //
Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	this->rawBits = src.getRawBits();	//attribute case
	//*this = src;						//full case
}

//  A copy assignment operator overload. //
//  Changes Fixed on (const Fixed &src)  //
Fixed & Fixed::operator = (const Fixed &rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    this->rawBits = rhs.getRawBits();
	return *this;
}

//  A destructor. //
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->rawBits;
}
