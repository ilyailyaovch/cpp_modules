/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:21:05 by pleoma            #+#    #+#             */
/*   Updated: 2022/08/01 19:37:20 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "MyData.hpp"

/*
Позволяет преобразовывать любой указатель в указатель любого другого типа.
Также позволяет преобразовывать любой целочисленный тип 
в любой тип указателя и наоборот.
*/

uintptr_t serialize(Data* ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return(reinterpret_cast<Data *>(raw));
}

int main(void){
    Data        *data = new Data();
    uintptr_t   data_serialized;
    Data        *data_deserialized;

    data->signedValue = -42;
    data->unsignedValue = 42;
    std::cout << "Data address : " << data << std::endl;
    std::cout << "Data values : " << data->signedValue;
    std::cout << " " << data->unsignedValue << std::endl;

    data_serialized = serialize(data);
    std::cout << "Data serialized uintptr_t : ";
    std::cout << data_serialized << std::endl;

    //int i = reinterpret_cast<int>(data_serialized);
    
    data_deserialized = deserialize(data_serialized);
    std::cout << "Data deserialized address : " ;
    std::cout << data_deserialized << " = " << data << std::endl;
    std::cout << "Data values : " << data_deserialized->signedValue;
    std::cout << " " << data_deserialized->unsignedValue << std::endl;
    
    delete data;
    return 0;
}