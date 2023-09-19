/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:46 by codespace         #+#    #+#             */
/*   Updated: 2023/09/19 18:07:36 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//**************************PUBLIC*****************************************//

//--------------------CONSTRUCTOR-----------------------------------------//
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

//METHODS
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


