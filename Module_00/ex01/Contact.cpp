/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:07:26 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/16 00:38:56 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact () {}

Contact::~Contact () {}

void    Contact::selfInit(void){

    std::cout << "Please fill the following information: " << std::endl;
    
	std::cout  << "First Name : " ;
	std::cin >> this->firstName;
    
	std::cout << "Last Name : " ;
	std::cin >> this->lastName;

	std::cout << "NickName : " ;
	std::cin >> this->nickName;
    
	std::cout << "Phone Number : " ;
	std::cin >> this->phoneNumber;

	std::cout << "Dark Secret : " ;
	std::cin >> this->darkSecret;

    std::cout << std::endl;
}

void    Contact::displayContact(void){

    std::cout << "Information about chosen contact: " << std::endl;

    std::cout << "First Name : ";
    std::cout << this->firstName << std::endl;

    std::cout << "Last Name : ";
    std::cout << this->lastName << std::endl;

    std::cout << "NickName : ";
    std::cout << this->nickName << std::endl;

    std::cout << "Phone Number : ";
    std::cout << this->phoneNumber << std::endl;

    std::cout << "Dark Secret : ";
    std::cout << this->darkSecret << std::endl;

    std::cout << std::endl;
}

void    Contact::displayTable(void){
    
    if (firstName.length() > 10){
        std::cout << "|" << firstName.substr(0, 9) << ".";
    } else{
        std::cout << "|" << std::setw(10) << firstName;
    }
	if (lastName.length() > 10){
        std::cout << "|" << lastName.substr(0, 9) << ".";
    } else{
        std::cout << "|" << std::setw(10) << lastName;
    }
	if (nickName.length() > 10){
        std::cout << "|" << nickName.substr(0, 9) << ".";
    } else{
        std::cout << "|" << std::setw(10) << nickName;
    }
	std::cout << "|" << std::endl;
}