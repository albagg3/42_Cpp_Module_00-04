/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:46 by codespace         #+#    #+#             */
/*   Updated: 2023/09/19 18:08:17 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
//**************************PUBLIC*****************************************//

//--------------------CONSTRUCTOR------------------------------------------//
Fixed::Fixed() : _fixed_point(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other) : _fixed_point(other._fixed_point){ 
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

//-------------------------------------------------------------------------//
//Operador de asignacion
Fixed& Fixed::operator=(const Fixed& other){
    if(this == &other)
        return *this;
	std::cout << "Assignation operator called" << std::endl;	
    this->_fixed_point = other._fixed_point;
    return *this;
}

//Methods
int		Fixed::getRawBits(void){
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixed_point);
}

void	Fixed::setRawBits(int const raw){
	
	this->_fixed_point = raw; 
}
//**************************PRIVATE*****************************************//
