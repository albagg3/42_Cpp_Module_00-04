/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:57 by codespace         #+#    #+#             */
/*   Updated: 2023/09/19 17:32:08 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

//rhs meaning (right hand side)

#include <iostream>
class Fixed {
    
    private:
        int                 _fixed_point;
        static const int    _fractional_bits = 8;


    public:
    //Des/Constructores
        Fixed(); // se podria pasar una referencia a la variable privada???
        Fixed(const int number); 
		Fixed(const float number);
        Fixed(const Fixed& other); //constructor de copia
        ~Fixed();

    //Operador de asignacion de copia
        Fixed&	operator=(const Fixed& rhs);
		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;
		Fixed&	operator++(void) ;
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		bool	operator>(const Fixed& rhs)const;
	
		bool	operator<(const Fixed& rhs) const ;
		bool	operator>=(const Fixed& rhs)const ;
		bool	operator<=(const Fixed& rhs) const;
		bool	operator==(const Fixed& rhs)const ;
		bool	operator!=(const Fixed& )const ;

		int		getRawBits (void);
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed& max(Fixed& one, Fixed& two);
		static Fixed& min(Fixed& one, Fixed& two);
		static const Fixed& max(const Fixed& one, const Fixed& two);
		static const Fixed& min(const Fixed& one, const Fixed& two);
};

std::ostream& operator<< (std::ostream &out, const Fixed &object);

#endif


