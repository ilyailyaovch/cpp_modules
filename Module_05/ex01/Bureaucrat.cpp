/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:42:14 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/30 21:57:59 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//  Canonical //

Bureaucrat::Bureaucrat(void) : name(""), grade(MIN_GRADE){
    std::cout << BLUE << "Bureaucrat " << RESET;
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):
    name(name), grade(grade){
    std::cout << BLUE << "Bureaucrat " << RESET;
    std::cout << this->name << " Constructor called" << std::endl;
    checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):
    name(copy.getName()), grade(copy.getGrade()){
    //*this = copy;
    std::cout << BLUE << "Bureaucrat " << RESET;
    std::cout << this->name << " copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){
    std::cout << BLUE << "Bureaucrat " << RESET;
    std::cout << this->name << " destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &rhs){
	this->grade = rhs.getGrade();
    //this->name = rhs.getName();
    std::cout << BLUE << "Bureaucrat " << RESET;
    std::cout << this->name << " assignment called" << std::endl;
	return (*this);
}

//  Getters //

std::string     Bureaucrat::getName(void) const{
    return this->name;
}

int             Bureaucrat::getGrade(void) const{
	return this->grade;
}

//  Setters //

void            Bureaucrat::upGrade(int incrementVal){
    this->grade -= incrementVal;
    checkGrade();
}

void            Bureaucrat::downGrade(int decrementVal){
    this->grade += decrementVal;
    checkGrade();
}

bool            Bureaucrat::signForm(Form &form) const{
    if (form.beSigned(*this)){
        std::cout << GREEN << "YES " << RESET;
        std::cout << this->name << " signed ";
        std::cout << form.getName() << std::endl;
		return true;
    } else{
        std::cout << RED << "NO " << RESET;
        std::cout << this->name << " couldn’t sign " << form.getName();
        std::cout << " because his grade is too low." << std::endl;
        return false;
    }
}

//  Exeptions //

void            Bureaucrat::checkGrade(void) const{
	if (this->grade < MAX_GRADE)
		throw Bureaucrat::tooHightExeption;
	if (this->grade > MIN_GRADE)
		throw Bureaucrat::tooLowExeption;
    return ;
}

//  Operetor //

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs){
	out << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return out;
}