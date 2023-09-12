/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:20:03 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/12 13:02:19 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
	private:
		std::string	_name;
		
	public:
		Zombie(std::string	name);
		~Zombie(void);
		void	announce(void);
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
