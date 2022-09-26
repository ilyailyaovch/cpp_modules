/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:32:31 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/03 17:12:04 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
        Span sp2 = Span(5);
    
        sp2.addNumber(6);
        sp2.addNumber(3);
        sp2.addNumber(17);
        sp2.addNumber(9);
        sp2.addNumber(11);
        sp2.addNumber(666);
        std::cout << sp2 << std::endl;
    }catch (std::exception & e){
		std::cout << e.what() << std::endl;
    }
    std::cout << "==================" << std::endl;
    {
		try
		{
			Span test(1002);
			std::vector<int> salut(1000);
            
			std::srand(unsigned(std::time(0)));
			std::generate(salut.begin(), salut.end(), std::rand );

			test.addNumber(10);
			test.addNumber(25);
            //test.addNumber(2342231);
			test.addRange(salut.begin(), salut.end());

			std::cout << test << std::endl;
			std::cout << "Shortest " << test.shortestSpan() << std::endl;
			std::cout << "Longest " <<  test.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    std::cout << "==================" << std::endl;
    Span sp = Span(10);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << "Shortest " << sp.shortestSpan() << std::endl;
    std::cout << "Longest " << sp.longestSpan() << std::endl;
    std::cout << sp << std::endl;
    return 0;
}