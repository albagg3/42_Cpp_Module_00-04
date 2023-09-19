/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:57 by codespace         #+#    #+#             */
/*   Updated: 2023/09/19 18:07:34 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
    
    private:
        int                 _fixed_point;
        static const int    _fractional_bits = 8;

    public:
    //Des/Constructores
        Fixed(); 
        Fixed(const Fixed& other); //constructor de copia
        ~Fixed();
    //Operador de asignacion de copia
        Fixed& operator=(const Fixed& other);
		
		int		getRawBits (void);
		void	setRawBits(int const raw);
};

#endif