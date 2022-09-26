/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:32:55 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/03 16:59:31 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
#include <string>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>

class ReachedLimitException : public std::exception{
	public:
		ReachedLimitException(void){return ;};
		~ReachedLimitException(void) throw(){return ;};
        const char *what(void) const throw(){
            return("Limit reached");
        }
};

class TooShortToFindSpan : public std::exception{
	public:
		TooShortToFindSpan(void){return ;};
		~TooShortToFindSpan(void) throw(){return ;};
        const char *what(void) const throw(){
            return("Too short to find any span");
        }
};

class Span{
    private:
        unsigned int        len;
        std::vector<int>    object;
    public:
        //  Canonocal //
        Span(void);
        Span(unsigned int inputNumber);
        Span(const Span &copy);
        ~Span(void);
        Span &operator = (const Span &rhs);
        //  Getters //
        unsigned int        getLen(void)    const;
        std::vector<int>    getObject()     const;
        //  Methods //
        void    addNumber(int nb);
        void    addRange(std::vector<int>::iterator begin,
                        std::vector<int>::iterator end);
        int     longestSpan(void)   const;
        int     shortestSpan(void)  const;
        //  Exeptions //
        ReachedLimitException   ReachedLimitException;
        TooShortToFindSpan      TooShortToFindSpan;
};

std::ostream &operator << (std::ostream &out, const Span &rhs);

#endif