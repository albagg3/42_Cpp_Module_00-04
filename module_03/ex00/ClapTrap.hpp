/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:05:55 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/22 10:36:22 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//constructor de copia
//operador de asignacion
//constructor default
//destructor

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define GREY "\e[90m"
#define RESET "\e[0m"


class	ClapTrap {
	private:
		std::string		_name;
		int				_hit_points;
		int				_energy_points;
		int				_attack_damage;
	
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& original);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& rhs);

		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		//setters
		void				setName(const std::string& name);
		void				setHitPoints(int hit_points);
		void				setEnergyPoints(int energy_points);
		void				setAttackDamage(int attack_damage);
		//getters
		const std::string&	getName(void) const;
};

#endif
