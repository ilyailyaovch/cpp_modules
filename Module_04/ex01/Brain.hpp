/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:39:34 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 15:05:58 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

#include <iostream>
#include <string>
#include <algorithm>

#define BOLDWHITE   "\033[1m\033[37m"
#define RESET       "\033[0m"

class Brain{
    private:
        std::string     ideas[100];
    public:
        Brain(void);
        Brain(Brain const & copy);
        ~Brain(void);
        Brain&          operator = (Brain const & rhs);

        std::string*    getIdeas(void);
};

#endif