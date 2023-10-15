/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:27:12 by codespace         #+#    #+#             */
/*   Updated: 2023/10/15 18:41:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : ICharacter
{
    private:
        std::string _name;
        std::string _inventory[4];//SON MATERIAS???
    public:
        Character();
        Character(const Character& original);
        Character(std::string name);
        ~Character();
        
        const std::string&  getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target); 
};

#endif