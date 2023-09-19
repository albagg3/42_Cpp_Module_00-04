/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:46 by codespace         #+#    #+#             */
/*   Updated: 2023/09/19 17:36:33 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// #include <iostream>
//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//

//Default constructor
Fixed::Fixed() : _fixed_point(0){
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

//Copy constructor
Fixed::Fixed(const Fixed& other) : _fixed_point(other._fixed_point){ //esta bien???
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}

//Int constructor
Fixed::Fixed(const int integer) : _fixed_point(integer << this->_fractional_bits){
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

//Float constructor
Fixed::Fixed(const float floating_point) : _fixed_point(int(roundf(floating_point * (1 << this->_fractional_bits )))){
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

//Destructor
Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
	return ;
}

//-------------------------------------------------------------------------//
//OPERATORS
//Assignation

Fixed& Fixed::operator=(const Fixed& rhs){
    if(this == &rhs)
        return *this;
	std::cout << "Copy Assignament operator called" << std::endl;
    this->_fixed_point = rhs._fixed_point;
    return *this;
}

//Addition accept the right hand side as an argument

Fixed Fixed::operator+(const Fixed& rhs) const{
	
	std::cout << "Addition operator called with " << this->toFloat();
	std::cout << "and " << rhs.toFloat() << std::endl;
	
	 return (Fixed(this->toFloat() + rhs.toFloat()));
}

//Substraction
Fixed Fixed::operator-(const Fixed& rhs) const{
	
	std::cout << "Substraction operator called with " << this->toFloat();
	std::cout << "and " << rhs.toFloat() << std::endl;
	
	 return (Fixed(this->toFloat() - rhs.toFloat()));
}

//Multiplication
Fixed Fixed::operator*(const Fixed& rhs) const{
	
	std::cout << "Multiplication operator called with " << this->toFloat();
	std::cout << "and " << rhs.toFloat() << std::endl;
	
	 return (Fixed(this->toFloat() * rhs.toFloat()));
}

//Division
Fixed Fixed::operator/(const Fixed& rhs) const{
	
	std::cout << "Division operator called with " << this->toFloat();
	std::cout << "and " << rhs.toFloat() << std::endl;
	
	 return (Fixed(this->toFloat() / rhs.toFloat()));
}

//prefix increment
Fixed& Fixed::operator++(void) {
	
	// std::cout << "Prefix increment operator called" ;
	this->_fixed_point += 1 ;//<< this->_fractional_bits;
	
	 return (*this);
}

//sufix increment
Fixed Fixed::operator++(int) {
	
	// std::cout << "Suffix increment operator called";
	Fixed	Old;
	Old = *this;
	this->operator++();

	 return (Old);
}

//prefix decrement
Fixed& Fixed::operator--(void) {
	
	// std::cout << "Prefix decrement operator called" ;
	this->_fixed_point -= 1 ;//<< this->_fractional_bits;
	
	 return (*this);
}

//sufix decrement
Fixed Fixed::operator--(int) {
	
	// std::cout << "Suffix decrement operator called";
	this->operator--();
	Fixed	Old;
	Old = *this;

	 return (Old);
}

//Comparison bigger than
bool Fixed::operator>(const Fixed& rhs) const{
	
	if(this->_fixed_point > rhs._fixed_point)
		return(true);
	return (false);
}
// bool Fixed::operator>(Fixed& rhs) {
	
// 	if(this->_fixed_point > rhs._fixed_point)
// 		return(true);
// 	return (false);
// }

bool Fixed::operator<(const Fixed& rhs) const {
	
	if(this->_fixed_point < rhs._fixed_point)
		return(true);
	return (false);
}

bool Fixed::operator>=(const Fixed& rhs) const{
	
	if(this->_fixed_point >= rhs._fixed_point)
		return(true);
	return (false);
}

bool Fixed::operator<=(const Fixed& rhs) const{
	
	if(this->_fixed_point <= rhs._fixed_point)
		return(true);
	return (false);
}

bool Fixed::operator==(const Fixed& rhs) const{
	
	if(this->_fixed_point == rhs._fixed_point)
		return(true);
	return (false);
}

bool Fixed::operator!=(const Fixed& rhs ) const{
	
	if(this->_fixed_point != rhs._fixed_point)
		return(true);
	return (false);
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

Fixed& Fixed::max(Fixed& one, Fixed& two){
	if(one > two)
		return(one);
	return(two);
}

Fixed& Fixed::min(Fixed& one, Fixed& two){
	if(one < two)
		return(one);
	return(two);
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two){
	if(one > two)
		return(one);
	return(two);
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two){
	if(one < two)
		return(one);
	return(two);
}


//overloaded operator
std::ostream& operator<< (std::ostream &out, const Fixed &object)
{
    out << object.toFloat();
    return out;
}
//**************************PRIVATE*****************************************//

