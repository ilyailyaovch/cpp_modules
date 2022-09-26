/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 08:53:11 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/03 11:31:11 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_HPP
# define easyfind_HPP

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <array>

class NotFoundException : public std::exception{
    public:
        NotFoundException(void){return ;};
        ~NotFoundException(void) throw() {return ;};
        const char *what(void) const throw(){
            return("Occurence not found");
        };
};

/*
Takes ref to container and returns ref to first
occurace
Thus we can change that value
*/
template <typename T>
int&    easyfind(T& container, int searchValue){
    typename T::iterator    begin   =   container.begin();
    typename T::iterator    end     =   container.end();
    typename T::iterator    place;

    place = std::find(begin, end, searchValue);
    if (place != end){
        return *place;
        //If we need index (ain't work with lists)
        //return place - begin;
    }else
        throw NotFoundException();
}

#endif