/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:48:36 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/02 08:56:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void        myPrintFunc(T & src){
    std::cout << src << std::endl;
}

template <typename T>
void        mySquareFunc(T & src){
    src *=src;
}

template <typename T>
void        iter(T address[], int const len, void (*func)(T &src)){
    for (unsigned int i = 0 ; i < len; i++){
        func(address[i]);
    }
}

#endif