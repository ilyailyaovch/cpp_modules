/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:20:50 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 13:59:38 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class HARL{
    private:
        void    debug(void);
        void 	info(void);
        void 	warning(void);
        void 	error(void);
    public:
        HARL(void);
        ~HARL(void);
        void    complain(std::string level);
};

#endif