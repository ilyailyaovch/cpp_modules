/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:49:20 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/01 16:29:40 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Convertor_HPP
# define Convertor_HPP

#include <iostream>
#include <string>
#include <limits>
#include <math.h>
#include "Exeptions.hpp"

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define WHITE       "\033[37m"
#define BOLDWHITE   "\033[1m\033[37m"

class Convertor{
    private:
		const char*				    toConvert;
		long double					value;
    protected:
        //  No protected attributes //
    public:
        //  Canonical //
        Convertor(void);
		Convertor(Convertor const & copy);
		Convertor(const char * toConvert);
		virtual ~Convertor(void);
        Convertor&	operator = (Convertor const & rhs);
        //  Metods //
        bool            checkValue(void);
        bool            is_only_digit(std::string const &str);
        int				toInt(void);
		char			toChar(void);
		float			toFloat(void);
		double			toDouble(void);
		void			convert(void);
        
        //  Exeptions //
        NonDisplayableException NonDisplayableException;
        ImpossibleException     ImpossibleException;
};

#endif