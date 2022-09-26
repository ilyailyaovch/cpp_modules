/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:07:36 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/17 10:53:17 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

phoneBook::phoneBook(){
	this->numbContacts	= 0;
	this->overFilled 	= false;
}

phoneBook::~phoneBook() {}

void    phoneBook::showPreview(std::string	argument){
	std::cout << argument << std::endl;
	std::cout << "Enter command [ADD, SEARCH, EXIT]" << std::endl;	
}

void     phoneBook::quitPhoneBook(void){
    std::cout << "Quitting the program ..." << std::endl;
    exit(EXIT_SUCCESS);
}

void     phoneBook::addContact(void){
	int		indexOfContact;

	indexOfContact = numbContacts % BOOK_SIZE;
	contacts[indexOfContact].selfInit();
	if (std::cin.eof())
            phoneBook::quitPhoneBook();
	++numbContacts;
	++indexOfContact;
	if (indexOfContact > BOOK_SIZE - 1){
		std::cout << "|----Phonebook is filled-------------------|" << std::endl;
		std::cout << "|----Next contact will replace first one!--|" << std::endl;
		overFilled = true;
	} else{
		std::cout << "Add on: " << indexOfContact << "/8" << std::endl;
	}
	
	std::cout << std::endl;
}

void	phoneBook::searchContact(void){
	unsigned int	indexOfContact;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int index = 0; index < BOOK_SIZE; index++){
		std::cout << "|" << std::setw(10) << index + 1;
		contacts[index].displayTable();
	}
	std::cout << "|-------------------------------------------|"<< std::endl;
	std::cout << "Which contact do you want to display ? (ID)"	<< std::endl;
	std::cin  >> indexOfContact;
	if (std::cin.fail()){
		std::cin.clear();
	}else if (overFilled && indexOfContact >= 1 && indexOfContact <= BOOK_SIZE){
		contacts[indexOfContact - 1].displayContact();
	} else if (!overFilled && indexOfContact >= 1 && indexOfContact <= numbContacts){
		contacts[indexOfContact - 1].displayContact();
	} else if (indexOfContact == 0){
		return ;
	} else{
		std::cout << "Index doesn't exist. Try another."<< std::endl;
	}
}
