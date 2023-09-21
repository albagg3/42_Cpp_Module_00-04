/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:06:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/21 18:55:10 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
int main ()
{

	ScavTrap	robot1("Wallie");
	ScavTrap	robot2("R2d2");
	// ClapTrap	robot3(robot1);
	robot1.attack(robot2.getName());
	robot2.takeDamage(1);
	// robot1.attack(robot2.getName());
	// robot2.takeDamage(5);
	robot2.beRepaired(1);
	robot2.guardGate();
	// robot1.attack(robot2.getName());
	// robot2.takeDamage(15);
	// robot2.attack(robot1.getName());
}
