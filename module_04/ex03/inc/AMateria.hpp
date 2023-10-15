/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:16:41 by codespace         #+#    #+#             */
/*   Updated: 2023/10/15 18:25:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"
class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();                             //Constructor
        AMateria(const AMateria& original);     //Constructor copia
        AMateria(std::string const & type);     //Constructor que define el type
        // virtual ~AAnimal();
        ~AMateria();                            //Destructor
        
        const std::string& getType() const;     //Returns the materia type;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
        
};

#endif