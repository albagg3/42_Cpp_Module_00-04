/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:46 by codespace         #+#    #+#             */
/*   Updated: 2023/09/17 18:57:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//
Fixed::Fixed() : _fixed_point(0){

	return ;
}

Fixed::Fixed(const Fixed& other) : _fixed_point(other._fixed_point){ //esta bien???

	return ;
}

Fixed::~Fixed(){

	return ;
}

//-------------------------------------------------------------------------//
//Operador de asignacion
Fixed& Fixed::operator=(const Fixed& other){
    if(this == &other)
        return *this;
    this->_fixed_point = other._fixed_point;
    return *this;
}

//**************************PRIVATE*****************************************//
