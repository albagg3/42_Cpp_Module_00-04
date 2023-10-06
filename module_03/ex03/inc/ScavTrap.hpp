/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:05:56 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/06 17:17:45 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	private:
		/* data */
	public:
	
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& original);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& rhs);
		
		void		attack(const std::string& target);
		void		guardGate();
};



#endif