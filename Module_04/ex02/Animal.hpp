/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:33:17 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 16:21:34 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define WHITE       "\033[37m"
#define BOLDWHITE   "\033[1m\033[37m"

#include "Brain.hpp"

/*
Можно создать абстрактный класс, объявив по крайней мере одну чистую виртуальную функцию-член
Это виртуальная функция, объявленная с помощью синтаксиса чистого описателя (= 0).
Классы, производные от абстрактного класса, должны реализовывать чисто виртуальную функцию;
в противном случае они также будут абстрактными.
*/

class   Animal{
    private:
        //  no private attributes //
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string  type);
        Animal(Animal const &copy);
        virtual ~Animal();
        Animal&         operator = (Animal const & rhs);

        virtual void    makeSound(void) const = 0;
        std::string     getType(void)   const;
};

#endif