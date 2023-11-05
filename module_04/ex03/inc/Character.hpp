/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:27:12 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 18:33:20 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];
		AMateria* _unequipped_materias[4];
    public:
        Character();
        Character(const Character& original);
        Character(std::string name);
        ~Character();
        

        Character&    operator=(const Character& rhs);
        const std::string&  getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target); 
};

#endif