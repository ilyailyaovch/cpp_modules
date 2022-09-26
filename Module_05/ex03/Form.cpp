/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:44:08 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 13:16:55 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//  Canonical //

Form::Form(void):
    name(""),
    gradeForSign(150),
    gradeForExec(150),
    isSigned(false){;
    std::cout << YELLOW << "Form " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(const std::string name, int gradeForSign, int gradeForExec):
    name(name),
    gradeForSign(gradeForSign),
    gradeForExec(gradeForExec),
    isSigned(false){
    std::cout << YELLOW << "Form " << RESET;
    std::cout << this->name << " Constructor called" << std::endl;
    checkFormGrade();
}

Form::Form(const Form &copy){
    *this = copy;
    std::cout << YELLOW << "Form " << RESET;
    std::cout << this->name << " copy constructor called" << std::endl;

}

Form &Form::operator = (const Form &rhs)
{
	this->gradeForSign = rhs.gradeForSign;
	this->gradeForExec = rhs.gradeForExec;
	this->isSigned = rhs.isSigned;
    //this->name = rhs.getName();
    std::cout << YELLOW << "Form " << RESET;
    std::cout << this->name << " assignment called" << std::endl;
	return (*this);
}

Form::~Form(){
    std::cout << YELLOW << "Form " << RESET;
    std::cout << this->name << " destructor called" << std::endl;
}

//  Getters //

std::string Form::getName(void) const{
	return (this->name);
}

int Form::getGradeToSign(void) const{
	return (this->gradeForSign);
}

int Form::getGradeToExec(void) const{
	return (this->gradeForExec);
}

bool Form::getSignature(void) const{
	return (isSigned);
}

//  Setters //

bool Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= this->gradeForSign){
		this->isSigned = true;
		return true;
	}else{
		throw Form::GradeTooLowException;
		return false;
	}
}

bool Form::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->gradeForExec){
		throw Form::GradeTooLowException;
	}else if (!this->isSigned){
		throw Form::FormNotSignedException;
	}else{
		std::cout << BLUE << executor.getName() << RESET;
        std::cout << " Executed " << this->name << std::endl;
		FormFunction();
		return true;
	}
	return false;
}

// Exeptions //

void    Form::checkFormGrade(void) const{
    if (this->gradeForExec < MAX_GRADE || this->gradeForSign < MAX_GRADE)
		throw Form::GradeTooHighException;
	if (this->gradeForExec > MIN_GRADE || this->gradeForSign > MIN_GRADE)
		throw Form::GradeTooLowException;
}

//  Operetor //

std::ostream &operator << (std::ostream &out, const Form &rhs){
	out << YELLOW << "Form " << RESET;
    out << rhs.getName();
    out << ", Form sign grade " << rhs.getGradeToSign();
    out << ", Form exec grade " << rhs.getGradeToExec();
    out << ", Form is signed: " << (rhs.getSignature() ? "YES" : "NO");
	return out;
}