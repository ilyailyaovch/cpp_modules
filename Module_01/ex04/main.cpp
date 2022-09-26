/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:10:02 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 10:02:10 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv){
    if (argc != 4){
        std::cout << "Wrong number of arguments" << std::endl;
    } else {
        Sed sed(argv[1], argv[2], argv[3]);
        sed.searchAndReplace();
    }
    return (EXIT_SUCCESS);
}