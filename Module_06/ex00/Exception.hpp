/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exeptions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:57:10 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/01 16:04:08 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Exceptions_HPP
# define Exceptions_HPP

#include <stdexcept>

class NonDisplayableException : public std::exception{
	const char* what () const throw (){
		return ("Non displayable");
	}
};

class ImpossibleException : public std::exception{
	const char* what () const throw (){
		return ("impossible");
	}
};

#endif