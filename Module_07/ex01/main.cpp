/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:50:02 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/02 08:53:01 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
//#include <array>

int main(void){

    //std::array  <std::string, 2>  a1 = {"Hello", "LOL"};
    // std::array  <int, 3>         a2 = {1, 2, 3};
    
    std::string a3[2] = {"Hello", "LOL"};
    int a4[] = {1,2,3,4};

    ::iter(a3, 2, &myPrintFunc);
    ::iter(a4, 4, &mySquareFunc);
    ::iter(a4, 4, &myPrintFunc);

    return EXIT_SUCCESS;
}