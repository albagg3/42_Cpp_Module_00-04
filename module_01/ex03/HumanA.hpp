/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:07:52 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/14 16:45:33 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {

	private:
		std::string		_name;
		Weapon& 		_weapon;

	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA(void);
		
		void attack	() const;
		void setWeapon(Weapon& weapon);
};

#endif

//Una referencia siempre no puede ser NULL siempre tiene que tener un valor

