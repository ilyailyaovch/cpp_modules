/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:42:07 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/26 13:17:32 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string fileName, std::string strOld, std::string strNew):
    fileName(fileName),
    strOld(strOld),
    strNew(strNew){
    fileNameReplace = fileName + ".replace";
}

Sed::~Sed(){
}

void Sed::checkEmptyInput(void){
    if (fileName.length() == 0 || strOld.length() == 0 || strNew.length() == 0){
            std::cout << "One argument is empty";
            std::cout << std::endl;
            exit (EXIT_FAILURE);
        }
}

void Sed::fileToBuffer(void){
    std::string     tempLine;
    std::ifstream   fileRead;

    fileRead.open(fileName, std::fstream::in);
    if (!fileRead.is_open()){
        std::cout << "Error with opening file" << std::endl;
        exit (EXIT_FAILURE);
    }
    while (getline(fileRead, tempLine)){
        bufferContent += tempLine;
        if (!fileRead.eof())
            bufferContent += "\n";
    }
    fileRead.close();
}

void Sed::bufferToFile(void){
    std::string     tempLine;
    std::ofstream   fileWrite;

    fileWrite.open(fileNameReplace, std::fstream::out);
    if (!fileWrite.is_open()){
        std::cout << "Error with opening file" << std::endl;
        exit (EXIT_FAILURE);
    }
    fileWrite << bufferContent;
    fileWrite.close();
}

void Sed::replaceContent(std::string &bufferContent){
    std::string finalResult;
    std::string::const_iterator end = bufferContent.end();
    std::string::const_iterator current = bufferContent.begin();
    std::string::const_iterator occurance = std::search(current, end, strOld.begin(), strOld.end());
 
    while (occurance != end){
        finalResult.append(current, occurance); //add before occurance
        finalResult.append(strNew);             //add new str
        current = occurance + strOld.length();  //move iterator after occurance
        occurance = std::search(current, end, strOld.begin(), strOld.end());
    }
    finalResult.append(current, occurance);     //add till the end
    bufferContent = finalResult;
}

void Sed::searchAndReplace(void){
    checkEmptyInput();
    fileToBuffer();
    replaceContent(bufferContent);
    bufferToFile();
}