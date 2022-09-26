/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:46:52 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/01 10:58:19 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 2){
        Convertor	myConvertor(argv[1]);
        myConvertor.convert();
    }else{
        std::cout << RED << "Enter one argument";
        std::cout << RESET << std::endl;
    }
    return EXIT_SUCCESS;
}
