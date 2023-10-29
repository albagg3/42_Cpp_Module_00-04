/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:16:41 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 19:54:14 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define GREY "\e[90m"
#define RESET "\e[0m"
#define BOLDBLUE "\033[216;1m"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();                             //Constructor
        AMateria(const AMateria& original);     //Constructor copia
        AMateria(std::string const & type);     //Constructor que define el type
        virtual ~AMateria();                    //Destructor
        
        const std::string& getType() const;     //Returns the materia type;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
        
};

#endif