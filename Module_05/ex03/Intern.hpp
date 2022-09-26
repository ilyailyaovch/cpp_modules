/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:57:58 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 15:53:32 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <string>

class Intern{
    private:
		Form*			    	newPresidentialPardonForm(std::string target);
		Form*				    newRobotomyRequestForm(std::string target);
		Form*				    newShrubberyCreationForm(std::string target);
    public:
		//  Canonical //
	    Intern(void);
	    Intern(const Intern &copy);
	    ~Intern(void);
	    Intern &operator = (const Intern &rhs);
		//  Setters //
	    Form *makeForm(const std::string &formName, const std::string &target);
        // Exeptions //
        FormNotExist    FormNotExist;
};

std::ostream &operator<<(std::ostream &os, Intern const &p);

#endif