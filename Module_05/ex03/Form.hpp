/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:44:06 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 15:14:48 by pleoma           ###   ########.fr       */
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

//  Abstract class //
class Form{
    private:
        //  No pivate // 
    protected:
        const std::string   name;
        bool                isSigned;
        int                 gradeForSign;
	    int                 gradeForExec;
        std::string         target;
    public:
        //  Canonical //
        Form (void);
	    Form(const std::string name, int gradeForSign, int gradeForExec);
	    Form(const Form &copy);
	    virtual ~Form(void);
        Form&   operator = (const Form &rhs);
        //  Getters //
        std::string     getName(void)           const;
	    int             getGradeToSign(void)    const;
	    int             getGradeToExec(void)    const;
	    bool            getSignature(void)      const;
        //  Setters //
        bool            beSigned(const Bureaucrat &bur);
        bool            execute(Bureaucrat const &executor) const;
        //  Will bo overwritten later //
        virtual void    FormFunction() const = 0;
        // Exeptions //
        void            checkFormGrade(void)    const;
        GradeTooHighException   GradeTooHighException;
        GradeTooLowException    GradeTooLowException;
        FormNotSignedException  FormNotSignedException;
};

std::ostream &operator << (std::ostream &out, const Form &rhs);

#endif