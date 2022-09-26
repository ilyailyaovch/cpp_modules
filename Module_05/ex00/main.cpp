/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:42:20 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/30 15:30:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try{
        std::cout << "Grade : 1" << std::endl;
        Bureaucrat Robert("Robert", 1);
        std::cout << Robert << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try{
        std::cout << "Grade : 155" << std::endl;
        Bureaucrat Robert("Robert", 155);
        std::cout << Robert << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;

    // std::cout << "Grade : 140 + 20" << std::endl;
    // Bureaucrat Emma("Emma", 140);
    // std::cout << Emma << std::endl;
    // Emma.downGrade(20);
    // std::cout << Emma << std::endl;

    std::cout << "------------------------------------" << std::endl;
    try{
        std::cout << "Grade : 50" << std::endl;
        Bureaucrat Robert("Robert", 50);
        std::cout << Robert << std::endl;
        Bureaucrat fakeBob(Robert);
        std::cout << fakeBob << std::endl;
        Robert.downGrade(11);
        Bureaucrat Victor("Victor", 20);
        std::cout << Victor << std::endl;
        Victor = Robert;
        std::cout << Victor << std::endl;
        //Robert.downGrade(101);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
	std::cout << "------------------------------------" << std::endl;
	try{
		std::cout << "Garde : -5" << std::endl; 
		Bureaucrat robert("Robert", -5);
		std::cout << robert << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
    std::cout << "------------------------------------" << std::endl;
	return (EXIT_SUCCESS);
}