/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:28:56 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/29 17:16:01 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // i->makeSound();
    // delete j;//should not create a leak
    // delete i;
    // //...

    const Animal* animals[10];
    
	for (int i = 0; i < 5; i++)
		animals[i] =  new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] =  new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "DEEP COPY :" << std:: endl;
	Dog	a;
    Dog b;
    Cat c;
    Cat d;
    
    c = d;
	b = a;
    Dog q(a);
    Cat w(c);
    //Animal ani;
	std::cout << "ADDRESS OF A BRAIN :" << (a.getBrain()) << std:: endl;
	std::cout << "ADDRESS OF B BRAIN :" << (b.getBrain()) << std:: endl;
    return 0;
}