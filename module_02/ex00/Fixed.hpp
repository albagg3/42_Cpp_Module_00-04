/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:57 by codespace         #+#    #+#             */
/*   Updated: 2023/09/17 18:57:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
    
    private:
        int                 _fixed_point;
        static const int    bits = 8;

    public:
    //Des/Constructores
        Fixed(); // se podria pasar una referencia a la variable privada???
        Fixed(const Fixed& other); //constructor de copia
        ~Fixed();
    //Operador de asignacion de copia
        Fixed& operator=(const Fixed& other);
};

#endif