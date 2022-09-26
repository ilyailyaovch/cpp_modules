/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:25:02 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 14:41:51 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

HARL::HARL(void){}

HARL::~HARL(void){}

void HARL::debug(void){
    std::cout << "\033[1;35m[ DEBUG ]\033[0m" << std::endl;
    std::cout << "I love having extra bacon for my "
    "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void HARL::info(void){
    std::cout << "\033[1;36m[ INFO ]\033[0m" << std::endl;
    std::cout <<"I cannot believe adding extra bacon costs more money."
    "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void HARL::warning(void){
    std::cout << "\033[1;33m[ WARNING ]\033[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming "
    "for years whereas you started working here since last month." << std::endl;
}

void HARL::error(void){
    std::cout << "\033[1;31m[ ERROR ]\033[0m" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void HARL::complain(std::string level){

    std::string levels[] = {"DEBUG",
                            "INFO",
                            "WARNING",
                            "ERROR"};

    void (HARL::*function[]) (void) = {&HARL::debug,
		                            &HARL::info,
		                            &HARL::warning,
		                            &HARL::error};

    int numberOfLevels = sizeof(levels) / sizeof(levels[0]);
    for (int i = 0; i < numberOfLevels; i++){
        if (levels[i] == level)
            (this->*function[i])();
    }
}