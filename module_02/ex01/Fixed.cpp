/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:46 by codespace         #+#    #+#             */
/*   Updated: 2023/09/19 12:16:32 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// #include <iostream>
//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//
//Default constructor
Fixed::Fixed() : _fixed_point(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Copy constructor
Fixed::Fixed(const Fixed& other) : _fixed_point(other._fixed_point){ //esta bien???
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

//Int constructor
Fixed::Fixed(const int integer) : _fixed_point(integer << this->_fractional_bits){
	std::cout << "Int constructor called" << std::endl;
	return ;
}

//Float constructor
Fixed::Fixed(const float floating_point) : _fixed_point(int(roundf(floating_point * (1 << this->_fractional_bits )))){
	std::cout << "Float constructor called" << std::endl;
	// this->_float_to_fix(floating_point);
	// std::cout << "Fixed point es: " << (this->_fixed_point ) << std::endl;
	return ;
}

//Destructor
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

//-------------------------------------------------------------------------//
//Operador de asignacion

Fixed& Fixed::operator=(const Fixed& other){
    if(this == &other)
        return *this;
	std::cout << "Copy Assignament operator called" << std::endl;
    this->_fixed_point = other._fixed_point;
    return *this;
}

//Methods
int		Fixed::getRawBits(void){
	// std::cout << "getRawBits memeber function called" << std::endl;
	return(this->_fixed_point);
}

void	Fixed::setRawBits(int const raw){
	this->_fixed_point = raw;
}


float	Fixed::toFloat( void ) const{
	return (float)this->_fixed_point / (float)(1 << this->_fractional_bits);

}

int Fixed::toInt( void ) const{
	
	return this->_fixed_point >> this->_fractional_bits; 
}

//overloaded operator
std::ostream& operator<< (std::ostream &out, const Fixed &object)
{
    out << object.toFloat();
    return out;
}
//**************************PRIVATE*****************************************//


// void Fixed::_float_to_fix(float floating_point){
// 	long long	int_part;
// 	long long	fract_part;
// 	float	exp;

// 	if (floating_point > 0)
//     	int_part = ((int)floor(floating_point));
// 	else
//     	int_part = ((int)ceil(floating_point)); // need to round towards 0
// 	// int_part = (int) floating_point;
// 	int_part = int_part << _fractional_bits;
// 	fract_part = 0;
// 	floating_point -= (int) floating_point;
// 	exp = 0.5;
// 	for(int i = 0; i < _fractional_bits; i++)
// 	{
// 		if(floating_point > exp)
// 		{
// 			fract_part += 1 << (_fractional_bits - 1 - i);
// 			exp /= 2 ;
// 		}

// 	}
// 	this->_fixed_point = int_part + fract_part;
// }