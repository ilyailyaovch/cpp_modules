/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:15:13 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 16:02:40 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main(void)
{
    Bureaucrat  lol("lol", 150);
    Bureaucrat  boss("boss", 1);
    Intern      coffeMaker;

    Form    *house;
    Form    *r2d2;
    Form    *mesrine;

    house = coffeMaker.makeForm("shrubbery creation", "house");
    //lol.executeForm(*house);
    r2d2 = coffeMaker.makeForm("robotomy request", "r2d2");
    boss.signForm(*r2d2);
    boss.executeForm(*r2d2);
    mesrine = coffeMaker.makeForm("presidential pardon", "mesrine");
    
    delete house;
    delete r2d2;
    delete mesrine;
    std::cout << "------------------------------------" << std::endl;
    {
        std::cout << "---------Intern create a Form" << std::endl; 
        Form *test;
        try
        {   
            Intern titouan;
            test = titouan.makeForm("presidential pardon", "kitchen");
            boss.signForm(*test);
            boss.executeForm(*test);
            // lol.signForm(*test);
            // lol.executeForm(*test);
            delete test;
        }
        catch (std::exception &e)
        {
            delete test;
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "------------------------------------" << std::endl;
    {
        std::cout << "----------Intern failed Form" << std::endl;
        Form *test = NULL;
        try
        {
            Intern titouan;
            test = titouan.makeForm("shrubsdfgerry creation", "kitchen");
            Bureaucrat hubert("hubert", 50);
            hubert.signForm(*test);
            hubert.executeForm(*test);
            delete test;
        }
        catch (std::exception &e)
        {
            delete test;
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "------------------------------------" << std::endl;
    return (0);
}