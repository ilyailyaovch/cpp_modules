/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:46:01 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 16:21:58 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static int	level(char *argv){
	std::string	str = argv;

	if (str.compare("DEBUG") == 0)
		return (DEBUG);
	else if (str.compare("INFO") == 0)
		return (INFO);
	else if (str.compare("WARNING") == 0)
		return (WARNING);
	else if (str.compare("ERROR") == 0)
		return (ERROR);
	return (4);
}

int main(int argc, char **argv){
    HARL    Harl;

    if (argc != 2)
        return (EXIT_FAILURE);
    switch (level(argv[1])){
        case DEBUG:{
            Harl.complain("DEBUG");
        }
        case INFO:{
            Harl.complain("INFO");
        }
        case WARNING:{
            Harl.complain("WARNING");  
        }
        case ERROR:{
            Harl.complain("ERROR");
            break;
        }
        default:{
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
    }
    return (EXIT_SUCCESS);
}