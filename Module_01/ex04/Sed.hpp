/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:37:56 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 12:45:52 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sed_HPP
# define Sed_HPP

#include <iostream>
#include <fstream>
#include <algorithm>

class Sed{
    private:
        std::string fileName;
        std::string fileNameReplace;
        std::string strOld;
        std::string strNew;
        std::string bufferContent;
        void checkEmptyInput(void);
        void fileToBuffer(void);
        void bufferToFile(void);
        void replaceContent(std::string &bufferContent);
    public:
        Sed(std::string fileName,
            std::string strOld,
            std::string strNew);
        ~Sed();
        void    searchAndReplace(void);
        
};

#endif