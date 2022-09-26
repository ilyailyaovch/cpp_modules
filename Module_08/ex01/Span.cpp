/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:32:58 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/03 19:30:35 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//  Canonical //

Span::Span(void){
    this->len = 0;
    //std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int inputNumber){
    this->len = inputNumber;
    //std::cout << "Constructor called" << std::endl;
}

Span::Span(const Span &copy){
    this->len = copy.getLen();
    this->object = copy.getObject();
    //std::cout << "Copy constructor called" << std::endl;
}

Span::~Span(void){
    //std::cout << "Destructor called" << std::endl;
}

Span&   Span::operator = (const Span &rhs)
{
	this->len = rhs.getLen();
	this->object = rhs.getObject();
    //std::cout << "Assignment called" << std::endl;
	return (*this);
}

//  Getters //

unsigned int    Span::getLen(void) const{
    return this->len;
}

std::vector<int>    Span::getObject() const{
    return this->object;
}

//  Methods //
void    Span::addNumber(int nb){
    if (object.size() < len)
        object.push_back(nb);
    else
        throw Span::ReachedLimitException;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	srand (time(NULL));
    std::vector<int> tmp(begin, end);
    
	if (tmp.size() > len - object.size())
		throw Span::ReachedLimitException;
	//std::generate(tmp.begin(), tmp.end(), std::rand);
	object.insert(object.end(), tmp.begin(), tmp.end());
}
    
int     Span::longestSpan(void)   const{
    if (object.size() < 2 || len < 2)
        throw Span::TooShortToFindSpan;
    int min = *min_element(object.begin(),object.end());
    int max = *max_element(object.begin(),object.end());
    return max - min;
}

int     Span::shortestSpan(void)  const{
    int              rez;
    std::vector<int> tmnObj = this->object;
    std::vector<int>::iterator begin = tmnObj.begin();
    std::vector<int>::iterator end = tmnObj.end();
    std::vector<int>::iterator iter;

    if (object.size() < 2 || len < 2)
        throw Span::TooShortToFindSpan;
    std::sort(tmnObj.begin(), tmnObj.end());
    rez = *(begin + 1) - *begin;
    for (iter = begin; iter != end - 1; iter++){
		if (*(iter + 1) - *iter < rez)
            rez = *(iter + 1) - *iter;
	}
    return rez;
}

std::ostream &operator << (std::ostream &out, Span const &rhs){
	std::vector<int> tmnObj = rhs.getObject();
    std::vector<int>::iterator begin = tmnObj.begin();
    std::vector<int>::iterator end = tmnObj.end();
    std::vector<int>::iterator iter;

	out << "Size = " << rhs.getLen()  << std::endl;
	for (iter = begin; iter != end; iter++){
		out << *iter << "  ";
	}
	return out;
}