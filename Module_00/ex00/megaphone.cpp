/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:36:30 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/14 20:16:22 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string     defaultString = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    if (argc == 1) {
        std::cout << defaultString;
    } else {
        for (int i = 1; i < argc; i++) {
            for (int j = 0; argv[i][j]; j++) {
                std::cout << (char)toupper(argv[i][j]);
            }
        }
    }
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}