/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:48:51 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/31 12:57:39 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
    private:
        RobotomyRequestForm(void);
    public:
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        //  Action //
        virtual void FormFunction(void) const;
};
#endif