/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:05:56 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/22 12:36:45 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	private:
		/* data */
	public:
	
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& original);
		~FragTrap();

	
		void		highFivesGuys();
};



#endif