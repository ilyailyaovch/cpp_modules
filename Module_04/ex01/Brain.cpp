/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:39:36 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 15:06:45 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
    std::cout << BOLDWHITE << "Brain " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Brain::Brain(Brain const & copy){
    std::cout << BOLDWHITE << "Brain " << RESET;
    std::cout << " copy constructor called" << std::endl;
}

Brain::~Brain(void){
    std::cout << BOLDWHITE << "Brain " << RESET;
    std::cout << " destructor called" << std::endl;
}

Brain&  Brain::operator = (Brain const & rhs){
    std::copy(rhs.ideas, rhs.ideas + 100, ideas);
    return *this;
}

std::string*    Brain::getIdeas(void){
    return ideas;
}