/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:20:03 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/13 18:31:44 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
	private:
		std::string	_name;
		
	public:
		Zombie();
		Zombie(std::string	name);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
