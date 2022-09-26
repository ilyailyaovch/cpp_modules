/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:20:11 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/16 09:37:59 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{   
    phoneBook       myPhoneBook;
    std::string     line;

    myPhoneBook.showPreview(PREVIEW);
    while (true)
    {
        std::cout << "Enter command : ";
        std::cin >> line;
        if (std::cin.eof())
            myPhoneBook.quitPhoneBook();
        if (line == "ADD")
            myPhoneBook.addContact();
        else if (line == "SEARCH")
            myPhoneBook.searchContact();
        else if (line == "EXIT")
            myPhoneBook.quitPhoneBook();
        else
            myPhoneBook.showPreview(ERROR_MSG);
    }
    return (EXIT_SUCCESS);
}