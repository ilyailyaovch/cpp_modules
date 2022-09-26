/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:28:56 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 13:36:04 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl; //Dog
    std::cout << i->getType() << " " << std::endl; //Cat
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << "CLEAR" << std::endl; 
    delete meta;
    delete i;
    delete j;

    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;

    std::cout << "WRONG" << std::endl; 
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();
    std::cout << i2->getType() << " " << std::endl; //Cat
    i2->makeSound(); //will output the cat sound!
    meta2->makeSound();
    
    std::cout << "CLEAR" << std::endl; 
    delete meta2;
    delete i2;

    return 0;
}