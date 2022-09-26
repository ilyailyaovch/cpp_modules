/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:16:51 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 13:19:36 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHONGANIMAL_HPP
# define WHONGANIMAL_HPP

#include <iostream>
#include <string>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define WHITE       "\033[37m"
#define BOLDWHITE   "\033[1m\033[37m"

class   WrongAnimal{
    private:
        //  no private attributes //
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string  type);
        WrongAnimal(WrongAnimal const &copy);
        ~WrongAnimal();
        WrongAnimal&    operator = (WrongAnimal const & rhs);

        void            makeSound(void) const;
        std::string     getType(void)   const;
};

#endif