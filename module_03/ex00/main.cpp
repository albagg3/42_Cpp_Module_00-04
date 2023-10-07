/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:06:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/07 11:56:41 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{

	ClapTrap	robot1("Wallie");
	ClapTrap	robot2("r2d2");
	// ClapTrap	robot3(robot1);
	robot1.attack(robot2.getName());//Wallie ataca y pierde un energy point
	robot2.takeDamage(1);			//R2D2 pierde un punto de hit_points
	robot1.attack(robot2.getName());//Wallie ataca y pierde un energy point
	robot2.takeDamage(5);			//R2D2 pierde cinco punto de hit_points
	robot2.beRepaired(2);			//R2D2 se repara, pierde un energy point y gana 2 hit_points
	robot1.attack(robot2.getName());//Wallie ataca y pierde un energy point
	robot2.takeDamage(15);			//R2D2 pierde quince puntos de hit_points y muere
	robot2.attack(robot1.getName());//R2D2 no puede atacar porque esta muerto
}
