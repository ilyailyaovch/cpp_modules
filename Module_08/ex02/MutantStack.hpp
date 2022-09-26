/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:14:42 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/03 18:24:40 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

#include <iostream>
#include <string>
#include <stack>
#include <exception>

template <typename T>
class MutantStack: public std::stack<T>{
    private:
        //  No private attributes //
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
    public:
        MutantStack(void);
        MutantStack(const MutantStack<T>& copy);
        MutantStack<T>& operator = (const MutantStack<T>& rhs);
        ~MutantStack(void);

        iterator begin();
        iterator end();

        // OR without declaration in .tpp //
        // iterator begin() { return this->c.begin(); }
	    // iterator end() { return this->c.end(); }
};

#include "MutantStack.tpp"

#endif