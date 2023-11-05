/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:16:41 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 18:42:45 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define GREY "\e[90m"
#define RESET "\e[0m"
#define BOLDBLUE "\033[216;1m"

class ICharacter;
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
        virtual void        use(ICharacter& target) = 0;
        
};

#endif