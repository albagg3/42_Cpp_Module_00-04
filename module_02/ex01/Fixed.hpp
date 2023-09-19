/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:57 by codespace         #+#    #+#             */
/*   Updated: 2023/09/19 11:29:45 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
class Fixed {
    
    private:
        int                 _fixed_point;
        static const int    _fractional_bits = 8;
		void				_float_to_fix(float floating_point);

    public:
    //Des/Constructores
        Fixed(); // se podria pasar una referencia a la variable privada???
        Fixed(const int number); 
		Fixed(const float number);
        Fixed(const Fixed& other); //constructor de copia
        ~Fixed();
    //Operador de asignacion de copia
        Fixed& operator=(const Fixed& other);
		
		int		getRawBits (void);
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
	
};

std::ostream& operator<< (std::ostream &out, const Fixed &object);

#endif


