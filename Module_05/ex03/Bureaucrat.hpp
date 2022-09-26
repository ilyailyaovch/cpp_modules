/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:42:11 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 11:30:17 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include "Exeptions.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define WHITE       "\033[37m"
#define BOLDWHITE   "\033[1m\033[37m"

#define MAX_GRADE   1
#define MIN_GRADE   150

class Form;

class Bureaucrat{
    private:
        const std::string   name;
        int                 grade;
    protected:
        //  No protected attributes //
    public:
        //  Canonical //
        Bureaucrat(void);
        Bureaucrat(const std::string name, int grade);
	    Bureaucrat(const Bureaucrat &copy);
	    virtual ~Bureaucrat();
        Bureaucrat&     operator = (const Bureaucrat &rhs);
        //  Getters //
        std::string     getName(void)   const;
        int             getGrade(void)  const;
        //  Setters //
        void            upGrade(int incrementVal);
        void            downGrade(int decrementVal);
        bool            signForm(Form &form) const;
        void            executeForm(Form const &form);
        // Exeptions //
        void            checkGrade(void) const;
        GradeTooHighException   tooHightExeption;
        GradeTooLowException    tooLowExeption;
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs);

#endif
