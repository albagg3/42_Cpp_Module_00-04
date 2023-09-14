/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:08:22 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/14 17:48:45 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {

	private:
		std::string		_name;
		Weapon*			_weapon;
	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);

		void attack	() const;
		void setWeapon(Weapon& weapon);
};

#endif

// Un pointer puede ser NULL

