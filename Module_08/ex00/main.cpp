/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 08:51:50 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/03 11:29:41 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void){

    std::array<int, 5>  arr = {7, 0, 3, 4, 5};
   
    std::list<int>      lst;
    lst.push_back( 10 );
    lst.push_back( 20 );
    lst.push_back( 30 );
    lst.push_back( 10 );
    
    std::vector<int> vec;
    vec.push_back(7);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(9);
	vec.push_back(5);
    
    std::cout << "-arr--------------------" << std::endl;
    try{
        std::cout << easyfind(arr, 4) << std::endl;
        // int &a = easyfind(arr, 4);
        // a = 777;
        // for (int i = 0;i < 5; i++){
        //      std::cout << arr[i] << std::endl;
        // }
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    std::cout << "-lst--------------------" << std::endl;
    try{
        std::cout << easyfind(lst, 10) << std::endl;
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    std::cout << "-vec--------------------" << std::endl;
    try{
        std::cout << easyfind(vec, 7) << std::endl;
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    return EXIT_SUCCESS;
}