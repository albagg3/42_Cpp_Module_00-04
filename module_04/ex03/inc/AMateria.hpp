/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:16:41 by codespace         #+#    #+#             */
/*   Updated: 2023/10/15 16:26:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class AMateria
{
    protected:
    
    public:
        AMateria();                             //Constructor
        AMateria(const AMateria& original);     //Constructor copia
        AMateria(std::string const & type);     //Constructor que define el type
        // virtual ~AAnimal();
        ~AMateria();                            //Destructor
        
        std::string const & getType() const;     //Returns the materia type;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
        
};

#endif