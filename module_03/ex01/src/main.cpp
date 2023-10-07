/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:06:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/07 12:05:18 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
int main ()
{

	ScavTrap	robot1("Wallie");
	ScavTrap	robot2("R2d2");
	ScavTrap	robot3(robot2);

	std::cout << robot3.getName() << std::endl;
	// ClapTrap	*robot3 = new ScavTrap("Arturito");

	// robot3->attack(robot2.getName());
	std::cout << BOLDBLUE << "[Wallie ataca a R2d2 y le quita 5 hit points, al atacar pierde un energy point.]" << RESET << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot1.ClapTrap::attack(robot2.getName());
	std::cout << BOLDBLUE << "[R2d2 se repara ganando 10 hit points y perdiendo un energy point.]" << RESET <<std::endl;
	robot2.beRepaired(10);
	std::cout << BOLDBLUE <<"[R2d2 es un guardian de la puerta.]" << RESET << std::endl;
	robot2.guardGate();
	robot2.attack(robot1.getName());
	robot1.takeDamage(150);
	std::cout << BOLDBLUE << "[Wallie ya ha muerto asi que no puede volver a morir.]" << RESET<< std::endl;
	robot2.attack(robot1.getName());
	robot1.takeDamage(150);
	std::cout << BOLDBLUE << "[Wallie no puede atacar porque esta muerto.]" << RESET<< std::endl;
	robot1.attack(robot2.getName());
	

	// delete robot3;

}
