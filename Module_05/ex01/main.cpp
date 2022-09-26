// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/07/30 12:42:20 by pleoma            #+#    #+#             */
// /*   Updated: 2022/07/30 20:44:49 by pleoma           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void){  
    try{
        std::cout << "--------Bureaucrat : 50, Form : 4" << std::endl;
        Form f("test", 4, 75);
        Bureaucrat b("roger", 50);
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
	std::cout << "------------------------------------" << std::endl;
    try{
        std::cout << "--------Bureaucrat : 1, Form : 1" << std::endl;
        Form f("test", 1, 75);
        Bureaucrat b("roger", 1);
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
	std::cout << "------------------------------------" << std::endl;
    try{
        std::cout << "--------Bureaucrat : 150, Form : 150" << std::endl;
        Form f("test", 150, 75);
        Bureaucrat b("roger", 150);
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try{
        std::cout << "--------Bureaucrat : 70, Form : 50" << std::endl;
        Form f("test", 50, 75);
        Bureaucrat b("roger", 70);
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try{
        std::cout << "--------Bureaucrat : 1, Form : 150" << std::endl;
        Form f("test", 150, 75);
        Bureaucrat b("roger", 1);
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return (EXIT_SUCCESS);
}