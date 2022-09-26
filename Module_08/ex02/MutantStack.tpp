#ifndef MutantStack_TPP
# define MutantStack_TPP

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void){
	std::cout << "MutantStack Created!" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy){
    std::cout << "MutantStack copied!" << std::endl;
    *this = copy;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator = (const MutantStack<T>& rhs){
	this->c = rhs.c;
    std::cout << "MutantStack assigned!" << std::endl;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(void){
			std::cout << "MutantStack Deleted!" << std::endl;
};

template <typename T>
typename std::stack<T>::container_type::iterator   MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator    MutantStack<T>::end(void) {
	return (this->c.end());
}

#endif