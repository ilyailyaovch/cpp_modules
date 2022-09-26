/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:35:56 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/01 21:40:42 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include<string>

template<typename T>
void    swap(T & rhs, T & lhs)
{
    T   tmp;

    tmp = rhs;
    rhs = lhs;
    lhs = tmp;
}

template <typename T>
T   max(const T& lhs, const T& rhs)
{
    return lhs > rhs ? lhs : rhs;
}

template <typename T>
T   min(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}

#endif