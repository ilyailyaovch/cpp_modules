/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exeptions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:54:34 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 15:25:52 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Exeptions_HPP
# define Exeptions_HPP

#include <stdexcept>

class GradeTooHighException : public std::exception{
	const char* what () const throw (){
		return ("The grade is too Hight");
	}
};

class GradeTooLowException : public std::exception{
	const char* what () const throw (){
		return ("The grade is too Low");
	}
};

class FormNotSignedException : public std::exception{
	const char *what() const throw(){
		return ("The Bureaucrat can't execute the form because the Form is not signed");
	}
};

class FormNotExist : public std::exception{
	const char *what() const throw(){
		return ("The Intern is so useful, he literally create a black hole");
	}
};

#endif