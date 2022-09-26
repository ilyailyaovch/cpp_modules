/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:50:14 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/01 17:16:30 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

//  Canonical //

Convertor::Convertor(void): toConvert(""){
    std::cout << BLUE << "Convertor " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Convertor::Convertor(Convertor const & copy): 
    toConvert(copy.toConvert),
    value(copy.value){
    std::cout << BLUE << "Convertor " << RESET;
    std::cout << " copy constructor called" << std::endl;
}

Convertor::Convertor(const char * toConvert):
    toConvert(toConvert){
    if (strlen(toConvert) == 1 && !isdigit(toConvert[0]))
		this->value = static_cast<double>(toConvert[0]);
    else
        this->value = std::atof(toConvert);
}

Convertor::~Convertor(void){
    std::cout << BLUE << "Convertor " << RESET;
    std::cout << "Default destructor called" << std::endl;
}

Convertor&	Convertor::operator = (Convertor const & rhs){
	toConvert = rhs.toConvert;
	value = rhs.value;
    std::cout << BLUE << "Convertor " << RESET;
    std::cout << " assignment called" << std::endl;
	return *this;
}

//  Metods //

bool    Convertor::checkValue(void){
    bool onlyRightSymb = true;

    for (int i = 0; toConvert[i]; i++)
        if (!isdigit(toConvert[i]) &&
            toConvert[i] != '.' &&
            toConvert[i] != '-' &&
            toConvert[i] != 'f')
            onlyRightSymb = false;

    if (!isinf(value) && !isnan(value) && strlen(toConvert) != 1 && !onlyRightSymb)
        return false;
    return true;
}

float   Convertor::toFloat(void){
    if (checkValue() == false)
		throw ImpossibleException;
	return static_cast<float>(value);
}

double  Convertor::toDouble(void){
	if (checkValue() == false)
		throw ImpossibleException;
	return static_cast<double>(value);
}

int     Convertor::toInt(void){
    if (static_cast<long int>(value) > INT32_MAX ||
        static_cast<long int>(value) < INT32_MIN)
        throw ImpossibleException;
    if (isnan(value))
		throw ImpossibleException;
    if (checkValue() == false)
        throw ImpossibleException;
    return static_cast<int>(value);
}

char    Convertor::toChar(void){
    if (static_cast<long int>(value) > CHAR_MAX ||
        static_cast<long int>(value) < CHAR_MIN)
        throw ImpossibleException;
    if (isnan(value))
		throw ImpossibleException;
    if (checkValue() == false)
        throw ImpossibleException;
    if (!isprint(static_cast<unsigned char>(value)))
		throw NonDisplayableException;
    return static_cast<char>(value);
}

void	Convertor::convert(void){
    try{
        char   tmp = toChar();
		std::cout << "char : '" << tmp << "'" << std::endl;
	}catch (std::exception & e){
		std::cout  << "char : " << e.what() << std::endl;
	} 
    try{
        int   tmp = toInt();
		std::cout << "int : " << tmp << std::endl;
	}catch (std::exception & e){
		std::cout  << "int : " << e.what() << std::endl;
	}
    try{
        float   tmp = toFloat();
		std::cout.precision(1);
		std::cout << "float : " << std::fixed << tmp << "f" << std::endl;
	}catch (std::exception & e){
		std::cout  << "float : " << e.what() << std::endl;
	}
    try{
        float   tmp = toDouble();
		std::cout.precision(1);
		std::cout << "double : " << std::fixed << tmp << std::endl;
	}catch (std::exception & e){
		std::cout  << "double : " << e.what() << std::endl;
	}
}