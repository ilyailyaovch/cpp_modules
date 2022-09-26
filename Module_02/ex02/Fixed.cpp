/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:40:35 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/27 21:16:49 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//  A default constructor that initializes the fixed-point number value to 0 //
Fixed::Fixed(){
	//std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(int const number){
	//std::cout << "Int constructor called" << std::endl;
	rawBits = number << numberFractionalBits;
}

Fixed::Fixed(const float fnumber){
	//std::cout << "Float constructor called" << std::endl;
	//rawBits = roundf((fnumber) * (1 << numberFractionalBits));
	rawBits = (fnumber) * (1 << numberFractionalBits);
}

//  A copy constructor. //
Fixed::Fixed(const Fixed &src){
	//std::cout << "Copy constructor called" << std::endl;
	//this->rawBits = src.getRawBits();	//attribute case
	*this = src;						//full case (copy assignment)
}

//  A copy assignment operator overload. //
//  Changes Fixed on (const Fixed &src)  //
Fixed & Fixed::operator = (const Fixed &src){
    //std::cout << "Copy assignment operator called" << std::endl;
    this->rawBits = src.getRawBits();
	return *this;
}

//  A destructor. //
Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

//	Comparison operators //

bool	Fixed::operator < (Fixed const & rhs) const{
	return (this->rawBits < rhs.getRawBits());
}

bool	Fixed::operator > (Fixed const & rhs) const{
	return (this->rawBits > rhs.getRawBits());
}

bool	Fixed::operator <= (Fixed const & rhs) const{
	return (this->rawBits <= rhs.getRawBits());
}

bool	Fixed::operator >= (Fixed const & rhs) const{
	return (this->rawBits >= rhs.getRawBits());
}

bool	Fixed::operator == (Fixed const & rhs) const{
	return (this->rawBits == rhs.getRawBits());
}

bool	Fixed::operator != (Fixed const & rhs) const{
	return (this->rawBits != rhs.getRawBits());
}

// Arithmetic operators //

Fixed	Fixed::operator + ( const Fixed &rhs ) const{
	return (this->rawBits + rhs.getRawBits());
}

Fixed	Fixed::operator - ( const Fixed &rhs ) const{
	return (this->rawBits - rhs.getRawBits());
}

Fixed	Fixed::operator * ( const Fixed &rhs ) const{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator / ( const Fixed &rhs ) const{
	return (this->toFloat() / rhs.toFloat());
}

//  Increment & Decrement operators //

Fixed&  Fixed::operator ++ (void){
	this->rawBits++;
	return *this;
}

Fixed  Fixed::operator ++ (int){
	Fixed	tmp (*this);
	rawBits++;
	return tmp;
}

Fixed&  Fixed::operator -- (void){
	this->rawBits--;
	return *this;
}

Fixed  Fixed::operator -- (int){
	Fixed	tmp (*this);
	rawBits--;
	return tmp;
}

//  Min & Max operators //

Fixed &	Fixed::min(Fixed & a, Fixed & b){
	return (a < b ? a : b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b){
	return (a > b ? a : b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b){
	return (a < b ? a : b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b){
	return (a > b ? a : b);
}

int		Fixed::toInt(void) const{
	return rawBits >> numberFractionalBits;
}

float	Fixed::toFloat(void) const{
	return float(roundf(rawBits) / (1 << numberFractionalBits));
}

void	Fixed::setRawBits(int const raw){
	//std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw;
}

int	Fixed::getRawBits(void) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->rawBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &rightHandSymb){
	out << rightHandSymb.toFloat();
	return out;
}