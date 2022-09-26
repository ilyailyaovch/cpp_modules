/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:53:41 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/01 18:59:04 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

//  Downcast //
//  Parent -> Child //
//  Upcast //
//  Child -> Parent //

Base*   generate(void){
    
    srand (time(NULL));
    int     randomCase = rand() % 3;

    switch(randomCase){
        case 0:
            std::cout << "Instance of class A generated" << std::endl;
            return new A;
        case 1:
            std::cout << "Instance of class B generated" << std::endl;
            return new B;
        case 2:
            std::cout << "Instance of class C generated" << std::endl;
            return new C;
    }
    return NULL;
}

void    identify(Base* p){          //By pointer
    A* a = dynamic_cast<A*>(p);     //trying to cast in A
    if (a)                          //if downast explicit succeed
        std::cout << "A: conversion by ptr"  << std::endl;
    B* b = dynamic_cast<B*>(p);     //trying to cast in B
    if (b)                          //if downast  explicit succeed
        std::cout << "B: conversion by ptr"  << std::endl;
    C* c = dynamic_cast<C*>(p);     //trying to cast in C
    if (c)                          //if downast explicit succeed
        std::cout << "C: conversion by ptr"  << std::endl;
}

void    identify(Base& p){          //By reference
    try{
        A& a = dynamic_cast<A &>(p);//Can not be NULL
        std::cout << "A: conversion by ref" << std::endl;
    }catch(std::bad_cast & e){}
    try{
        B& b = dynamic_cast<B &>(p);//Can not be NULL
        std::cout << "B: conversion by ref" << std::endl;
    }catch(std::bad_cast & e){}
    try{
        C& c = dynamic_cast<C &>(p);//Can not be NULL
        std::cout << "C: conversion by ref" << std::endl;
    }catch(std::bad_cast & e){}
}

int main(void)
{
    Base    *base = generate();
    
    identify(base);

    std::cout << "------------------------------------" << std::endl;
    
    identify(*base);
    
    delete base;
    return 0;
}