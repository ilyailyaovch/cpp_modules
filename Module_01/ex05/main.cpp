/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:19:22 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 14:33:07 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    HARL Harl;

    Harl.complain("INFO");
    Harl.complain("DEBUG");
    Harl.complain("WARNING");
    Harl.complain("ERROR");
    return (EXIT_SUCCESS);
}