/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:06:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/21 13:40:26 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap	robot1("Wallie");
	ClapTrap	robot2("r2d2");

	robot1.attack(robot2.getName());
	robot2.takeDamage(1);
	robot1.attack(robot2.getName());
	robot2.takeDamage(20);
	robot2.beRepaired(10);
}
