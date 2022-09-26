/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:48:51 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 12:59:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
    private:
        PresidentialPardonForm(void);
    public:
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        //  Action //
        virtual void FormFunction(void) const;
};
#endif