/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:00:05 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 16:08:32 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){
    std::cout << RED << "Intern" << RESET;
    std::cout << " Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &copy){
    std::cout << RED << "Intern" << RESET;
    std::cout << " Copy Constructor called" << std::endl;
    *this = copy;
}

Intern::~Intern(void){
    std::cout << RED << "Intern" << RESET;
    std::cout << " Default Destructor called" << std::endl;
}

Intern &Intern::operator = (const Intern &other){
    (void)other;
    std::cout << RED << "Intern" << RESET;
    std::cout << " no need in assignment call" << std::endl;
    return (*this);
}

Form *Intern::makeForm(const std::string &formName, const std::string &target){
    
    Form* (Intern::*functionPointers[]) (std::string target) = {
        &Intern::newRobotomyRequestForm,
		&Intern::newPresidentialPardonForm,
		&Intern::newShrubberyCreationForm,
    };

    std::string forms[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation",
    };

    for (int i = 0; i < 3; i++){
        if (forms[i] == formName){
              std::cout << "Intern creates " << formName << std::endl;
              return (this->*functionPointers[i])(target);
        }
    }
    throw Intern::FormNotExist;
}

Form*   Intern::newPresidentialPardonForm(std::string target){
    return (new PresidentialPardonForm(target));
}

Form*   Intern::newRobotomyRequestForm(std::string target){
    return (new RobotomyRequestForm(target));
}

Form*   Intern::newShrubberyCreationForm(std::string target){
    return (new ShrubberyCreationForm(target));
}

std::ostream &operator<<(std::ostream &os, Intern const &rhs)
{
    (void)rhs;
    os << RED << "It's just an Intern";
    return os;
}