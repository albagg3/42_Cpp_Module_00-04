/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:49:19 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/12 13:05:11 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie	*zombie_one;
	
	zombie_one = newZombie("Matias");
	zombie_one->announce();
	randomChump("Piedad");
	delete zombie_one;
	
}
