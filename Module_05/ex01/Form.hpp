/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:44:06 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/30 22:36:17 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Exeptions.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

class Form{
    private:
        const std::string   name;
        bool                isSigned;
        int                 gradeForSign;
	    int                 gradeForExec;
    protected:
        //  No protected attributes //
    public:
        //  Canonical //
        Form (void);
	    Form(const std::string name, int gradeForSign, int gradeForExec);
	    Form(const Form &copy);
	    ~Form(void);
        Form&   operator = (const Form &rhs);
        //  Getters //
        std::string     getName(void)           const;
	    int             getGradeToSign(void)    const;
	    int             getGradeToExec(void)    const;
	    bool            getSignature(void)      const;
        //  Setters //
        bool            beSigned(const Bureaucrat &bur);
        // Exeptions //
        void            checkFormGrade(void)    const;
        GradeTooHighException   GradeTooHighException;
        GradeTooLowException    GradeTooLowException;
};

std::ostream &operator << (std::ostream &out, const Form &rhs);

#endif