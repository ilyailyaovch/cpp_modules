#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array(void): element(NULL), len(0){
	element = new T[0];
	std::cout << GREEN << "Empty Array Created!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) :element(NULL), len(n){
	element = new T[n];
	std::cout << GREEN << "Array Created!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T>& copy) : element(NULL), len(copy.len){
	element = new T[len];
	for (unsigned int i = 0; i < len; ++i){
		element[i] = copy[i];
	}
	std::cout << GREEN << "Copy Array Created!" << RESET << std::endl;
}

template <typename T>
Array<T>::~Array(void){
	delete [] element;
	std::cout << GREEN << "Array Deleted!" << RESET << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator = (Array<T>& rhs){
	if (element)
		delete [] element;
	element = new T[rhs.len];
	for (unsigned int i = 0; i < rhs.len; i++)
		element[i] = rhs.element[i];
	len = rhs.len;
    std::cout << GREEN << "Assigned Array" << RESET << std::endl;
	return *this;
};

template <typename T>
T&	Array<T>::operator [] (unsigned int i){
	if (len <= i || i < 0)
		throw (OutofRangeException);
	return (element[i]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const{
	if (len <= i || i < 0)
		throw (OutofRangeException);
	return (element[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const{
	return (len);
}

#endif