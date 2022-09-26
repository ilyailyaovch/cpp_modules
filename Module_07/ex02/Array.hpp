/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 08:57:47 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/02 13:49:30 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <string>
#include <exception>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define WHITE       "\033[37m"
#define BOLDWHITE   "\033[1m\033[37m"

class OutofRangeException : public std::exception{
	public:
		const char* what(void) const throw(){
			return ("Error!!! Out of Range!");
		}
};

template <typename T>
class Array{
	private:
		T				*element;
		unsigned int	len;
	public:
        //  Canonical //
		Array(void);
		Array(unsigned int len);
        Array(const Array<T>& copy);
		~Array(void);
		Array&			    operator = (Array<T>& rhs);
		T&				    operator[](unsigned int i);
        const T&		    operator[](unsigned int i) const;
		unsigned int	    size(void) const;
        //  Exception //
        OutofRangeException OutofRangeException;
};

#include "Array.tpp"

#endif