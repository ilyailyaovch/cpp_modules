/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:05:21 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 07:42:33 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
    std::string     string = "HI THIS IS BRAIN";
    std::string&    stringREF = string;
    std::string*    stringPTR = &string;

    std::cout << "The memory address of the string variable" << std::endl;
    std::cout << &string << std::endl;

    std::cout << "The memory address held by stringPTR." << std::endl;
    std::cout << stringPTR << std::endl;

    std::cout << "The memory address held by stringREF" << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "The value of the string variable" << std::endl;
    std::cout << string << std::endl;

    std::cout << "The value pointed to by stringPTR." << std::endl;
    std::cout << *stringPTR << std::endl;
    
    std::cout << "The value pointed to by stringREF" << std::endl;
    std::cout << stringREF << std::endl;
    return (0);
}