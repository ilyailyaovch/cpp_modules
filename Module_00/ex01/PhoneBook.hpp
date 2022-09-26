/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:07:38 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/17 10:21:44 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"

#define BOOK_SIZE   8
#define PREVIEW     "PhoneBook: ver 1.2"
#define ERROR_MSG   "Command is unsupported"

class phoneBook
{
    private:
        Contact     contacts[BOOK_SIZE];
        int         numbContacts;
        bool        overFilled;

    public:
        phoneBook();
        ~phoneBook();
        void    showPreview(std::string argument);
        void    quitPhoneBook(void);
        void    addContact(void);
        void    searchContact(void);
};

#endif